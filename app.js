const Observable = require('FuseJS/Observable');

let limit = Observable(10); // Size of list buffer (performance)
let offset = Observable(0); // Not in use in current implementation
let activeIndex = Observable(0);
let list = Observable();
let doingShuffle = Observable(false);
let loaded = Observable(false);

let data = require('mock');
let colors = [
  '#9C27B0',
  '#3F51B5',
  '#00BCD4',
  '#03A9F4',
  '#2196F3',
  '#673AB7',
  '#009688',
  '#4CAF50'
]

makeList()

// Make list from data, add to list observable
function makeList() {
  console.log('making list');

  // If data is shorter than limit, decrease limit
  limit.value = Math.min(limit.value, data.length);

  // Create new, shuffled array from data (leave data intact)
  let array = shuffleArray(data);
  colors = shuffleArray(colors);
  array = colorizeArray(array);
  console.dir(array);

  // Clear to avoid back scroll animation
  // list.clear();

  activeIndex.value = 0;
  list.replaceAll(array);

  loaded.value = true;
}

// Trigger list shuffle with timeout
function shuffleList() {
  doingShuffle.value = true;
  makeList();
  setTimeout(() => doingShuffle.value = false, 1000);
}

// Pure function to shuffle array
function shuffleArray(oldArray) {
  let array = JSON.parse(JSON.stringify(oldArray));
  for (let i = array.length - 1; i > 0; i--) {
    let j = Math.floor(Math.random() * (i + 1));
    [array[i], array[j]] = [array[j], array[i]];
  }
  return array;
}

// Pure function to add colors to array
function colorizeArray(oldArray) {
  return oldArray.map((item, index) => {
    item.color = getColor(index);
    return item;
  })
}

// Return incrementing colors from color array
function getColor(index) {
  if (index >= colors.length) {
    return getColor(index - colors.length);
  }

  return colors[index];
}

function onActivated(sender) {
  console.log(activeIndex.value);

  // When on last slide, create a new list,
  // rewind and keep at it :)
  // if (activeIndex.value > (limit.value -2)) {
  //   makeList(sender.data);
  // }
}

module.exports = {
  list: list,
  limit: limit,
  offset: offset,
  activeIndex: activeIndex,
  onActivated: onActivated,
  shuffleList: shuffleList,
  loaded: loaded,
  doingShuffle: doingShuffle
};
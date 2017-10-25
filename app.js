const Observable = require('FuseJS/Observable');

let limit = Observable(10); // Size of list buffer (performance)
let offset = Observable(0); // Not in use in current implementation
let activeIndex = Observable(0);
let list = Observable();
let doingShuffle = Observable(false);
let loaded = Observable(false);

let data = require('mock');

makeList()

function makeList() {
  console.log('making list');
  if (list.value) {
    doingShuffle.value = true;
    setTimeout(()=> doingShuffle.value = false, 1000);
  }

  // If data is shorter than limit, decrease limit
  limit.value = Math.min(limit.value, data.length);

  // Create new, doingShuffled array from data (leave data intact)
  let array = doingShuffleArray(data);
  
  // Clear to avoid back scroll animation
  // list.clear();

  activeIndex.value = 0;
  list.replaceAll(array);

  loaded.value = true;
}

// Pure function to shuffle array
function doingShuffleArray(oldArray) {
  let array = JSON.parse(JSON.stringify(oldArray));
  for (let i = array.length - 1; i > 0; i--) {
    let j = Math.floor(Math.random() * (i + 1));
    [array[i], array[j]] = [array[j], array[i]];
  }
  return array;
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
  makeList: makeList,
  loaded: loaded,
  doingShuffle: doingShuffle
};
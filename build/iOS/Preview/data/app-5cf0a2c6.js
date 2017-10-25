// TODO: Get data from somewhere else :)
const data = [
    {
        "colorName":"Red",
        "hexValue":"#F44336",
        "text":"My prayers are powerful and effective"
    },
    {
        "colorName":"Pink",
        "hexValue":"#E91E63",
        "text":"God richly supplies all my needs"
    },
    {
        "colorName":"Purple",
        "hexValue":"#9C27B0",
        "text":"I am dead to sin and alive to live supernaturally"
    },
    {
        "colorName":"Deep purple",
        "hexValue":"#673AB7",
        "text":"I walk in ever-increasing health"
    },
    {
        "colorName":"Indigo",
        "hexValue":"#3F51B5",
        "text":"I live under supernatural protection"
    },
    {
        "colorName":"Blue",
        "hexValue":"#2196F3",
        "text":"Like Jesus, I prosper in all my relationships"
    },
    {
        "colorName":"Light blue",
        "hexValue":"#03A9F4",
        "text":"I consistently bring God encounters to other people"
    },
    {
        "colorName":"Cyan",
        "hexValue":"#00BCD4",
        "text":"Through Jesus, I am 100% loved and worthy to receive all of God’s blessings"
    },
    {
        "colorName":"Teal",
        "hexValue":"#009688",
        "text":"Each of my family members is wonderfully blessed and radically loves Jesus"
    },
    {
        "colorName":"Green",
        "hexValue":"#4CAF50",
        "text":"I uproariously laugh when I hear a lie from the devil"
    }
];

const Observable = require("FuseJS/Observable");

let limit = Observable(10); // Size of list buffer (performance)
let offset = Observable(0); // Not in use in current implementation
let activeIndex = Observable(0);
let list = Observable();
let doingShuffle = Observable(false);
let loaded = Observable(false);

makeList()

function makeList() {
  console.log('making list');
  if (list.value) {
    doingShuffle.value = true;
    setTimeout(()=> doingShuffle.value = false, 1500);
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
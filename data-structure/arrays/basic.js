// let arr = [1, 2, 3, 4, 5];
// let brr = arr;
// console.log(arr === brr); // true

// brr.push(10);
// console.log(arr); // [1, 2, 3, 4, 5, 10]

// brr.pop();
// console.log(arr); // [1, 2, 3, 4, 5]
// brr.shift();
// console.log(arr); // [2, 3, 4, 5, 10]



let arr = [21, 4, 23, 89, 12, 1]
arr.sort((a, b) => a - b);
// console.log(arr); // [1, 4, 12, 21, 23, 89]




// const map = new WeakMap();
// const obj = {};

// map.set(obj, 'value');
// console.log(map.get(obj)); // 'value'





console.log("{")
arr.map((item, index) => {
  console.log(`Index: ${index}, Value: ${item}`);
})
console.log("}")
//  [21, 4, 23, 89, 12, 1]
const brr = arr.filter((number) => number >= 12)
console.log("Filter it");
console.log(brr)
console.log("Filter it end")


const total = arr.reduce((accumulator, currentValue) => {
  console.log(`Accumulator: ${accumulator}, Current Value: ${currentValue}`);
  return accumulator + currentValue;
}, 0);
console.log("Total:", total); // Total: 150

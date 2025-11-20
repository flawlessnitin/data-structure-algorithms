// input -> [1, 2, 3, 4, 5]
// output -> [5, 4, 3, 2, 1]

function reverseAnArray(num: number[], start: number, end: number): number[] {
  if(start > end) {
    return num;
  } 
  [num[start], num[end]] = [num[end], num[start]];
  return reverseAnArray(num, start + 1, end - 1);
}

const arr = [1, 2, 3, 4, 5];
let start = 0;
let end = arr.length;

const reverseArr = reverseAnArray(arr, start, end - 1);
console.log(reverseArr)




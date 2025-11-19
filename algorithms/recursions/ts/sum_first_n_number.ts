// function sumFirstNNumber(num: number, sum: number):void {
//   if(num < 1) {
//     console.log("Sum is: ", sum);
//     return;
//   }
//   sumFirstNNumber(num -1, sum + num);
// }

function sumFirstNNumber(num: number): number {
  if (num < 1) {
    return 0;
  }
  return num + sumFirstNNumber(num - 1);
}
// sumFirstNNumber(5, 0);
const sum = sumFirstNNumber(15);
console.log(sum);

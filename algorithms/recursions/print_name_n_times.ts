// function printNameNTimes(personName: string, times: number): void {
//   if(times <= 0) {
//     return;
//   }
//   console.log(personName);
//   printNameNTimes(personName, times - 1);
// }

function print(value: string) {
  console.log(value);
}
function printNameNTimes(iteration: number, times: number) {
  if(iteration > times) {
    return;
  }
  print("Nitin");
  printNameNTimes(iteration + 1, times);
}

const personName: string = "Nitin";
const times: number = 5;
// printNameNTimes(personName, times);
printNameNTimes(1, times);

// what is the time complexity of this function ? 
// The time complexity of this function is O(n), where n is the number of times the name is printed.

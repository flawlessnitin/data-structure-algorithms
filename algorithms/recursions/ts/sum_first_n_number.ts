function sumFirstNNumber(num: number, sum: number):void {
  if(num < 1) {
    console.log("Sum is: ", sum);
    return;
  }
  sumFirstNNumber(num -1, sum + num);
}

sumFirstNNumber(5, 0);

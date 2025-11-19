function factorialOfNNumber(n: number): number {
  if(n < 1) {
    return 1;
  }
  return n * factorialOfNNumber(n - 1);
}

const fact = factorialOfNNumber(5);
console.log(fact);

function print_1_to_n(n: number, current: number): void {
  if(current > n) {
    return;
  }
  console.log(current);
  print_1_to_n(n, current + 1);

}


print_1_to_n(6, 1);

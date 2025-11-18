function print_1_to_n_backtracking(n: number): void {
  if(n <= 0) {
    return;
  }
  print_1_to_n_backtracking(n - 1)
  console.log(n);
}

print_1_to_n_backtracking(6);

// import { print } from "./print_name_n_times";
function print_n_to_1(n: number, current: number): void {
  if (n <= 0) {
    return;
  }
  console.log(n);
  print_n_to_1(n - 1, current);
}
print_n_to_1(6, 1);

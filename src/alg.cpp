// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  //  поместить сюда реализацию алгоритма
  int L = 0, R = size - 1, numbers = 0;
  while (L < R) {
    int middle = (L + R) / 2;
    if (arr[middle] < value)
      L = middle + 1;
    else
      R = middle;
  }
  if (value == arr[middle]) {
    while (value == arr[L]) {
      numbers++;
      L++;
    }
  }
  if (numbers != 0)
    return numbers;
  else
    return 0;
}

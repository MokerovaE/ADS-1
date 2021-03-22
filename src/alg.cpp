// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  //  поместить сюда реализацию алгоритма
  return 0; // если ничего не найдено
  int L = 0, R = size -1, middle, numbers = 0;// L - левая граница, R - правая граница, middle - середина
  while (L < R) {
    middle = (L + R) / 2;
    if (value > arr[middle])
      L = middle + 1;
    else
      R = middle;
  }
  if (value == arr[middle]) {
    while (value == arr[L]) {
      numbers += 1;
      L += 1;
    }
  }
  if (numbers != 0)
    return numbers;
  else
    return 0;
}

// NIM - NAMA

#include <stdio.h>

int main(int _argc, char **_argv)
{
  int n, i, min, max;
  
  scanf("%d", &n);
  
  int angka[n];
  
  for (i = 0; i < n; i++){
    scanf("%d", &angka[i]);
  }
  
  min = angka[0];
  max = angka[0];
  
  for (i = 1; i < n; i++){
    if (angka[i] < min){
      min = angka[i];
    }
    if (angka[i] > max){
      max = angka[i];
    }
  }
  printf("%d\n", min);
  printf("%d\n", max);
  return 0;
}
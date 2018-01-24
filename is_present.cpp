#include <stdio.h>

int is_present(int * begin, int * end, int elem){
  while (begin < end){
    if (*begin == elem){
      return 1;
    }
    begin++;
  }
  return 0;
}

int main(){
  int tab[6] = {1, 2, 3, 4, 5, 6};
  bool res = is_present(tab, tab +  sizeof(tab) / sizeof(*tab), 8);
  printf("%d\n", res);
  return 0;
}



#include <stdio.h>

int main()
{
     /* to calculate the only non repeating element */
    int arr[] = {1,2,1,2,3,4,3,5,5};
    int res =  0;
    for (int i = 0; i < 9; ++i) {
        res = res ^ arr[i];        /* xor compare each bit if same then 0 otherwise 1*/
  }
  printf("%d", res);
}



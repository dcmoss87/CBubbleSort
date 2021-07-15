#include <stdio.h>

int main ( )
{
    int x, y, temp;
    int arr1[10];
    int arr2[10];
    int menu;

    while (menu != 4) {

    printf (" 1. Enter Numbers\n 2. Display Tables of Numbers\n 3. Exit\n");
    scanf ("%d", &menu);

            if (menu == 1) {
                printf ("Enter ten integers: \n");
                  for (x = 0;x < 10;x++){
                    scanf ("%d", &arr1[x]);
                      arr2[x] = arr1[x];
                  }
            }
            else if (menu == 2) {
                printf ("Sorted Table: \tUnsorted Table:\n");
                for (x = 0; x < 10; x++) {
                        for (int y = 0; y < 10 - 1; y++){
                            if (arr1[y] > arr1[y + 1]) {
                               int temp = arr1[y + 1];
                                arr1[y + 1] = arr1[y];
                                arr1[y] = temp;
                            }
                        }
                }
                for (x = 0; x < 10; x++) {
                    printf ("%d", arr1[x]);
                    printf ("\t\t%d \n", arr2[x]);
                }
            }
            else if (menu == 3) {
                break;
            }
    }
return 0;
}
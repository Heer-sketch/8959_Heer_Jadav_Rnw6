/*Write Below Pattern Using Nested Loop
           45 46 47 48 49

           46 47 48 49

           47 48 49

           48 49

            49  */

#include <stdio.h>

int main() {
    int start = 45;
    int end = 49;

    for (int i = start; i <= end; i++) {
        for (int j = i; j <= end; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}

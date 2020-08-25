//dev// dev2/////

#include <stdio.h>

#include <stdlib.h>

#include <Windows.h>

/*
int lcs_len(char* a, char* b) {
    if ((*a == '\0') || (*b== '\0')) return 0;
    else if (*a == *b)
        return 1 + lcs_len(a + 1, b + 1);
    else {
        int x1 = lcs_len(a + 1, b);
        int x2 = lcs_len(a, b + 1);
        return (x1 > x2) ? x1 : x2;
    }
}
*/

int routs(int x, int y) {
    if (x == 0 && y == 0) return 0;
    else if (x == 0 ^ y == 0) return 1;
    else {
        int a1 = routs(x-1,y);
        int a2 = routs(x,y-1);
        return a1 + a2;
    }
}
int main()
{

/*
char* x = "abcdabeeeeeeeeef";
char* y = "bcdbef";
printf(" MAX = %d", lcs_len(x,y));
*/
    int w = 5;
    int t = 5;
         printf("\n");
    for (int y = 0; y < w; ++y){
        for (int x = 0; x < t; ++x) {
          printf("%3d", routs(x,y));
        }
     printf("\n");
    }

       printf("\n%d", routs(w,t));
}

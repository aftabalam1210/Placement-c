#include <stdio.h>
// int main() {
// int ary[3][2] = {1,2,3,4,5,6};
// printf("%d %d", ary[0][0], ary[2][1]);
// return 0;
// }

int main()
{
    int ary[][2][3] = {{{1, 2, 3}, {4, 5, 6}}, {{7, 8, 9}, {10, 11, 12}}};
    printf("%d %d", ary[0][0][0], ary[1][1][1]);
    return 0;
}
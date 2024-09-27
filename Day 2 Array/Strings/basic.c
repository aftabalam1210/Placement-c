// char ch=

#include <stdio.h>
#include <string.h>
// int main()
// {
//     char ch[] = "hello world";
//     char spa = ' ';
//     printf("%d", sizeof(ch));
//     printf("\n%d", strlen(ch));
//     printf("\n%d", spa);
// }

//                                              ##Treverse in strig###############
// for(int i =0;ch[i]!='\0';i++)
// for(int i =0;i<strlen(ch);i++)

// int main()
// {

//     char ch1[] = {'a', 'n', 't'};
//     char ch[] = "ant";
//     // printf("%c", ++ch[0]);
//     printf("%d", sizeof(ch));
//     printf("%d", sizeof(ch1));
// }

// int main()
// {
//     char ch[10];
//     strcpy(ch, "heee");
//     printf("%d", sizeof(ch));
// }

// strcmp returns the vale 0 when both the compare elemnts are same. else 1 if nt smae.
// int main()
// {
//     // printf("%d", strcmp("hello", "Hello"));
//     // printf("\n%d", strcmpi("hello", "Hello"));
//     // printf("%d", strcmp("Hello", "hello"));
//     printf("%s", strupr("heel"));
// }

int main()
{
    char str[] = "CompuTer";

    printf("\n%s", strupr(str));
    printf("\n%s", strlwr(str));
    return 0;
}

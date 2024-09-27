// calculate the lenght of string without using strlen function()

#include <stdio.h>
// int main()
// {
//     char data[100];
//     scanf("%[^\n]s", data);
//     int counter = 0;
//     for (int i = 0; data[i] != '\0'; i++)
//     {
//         counter++;
//     }
//     printf("%d", counter);

//     return 0;
// }

// WAP to calucate the last number of words in a staring.
// int main()
// {
//     char data[100];
//     scanf("%[^\n]s", data);
//     int counter = 1;
//     int lastword = 0;
//     int i;
//     for (i = 0; data[i] != '\0'; i++)
//     {
//         if (data[i] != ' ')
//         {
//             counter++;
//         }
//         else if (counter > 0)
//         {
//             lastword = counter;
//             counter = 0;
//         }
//     }
//     if (counter > 0)
//     {
//         lastword = counter;
//     }
//     printf("%d", lastword);

//     return 0;
// }

// 1.WAP to captilizae the first word of every word .


// int main()
// {
//     char str[] = "apple a day keep doctor away";
//     int i = 0;

//     if (str[i] != '\0' && str[i] >= 'a' && str[i] <= 'z')
//     {
//         str[i] = str[i] - ('a' - 'A');
//     }

//     for (i = 1; str[i] != '\0'; i++)
//     {
//         if (str[i - 1] == ' ' && str[i] >= 'a' && str[i] <= 'z')
//         {
//             str[i] = str[i] - ('a' - 'A');
//         }
//     }
//     printf("%s\n", str);
//     return 0;
// }



//2.check wheter given string is pallindrom or not //malayalam
int main(){

}


//3. find the largest pallindrom in the string.


//4.print the symbol, then character, then number from the given input


//5.print the vowels in string without repeting the vowels. print distct vowel.
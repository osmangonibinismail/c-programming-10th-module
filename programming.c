// #include<stdio.h>

// int main()
// {
//     int X;
//     scanf("%d", &X);

//     int n = X;

//     int count = 0;
//     while(n){
//         count += n & 1;
//         n >>= 1;
//     }

//     return 0;
// }

// #include <stdio.h>
// int main(){
    
//     int i, i, j;
//     scanf("%d %d %d", &n, &i, &j);

//     for(int i = 0; i < n; i++)
//     {
//         float sum = 0;
//         int x;
//         for(int j = 0; j < 3; j++){
//             scanf("%f", &x);
//             sum += x;
//         }
//         float avg = sum / 3.0;
//         printf("%.3f \n", avg);
//     }
// }

// #include<stdio.h>
//  int main(){
//     int n;
//     scanf("%d", &n);
//     int a, b, c;
//     float avg;
//     scanf("%d", &a);

//     for(b = 0; b < n; b++){
//         int sum = 0;
//         int x;
//         for(c = 0; c < 3;
//         c++){
//             scanf("%d", &x);
//             sum += x;
//         }
//         avg = sum/3;
//         printf("%.2f \n", avg);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){

//     int ar[8], n, k, 
// }

// #include<stdio.h>
// int main()
// {

//     char str[50] = {'a', 'b', 'c', 'd'};

//     for(int i = 0; i < 4; i++){
//         printf("%c", str[i]);
//     }
// }
// #include<stdio.h>
// int main()
// {

//     char str[10] = "abcd efg";

//     printf("%s", str);
// }

// #include<stdio.h>
// int main()
// {

//     char str[200];

//     scanf("%[^\n]s", str);

//     printf("%s", str);
// }
// #include<stdio.h>
// int main()
// {

//     char str[200];

//     // scanf("%[^\n]s", str);
//     fgets(str, sizeof(str), stdin);

//     printf("%s", str);
// }
// #include<stdio.h>
// int main()
// {

//     char str[200];

//     // scanf("%[^\n]s", str);
//     fgets(str, sizeof(str), stdin);

//     // printf("%s", str);
//     fputs(str, stdout);
// }
// #include<stdio.h>
// int main()
// {

//     char str[] = "Bd\n \tis \"very\" beauty";

//     // fgets(str, sizeof(str), stdin);

//     puts(str);
// }
// #include<stdio.h>
// int main()
// {

//     char str[] = "Bd\nis beauty";

//     // fgets(str, sizeof(str), stdin);

//     puts(str);
// }
// #include<stdio.h>
// int main()
// {

//     char str[] = "Bd is \"Beauty\"";

//     // fgets(str, sizeof(str), stdin);

//     puts(str);
// }
// #include<stdio.h>
// int main()
// {

//     char str[] = "Bd\tis Beauty";

//     // fgets(str, sizeof(str), stdin);

//     puts(str);
// }
// #include<stdio.h>
// int main()
// {

//     char str[] = "5";


//     printf("%d", str[0] - '0');
// }

#include<stdio.h>

int main()
{
    char str[20];
    int n;

    scanf("%d", &n);
    scanf("%s", str);

    int num = 0;
    for(int i = 0; i < n; i++){

        int digit = str[i] - '0';

        num = num * 10 + digit;
    }

    printf("%d\n", num);

    return 0;
}
#include <stdio.h>
int strcmp3(char* source, char* dest);
int cal4(int n);
int main()
{
    /* test 1 */
    char str1[] = "Hello";
    char* p1 = str1;
    int n1 = 10;
    printf("size test1: %d %d %d\n",sizeof(str1),sizeof(p1),sizeof(n1));
    /* test 2 */
    int A2[] = {1,2,3,4,5};
    int *p2 = A2;
    *(p2++) += 123;
    *(++p2) += 123;
    printf("value test2: %d %d %d %d %d\n",A2[0],A2[1],A2[2],A2[3],A2[4]);
    /* test 3 */
    char str31[]="Hi!", str32[]="Hi!", str33[]="Hii";
    if (strcmp3(&str31,&str32)==0 && strcmp3(&str32,&str33)==-1)
        printf("test3 correct!\n");
    /* test 4 */
    printf("test4: cal4(1)=%d, cal4(2)=%d, cal4(3)=%d, cal(10)=%d\n",cal4(1),cal4(2),cal4(3),cal4(10));
    /* test 5*/
    printf("size test5: float=%d unsigned int=%d double=%d unsigned char=%d \n", sizeof(float), sizeof(unsigned int), sizeof(double), sizeof(unsigned char));
}

/* test 3 */
int strcmp3(char* source, char* dest)
{
    int count = -1;
    do
    {
        count++;
        if(source[count] != dest[count])
            return -1;
    }while(source[count]!=0);
    return 0;
}

/* test 4 */
/* Write a function to calculate 1*2+2*3+...+(n-1)n */
int cal4(int n)
{
    int i, sum = 0;
    for (i=1; i<n; i++)
    {
        sum += i*(i+1);
    }
    return sum;
}


#include <stdarg.h>
#include <stdio.h>
int func(int a,int b, ...)
{
    va_list list;
    int i;
    int c;
    int temp;
    temp = 1;
    i = 0;
    va_start(list, b);
    while(i < b)
    {
        c = va_arg(list, int);
        if(c == a)
        {
            temp = temp * c;
        }
        i++;
    }
	va_end(list);
    return(temp);
}
int main()
{
    printf("%d", func(2, 7, 1, 2, 3, 2, 4, 2));
}
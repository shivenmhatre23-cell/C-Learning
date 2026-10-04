#include <stdio.h>

int aor (int length , int breadth)
{
    int area;
    area= length * breadth ;
    return area;
}

int main()
{
    int l=10 , b=5 ;
    int area= aor (l,b);
    printf("%d", area);
    return 0;
}
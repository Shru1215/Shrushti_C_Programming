//series generation a. print the series 2 ,4...50  (just print series)
// b. 1,2,3----  -n (just print serries)
//c.10/5, 9/5 ,8/5---1/5 (just print serries)
//d. square roots of 1,2,3--10(calculate sqrt value)
//e.5^1,5^2,5^3---5^10(calaculate values)
//f.1^5,2^5,3^5---10^5(calaculate values)
//g.1^10,2^9,3^8---10^1(calaculate values)
//h.10^1,9^2,8^3----1^10(calaculate values)

//a//
#include<stdio.h>
int main()
{
    int i;

    for(i = 2; i <= 50; i = i + 2)
    {
          printf("%d\n ", i);
    }


}


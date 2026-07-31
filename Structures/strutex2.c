// define a rectangle strucutre(length,breadth) and compute and print its area//

#include<stdio.h>
struct rectangle
{
    int length;
    int breadth;
};
int main()
{
    struct rectangle r={10,5};
      int area;
    area = r.length * r.breadth;

    printf("Length = %d\n", r.length);
    printf("Breadth = %d\n", r.breadth);
    printf("Area = %d", area);
}

#include <stdio.h>
#include <math.h>
/*question 1*/
//  void swapv(int *x,int *y,int *z){
//         int temp;
//         temp=*x;
//         *x=*z;
//         *z=*y;
//         *y=temp;
//     }
// void main(){
//     int a=5,b=8,c=10;
//     swapv(&a,&b,&c);
//     printf("The values after shifting\nx=%d\ny=%d\nz=%d",a,b,c);
// }
/*question 2*/
// void change(int kg, int *g, float *po, float *to){
//     *g=1000*kg;
//     *po=2.2*kg;
//     *to=0.001*kg;
// }
// int main(){
//     int grams,kilograms;
//     float pounds,tons;
//     printf("enter the number of kilograms: ");
//     scanf("%d",&kilograms);
//     change(kilograms,&grams,&pounds,&tons);
//     printf("grams=%d\npounds=%f\ntons=%f",grams,pounds,tons);
//     return 0;
// }
/*question 3*/
int distance(int x1, int y1, int x2, int y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}
float area(int x1, int y1, int x2, int y2, int x3, int y3)
{
    int a = distance(x1, y1, x2, y2);
    int b = distance(x2, y2, x3, y3);
    int c = distance(x3, y3, x1, y1);
    float s = (a + b + c) / 2.0;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
int inside(int x, int y, int x1, int y1, int x2, int y2, int x3, int y3)
{
    float a = area(x1, y1, x2, y2, x3, y3);
    float a1 = area(x, y, x2, y2, x3, y3);
    float a2 = area(x1, y1, x, y, x3, y3);
    float a3 = area(x1, y1, x2, y2, x, y);
    return a == a1 + a2 + a3;
}
int main()
{
    int x, y, x1, y1, x2, y2, x3, y3;
    printf("Enter coordinates of point: ");
    scanf("%d %d", &x, &y);
    printf("Enter coordinates of triangle: ");
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);
    if (inside(x, y, x1, y1, x2, y2, x3, y3))
        printf("Point lies inside triangle\n");
    else
        printf("Point does not lie inside triangle\n");
    return 0;}
#include <stdio.h>
#include <math.h>
/*question 1*/
// int main(){
//     int num,revnum,d1,d2,d3,d4,d5;
//     int orignalnum;
   
//     printf("enter the nunmber: ");
//     scanf("%d",&num);
//     orignalnum=num;
//     d5=num%10;
//     num=num/10;
//     d4=num%10;
//     num=num/10;
//     d3=num%10;
//     num=num/10;
//     d2=num%10;
//     num=num/10;
//     d1=num%10;
//     revnum=d5*10000+d4*1000+d3*100+d2*10+d1*1;
//     printf("Reversed number is %d\n",revnum);
//     if(orignalnum==revnum){
//         printf("Orignal and reversed numbers are equal");
//     }
//     else if(orignalnum!=revnum){
//         printf("Orignal and reversed numbers are not equal");
//     }
//     return 0;
// }
/*question 2*/
// int main(){
//    int Ram,Shyam,Ajay;
// 	printf("Enter the Ages of Ram, Shyam, Ajay: ");
// 	scanf("%d%d%d",&Ram,&Shyam,&Ajay);
// 	if(Ram<Shyam && Ram<Ajay)
// 	{
// 		printf("Ram is youngest");
// 	}
// 	if(Shyam<Ram && Shyam<Ajay)
// 	{
// 		printf("Shyam is youngest");
// 	}
// 	else if(Ajay<Ram && Ajay<Shyam)
// 	{
// 		printf("Ajay is youngest");
// 	}
//     return 0;
// }
/*question 3*/
// int main(){
//     int a,b,c;
//     printf("enter the angles a, b, c: ");
//     scanf("%d%d%d",&a,&b,&c);
//     if(a+b+c==180){
//         printf("It's a triangle");
//     }
//     else{
//         printf("It's not a triangle");
//     }
//     return 0;
// }
/*question 4*/
// int main(){
//     int num,absnum;
//     printf("enter the number: ");
//     scanf("%d",&num);
//     absnum=(num<0)?-num:num;
//     printf("Orignal number is %d and absolute number is %d",num,absnum);
//     return 0;
// }
/*question 5*/
// int main(){
//     int l,b,area,per;
//     printf("enter the length and breadth: ");
//     scanf("%d%d",&l,&b);
//     area=l*b;
//     per=2*(l+b);
//     if(area>per){
//         printf("area of the rectangle is greater than its perimeter");
//     }
//     else{
//         printf("area of the rectangle is not greater than its perimeter");
//     }
//     return 0;
// }
/*question 6*/
// int main() {
//     int x1, y1, x2, y2, x3, y3;
//     printf("Enter the coordinates of the first point (x1, y1): ");
//     scanf("%d %d", &x1, &y1);
//     printf("Enter the coordinates of the second point (x2, y2): ");
//     scanf("%d %d", &x2, &y2);
//     printf("Enter the coordinates of the third point (x3, y3): ");
//     scanf("%d %d", &x3, &y3);
//     int slope1 = (y2 - y1) * (x3 - x1);
//     int slope2 = (y3 - y1) * (x2 - x1);
//     if (slope1 == slope2) {
//         printf("The three points (%d, %d), (%d, %d), and (%d, %d) fall on the same straight line.\n", x1, y1, x2, y2, x3, y3);
//     } else {
//         printf("The three points (%d, %d), (%d, %d), and (%d, %d) do not fall on the same straight line.\n", x1, y1, x2, y2, x3, y3);
//     }
    
//     return 0;}
/*question 7*/
// int main(){
//     int xc,yc,xp,yp,r;
//     printf("enter the center cordinates of the circle: ");
//     scanf("%d%d",&xc,&yc);
//     printf("enter the other coordinates: ");
//     scanf("%d%d",&xp,&yp);
//     printf("enter the radius of the circle: ");
//     scanf("%d",&r);
//     int d=sqrt((pow((xp-xc),2))+(pow((yp-yc),2)));
//     if(d<r){
//         printf("The points are inside the circle");
//     }
//     else if(d==r){
//         printf("points are on the circle");
//     }
//     else{
//         printf("points are outside the circle");
//     }
//     return 0;
// }
/*question 8*/
// int main(){
//     int x,y;
//     printf("enter the points: ");
//     scanf("%d%d",&x,&y);
//     if(x==0&&y==0){
//         printf("it lies on the origin");
//     }
//     else if(x>0&&y==0||x<0&&y==0){
//         printf("it lies on x-axis");
//     }
//     else if(x==0&&y>0||x==0&y<0){
//         printf("it lies on y-axis");
//     }
//     else{
//         printf("neither");
//     }
//     return 0;
// }
/*question 9*/
int main()
{
    //basic year is chosen as the least year which user can enter through the keyboard where it should be Monday on 01th of January
    int year, basic_year=2001, leap_year, remaining_year, total_days, day;

    printf("Enter the year: ");
    scanf("%d", &year);

    year = (year-1)-basic_year; //we are calculating the total years between basic year and input year

    //Now calculate the leap years
    leap_year = year/4;

    //calculate the year which are not leap years
    remaining_year = year - leap_year;

    //calculate total days present in all years
    //remaining years are not leap year so total days in single year will be 365
    //But in leap year we have 366 days in a single year
    total_days = (remaining_year*365) + (leap_year*366) + 1;

    //Find the actual day
    day = total_days%7;

    if(day==0)
        printf("Monday");
    else if(day==1)
        printf("Tuesday");
    else if(day==2)
        printf("Wednesday");
    else if(day==3)
        printf("Thursday");
    else if(day==4)
        printf("Friday");
    else if(day==5)
        printf("Saturday");
    else if(day==6)
        printf("Sunday");
    else
        printf("Wrong Entry");
    return 0;
}

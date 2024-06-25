#include <stdio.h>
#include <math.h>
/*question 1*/
// int main(){
//     int a,b,c;
//     printf("enter the lenghts of the sides: ");
//     scanf("%d%d%d",&a,&b,&c);
//     if(a+b>c){
//     if(a==b&&a==c){
//         printf("its an equilateral triangle");
//     }
//     else if((a == b) && a != c|| (a == c) && a!= b || (c == b) && c != a){
//         printf("its an isoceles triangle");
//     }
//     else if(a!=b||a!=c||b!=c){
//         printf("its a scalene triangle");
//     }
//     else if(a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b){
//         printf("its a right angle triangle");
//     }
// }
// return 0;
// }
/*question 2*/
// int main()
// {
//     float r, g, b, rf, gf, bf, max, w, c, y, m , k; 

//     printf("Enter the value of Red(0 to 255): ");
//     scanf("%f", &r);

//     printf("Enter the value of Green(0 to 255): ");
//     scanf("%f", &g);

//     printf("Enter the value of Blue(0 to 255): ");
//     scanf("%f", &b);

//     rf = r/255;
//     gf = g/255;
//     bf = b/255;

//     printf("Red: %f\nGreen: %f\nBlue: %f\n", rf, gf, bf);

//     max = rf;
//     if (max<gf)
//         max = gf;
//     if (max<bf)
//         max = bf;
//     w = max;
//     printf("White: %f\n\n", w);
//     c = (w-rf)/w;
//     m = (w-gf)/w;
//     y = (w-bf)/w;

//     k = 1- w;

//     printf("The value of Cyan: %f\n", c);
//     printf("The value of Magenta: %f\n", m);
//     printf("The value of Yellow: %f\n", y);
//     printf("The value of Black: %f\n", k);

// }
/*question 3*/
// int main(){
//     int h,t;
//     float c;
//     printf("enter the details: ");
//     scanf("%d%d",&h,&t);
//     scanf("%f",&c);
//     if(h>50&&c<0.7&&t>5600){
//         printf("grade 10");
//     }
//     else if(h>50&&c<0.7){
//         printf("grade 9");
//     }
//     else if(c<0.7&&t>5600){
//         printf("grade 8");
//     }
//     else if(h>50&&t>5600){
//         printf("grade 7");
//     }
//     else if(h>50||c<0.7||t>5600){
//         printf("grade 6");
//     }
//     else if(h<50&&c>0.7&&t<5600){
//         printf("grade 5");
//     }
//     return 0;
// }
/*question 4*/
int main()
{
    float weight, height, BMI;
    printf("Enter the weight of person: ");
    scanf("%f", &weight);

    printf("Enter the height of person: ");
    scanf("%f", &height);

    BMI = weight/(pow(height, 2));

    printf("The BMI of person is: %.2f\n", BMI);

    if (BMI>0 && BMI<=15)
        printf("BMI Category is Starvation");

    else if (BMI>=15.1 && BMI<=17.5)
        printf("BMI Category is Anorexic");

    else if (BMI>17.6 && BMI<=18.5)
        printf("BMI Category is Underweight");

    else if (BMI>18.6 && BMI<=24.9)
        printf("BMI Category is Ideal");

    else if (BMI>25 && BMI<=25.9)
        printf("BMI Category is Overweight");

    else if (BMI>30 && BMI<=30.9)
        printf("BMI Category is Obese");

    else if (BMI>=40)
        printf("BMI Category is Morbidly Obese");
    
    return 0;

}
#include <stdio.h>
#include <math.h>

int main(void)
{
    //Question 1
    char Name[20] = "Shahied Rustin";
    char DOB[50] = "August 18, 2003";
    int Mobile = 630653524;

    printf("Name: %s\n ", Name);
    printf("DOB: %s\n ", DOB);
    printf("Mobile: 27-%d\n\n", Mobile);

    //Question 2
    int int1,int2;
    printf("Please input any two numbers: \n");
    scanf("%d%d", &int1, &int2);
    int sum = int1 + int2;
    int diff = int1 - int2;
    int product = int1 * int2;
    int quotient = int1 / int2;
    int modulus = int1 % int2;
    printf("Sum = %d\n",sum);
    printf("Diff = %d\n",diff);
    printf("Product = %d\n",product);
    printf("Quotient = %d\n",quotient);
    printf("Modulus = %d\n\n",modulus);

    //Question 3
    // 14
    
    //Question 4
    double r;
    const double pie = 3.141592;

    printf("Please enter the radius of the circle :\n");
    scanf("%lf", &r);
    
    double circumference = 2*pie*r;
    double area =  pie*pow(r,2);

    printf("Circumference of the Circle = %.2lf\n",circumference);
    printf("Area of the Circle = %.2lf %% \n\n",area);

    //Question 5

    int a = 125, 
    b = 12345; 
    long ax = 1234567890;
    short s = 4043;
    float x = 2.13459;
    double dx = 1.1415927;
    // char c = "W";
    unsigned long ux = 2541567890; 

    // double c1 = a + c;
    // double c2 = x + c;
    double c3 = dx + x;
    double c4 = ((int) dx) + ax;
    double c5 = a + x;
    double c6 = s + b;
    double c7 = ax + b;
    // double c8 = s + c;
    // double c9 = ax + c;
    double c10 = ax + ux;
    
    // printf("a + c = : %.2f\n", c1);
    // printf("x + c = : %.2f\n", c2);
    printf("dx + x = : %.2f\n", c3);
    printf("((int) dx) + ax = : %.2f\n", c4);
    printf("a + x = : %.2f\n", c5);
    printf("s + b = : %.2f\n", c6);
    printf("ax + b = : %.2f\n", c7);
    // printf("s + c = : %.2f\n", c8);
    // printf("ax + c = : %.2f\n", c9);
    printf("ax + ux = : %.2f\n\n", c10);

    //Question 6

    // int a1 = 1, b1 = 3, c12;
    // c12 = b1 << a1;
    // b1 = c12 * (b1 *(++a1)--);
    // a1 = a1 >> b1;
    // printf("%d\n\n",b1);

    //Question 7
    
    const float Q7mass = 2500, Q7speedi = 0, Q7speedf = 15, Q7dtime=32.5;
    float Q7a = (Q7speedf - Q7speedi)/Q7dtime;
    float Q7f = Q7mass*Q7a;
    printf("The acceleration is %.2fm/s\n and the force acting on it is %.2fN\n\n", Q7a,Q7f);

    //Question 8

    float maths, physics, english, electronics, LO;

    printf("Please enter your maths, physics, english, electronics, and LO percentage marks:\n");
    printf("1. maths:");
    scanf("%f", &maths);
    printf("2. physics:");
    scanf("%f", &physics);
    printf("3. english:");
    scanf("%f", &english);
    printf("4. electronics:");
    scanf("%f", &electronics);
    printf("5. LO:");
    scanf("%f", &LO);

    float totalscore = maths + physics + english + electronics + LO;;
    float averagescore = (maths + physics + english + electronics + LO)/5;
    float overallpercentage = (maths + physics + english + electronics + LO)/5;

    printf("The total score is %.2f\n", totalscore);
    printf("The average score is %.2f\n", averagescore);
    printf("The overall score is %.2f\n\n", overallpercentage);
        
    //Question 9
        //27

    //Question 10
        printf("Please enter the co-ordinates of two point to calculate the distance between them:\n");
        double x1 , y1 , x2 , y2;
        printf("x1 :"); scanf("%lf", &x1);
        printf("y1 :"); scanf("%lf", &y1);
        printf("x2 :"); scanf("%lf", &x2);
        printf("y2 :"); scanf("%lf", &y2);
        double distance = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
        printf("The distance is %.2f\n", distance);

        // math.h works because the run command requires the link path
            // the command changed from this "cd "/workspaces/tutorial2_sdn150s/" && gcc main.c -o main && "/workspaces/tutorial2_sdn150s/"main"
            // to this "cd "/workspaces/tutorial2_sdn150s/" && gcc -o main main.c -L/usr/bin/gcc -lm && "/workspaces/tutorial2_sdn150s/"main"

    
}
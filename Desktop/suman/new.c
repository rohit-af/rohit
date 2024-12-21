#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#define f(x) 3*x-cos(x)-1
#define g(x) 3+sin(x)
void main()
{
    float x0, x1, f0, g0, e;
    int step = 1, N;
    printf("\n Enter initial guess: \n");
    scanf("%f", &x0);
    printf("\n Enter tolerable error: \n");
    scanf("%f", &e);
    printf("\n Enter maximum iteration: \n");
    scanf("&d", &N);
    printf("\n step \t\t x0 \t\t f(x0) \t\t x1 \t\t f(x1) \n");
    do{
        g0 = g(x0);
        f0 f(x0);
        if(g0 == 0.0)
        {
            printf("Mathematical error");
            exit(0);
        }
        x1 = x0-f0/g0;
        printf("%d \t\t %f \t %f \t %f \t %f \n", step, x0, f0, x1, f1);
        x0 = x1;
        step = step + 1;
        if(step > N)
        {
            printf("Not Convergent");
            exit(0);
        }
        f1 = f(x1);
    }while(fabs(f1)<e);
    printf("\n Root is: %f", x1);
    getch();
    return 0;
}
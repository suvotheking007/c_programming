/*
In a company an employee is paid as under:
If his basic salary is less than Rs. 1500, then HRA = 10% of basic salary 
and DA = 90% of basic salary. If his salary is either equal to or above Rs. 
1500, then HRA = Rs. 500 and DA = 98% of basic salary. If the employee's 
salary is input through the keyboard write a program to find his gross 
salary.
*/

#include <stdio.h>

int main()
{
    float b_sal, g_sal, hra, da;

    printf("\n Please enter the basic salary of the employee :- ");
    scanf("%f", &b_sal);

    hra = b_sal*10/100;
    da = b_sal*90/100;    

    if (b_sal >= 1500)
    {
        hra = 500;
        da = b_sal*98/100;
        g_sal = hra + da + b_sal;
    }
    else
    {
        g_sal = hra + da + b_sal;
    }
    
    printf("\n The gross salary of the employe is :- %.2f \n", g_sal);

    return 0;
}
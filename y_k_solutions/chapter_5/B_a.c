 /*
  Write a program to calculate overtime pay of 10 employees. 
  Overtime is paid at the rate of Rs. 12.00 per hour for every 
  hour worked above 40 hours. Assume that employees do not work 
  for fractional part of an hour.
 */
 
 
 
 #include <stdio.h>
 
 int main()
 {
    int tot, tot_hrs, wrk_hrs, count = 1;
    
    while (count <=10)
    {
      printf("\n please enter the total hours the number %d employee worked :-", count);
      scanf("%d", &tot_hrs);
      
      if(tot_hrs > 40)
      {
        wrk_hrs = tot_hrs - 40;
        tot = 12.00 * wrk_hrs;
        printf("\n Overtime to be paid to the employee is %d ", tot);
      }
      else
      {
        printf("\n The number %d employee is not eligible for getting overtime", count);
      }
      
      count = count + 1;
    }
    
    printf("\n");
    return 0;
 } 
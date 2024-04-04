#include <stdio.h>
#include <stdlib.h>


int main() 
{
    


    int hours_worked;
    const double pay_rate = 12.00;
    const double tax_rate_on_300 = .15;
    const double tax_rate_on_150 = .20;
    const double tax_rate_on_rest = .25;
    const char* frame = "*******************";
    const char* spacing = "         ";
    double taxes = 0;

    printf("%s%s%s", frame, frame, frame);
    printf("\n*%sPAYMENT CALCULATOR%s", frame, frame);
    printf("\n%s%s%s", frame, frame, frame);

    printf("\n%sEnter hours worked: ", spacing);
    scanf("%d", &hours_worked);
    printf("\n%s%s%s", frame, frame, frame);
    printf("\n%s%s%s", frame, frame, frame);  

    double earned_payment = 0;
        if  (hours_worked <= 40)
    {
        earned_payment = hours_worked * pay_rate;
    }
    else
    {
        int over_time = hours_worked - 40;
        double over_time_pay = over_time * (pay_rate * 1.5);
        earned_payment = (40 * pay_rate) + over_time_pay;
        
    } 
    printf("\n%sYour gross pay before taxes is: $%.2f", spacing,  earned_payment);
    printf("\n%s%s%s", frame, frame, frame);



    if (earned_payment <= 300)
        {
            taxes = (earned_payment * tax_rate_on_300);
        }
        else if (earned_payment <= 450)
        {
            taxes = (300 * tax_rate_on_300) + //first tax rate
                    ((earned_payment - 300) * tax_rate_on_150); //second tax rate
        }
        else if (earned_payment > 450)
        {
            taxes = (300 * tax_rate_on_300) + //first tax rate
                    (150 * tax_rate_on_150) + //second tax rate
                    ((earned_payment - 450) * tax_rate_on_rest); //third tax rate
        }

    printf("\n%sYou have $%.2f in taxes", spacing, taxes);
    printf("\n%s%s%s", frame, frame, frame);
    printf("\n%s%s%s", frame, frame, frame);
    printf("\n%sYour net pay is $%.2f", spacing, earned_payment - taxes);
    printf("\n%s%s%s", frame, frame, frame);
    printf("\n%s%s%s", frame, frame, frame);

    return 0;

}
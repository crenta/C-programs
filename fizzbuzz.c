//CRENTA

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() 
{

int n;
printf("Enter a number: ");
scanf("%d", &n);

//allocate memory for a pointer of pointers which will point to the contents of our array
char ** container = malloc(n * sizeof(char*));

for (int i = 0; i < n; i++ )
{
    //for each element, allocate enough space for "FIZZBUZZ"
    container[i] = malloc(20*(sizeof(char)));

    //if the next value is divisible by 3 or 7 copy "FIZZBUZZ into the array"
    if(((i + 1) % 3 == 0) && ((i + 1) % 7 == 0))
        //copy FIZZBUZZ to the container
        strcpy(container[i], "[*]FIZZBUZZ");

    //or if its divisible by 3 only copy BUZZ
    else if((i + 1) % 3 == 0)
    {
        strcpy(container[i], "[*]BUZZ");
    }
    //or if its only divisible by 7 copy FIZZ
    else if((i+1) % 7 == 0)
    {
        strcpy(container[i], "[*]FIZZ");
    }
    //or else just copy the number
    else
        sprintf(container[i], "[*]%d", (i + 1) );
}

//print FIZZBUZZ to match assignment output
printf("[*]FIZZBUZZ\n");

//for each character in the array, print its value
for(int i = 0; i < n; i++)
{
        printf("%s\n", container[i]);
}

//free each item in the container
for(int i = 0; i < n; i++)
{
        free(container[i]);
}

//free the container
free(container);
}

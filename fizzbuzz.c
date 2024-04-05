#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Incorrect Input\n");
        return -1;
    }

int n = atoi(argv[1]);

//allocate memory for a pointer of pointers which will point to the contents of our array
char ** container = (char **)malloc(n * sizeof(char*));

for (int i = 0; i <= n; i++ )
{
    //for each element, allocate enough space for "FIZZBUZZ"
    container[i] = (char * )malloc(20*(sizeof(char)));

    //if the next value is divisible by 3 or 7
    if(((i) % 3 == 0) && ((i) % 7 == 0))
        //copy "FIZZBUZZ" to the container
        strcpy(container[i], "[*]FIZZBUZZ");

    //or if its divisible by 3 only copy BUZZ
    else if((i + 1) % 3 == 0)
    {
        strcpy(container[i], "[*]BUZZ");
    }
    //or if its only divisible by 7 copy FIZZ
    else if((i) % 7 == 0)
    {
        strcpy(container[i], "[*]FIZZ");
    }
    //or else just copy the number
    else
        //formatted string
        sprintf(container[i], "[*]%d", i);
}

//for each character in the array, print its value
for(int i = 0; i <= n; i++)
{
        printf("%s\n", container[i]);
}

//free each item in the container
for(int i = 0; i <= n; i++)
{
        free(container[i]);
}

//free the container
free(container);

return 0;

}

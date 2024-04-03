#include <stdio.h>
#include <stdlib.h>

//using explicit main function for clarity with command line arguments
int main(int argc, char *argv[]) 
{

    //if the user's input is invalid (incorrect CLI arguments)
    if (argc != 2) 
    {
        printf("Incorrect input! Please enter: %s <Outfile>\n", argv[0]);
        return -1;
    }

    //make a FILE pointer named output_file pointing at our input stream in write mode
    FILE *output_file = fopen(argv[1], "w");
    
    //if the file fails to open
    if (output_file == NULL) 
    {
        printf("Error opening file");
        return -1;
    }

    //create our desired data block size
    //and initialize a char array with it
    const size_t buffer_size = 64;
    char buf[buffer_size];
    //variable to hold our text
    size_t num_read;

    printf("[*]Enter something to write to the file or press Ctrl+D to end the input.\n");

    do 
    {
        //read into the buf, 1 character at a time. Up to buffer_size, from input
        num_read = fread(buf, sizeof(char), buffer_size, stdin);
        
        printf("[");
        //write the buf, 1 character at a time. Up to num_read to output
        fwrite(buf, sizeof(char), num_read, stdout);
        printf("]");
        
        fprintf(output_file, "(");
        //write the buf, 1 character at a time. Up to num_read, to the file
        fwrite(buf, sizeof(char), num_read, output_file);
        fprintf(output_file, ")");
    } 
    while (num_read == buffer_size);

    fclose(output_file);
    printf("\n[*]Thank you!\n");
    return 0;
}
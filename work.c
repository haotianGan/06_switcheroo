#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){ 
    //Create an array large enough to store 10 ints.
    int array[10];
    srand(time(NULL));
    
    //Populate the array with random values. 
    {
        int i = 0;
        for(i = 0; i < 10; i++) array[i] = rand();
    }

    //Set the last value in the array to 0.
    array[9] = 0;

    //Print out the values in this array
    {
        int i = 0;
        for(i = 0; i < 10; i++) printf("%d\n", array[i]);
        printf("\n");
    }
    //Create a separate array large enough to store 10 ints.
    int array1[10];

    //USING ONLY POINTER VARIABLES (that is, do not use the array variables) do the following: 
    //Populate the second array with the values in the first but in reverse order
    int *p_array = &array;
    int *p_array1 = &array1;
    p_array += 9;
    {
        int i = 0;
        for(i = 0; i < 10; i++){
            *(p_array1) = *p_array;
            p_array1++;
            p_array--;
        }
    }

    //Print out the values in the second array
    int i = 0;
    for(; i < 10; i++) printf("%d\n", array1[i]);

    return 0;
}

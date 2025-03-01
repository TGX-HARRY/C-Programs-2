#include <stdio.h>
// // assuming array is {1,2,3,4,3,5,6,4}
// int frequency(int array[], int size) {
//     int r,c, count[size][size];
//     for(r=0;r<size;r++) {
//         for(c=0;c<size;c++) {
//             if (array[r]==count[c][0])
//             count[c][1] += 1;
//         }
//         if(!count[c][0])
//         count[c][0]=array[c], count[c][1]=1;
//     }
//     return count[r][2];
// }
int main() {
    // declare and get value of size/lenght of array
    int size;
    printf("Enter the size of array: ");
        scanf("%d", &size);

    // declare and define array through user input
    int array[size], index;
    for(index=0;index<size;index++) 
        scanf("%d", &array[index]);
    
    // turn every value of 2d array to 0
    int r,c, count[size][2];
    for(r=0;r<size;r++) {
        for(c=0;c<2;c++) {
            count[r][c]=0;
        }
    }
    
    for(r=0;r<size;r++) {
        // this inner loop will check it tht element is already having an counter
        // if it haves then it will add 1 to it
        for(c=0;c<size;c++) {
            if (array[r]==count[c][0])
            {
                count[c][1] += 1;
                break;
            }
        }
        //but if the value is not there and is zero
        //then this will create a counter for the element
        if(!count[r][0])
            count[r][0]=array[r], count[r][1]=1;
    }

    // display count of every element in user-input array
    for(c=0;c<size;c++) {
            printf("%d %d\n", count[c][0], count[c][1]);
    }
}
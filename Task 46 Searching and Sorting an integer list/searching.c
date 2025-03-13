#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// ****************************************************************************
//   Searching.c
//
//   contain routines to create, fill, sort, and search in a list of integers.
//   Also provide a menu-driven tester for the Integer List routines .
//
// ****************************************************************************


int intList[10]; //values in the list
int listLength = 10;

//-------------------------------------------------------
//fill array with integers between 1 and 100, inclusive
//-------------------------------------------------------
void randomize()
{   int i;
    for (i=0; i<listLength; i++)
    intList[i] = rand() % 100 + 1;
}

//-------------------------------------------------------
//print array elements with indices
//-------------------------------------------------------
void print()
{
    int i;
    for (i=0; i<listLength; i++)
        printf("%d:\t%d\n", i , intList[i]);
}

//-------------------------------------------------------
//return the index of the first occurrence of target in the list.
//return -1 if target does not appear in the list
//-------------------------------------------------------
int linearSearch(int target)
{
    int location = -1;
    int i;
    for (i=0; i<listLength && location == -1; i++)
        if (intList[i] == target)
           location = i;
    return location;
}

//-------------------------------------------------------
//sort the list into ascending order using the selection sort
//algorithm
//-------------------------------------------------------
void selectionSort()
{
    int minIndex;
    int i, j, temp;
    for (i=0; i < listLength-1; i++)
        {
             //find smallest element in list starting at location i
             minIndex = i;
             for (j = i+1; j < listLength; j++)
                 if (intList[j] < intList[minIndex])
                    minIndex = j;

             //swap list[i] with smallest element
             temp = intList[i];
             intList[i] = intList[minIndex];
             intList[minIndex] = temp;
        }
}

//-------------------------------------------------------
// Do what the menu item calls for
//-------------------------------------------------------
void dispatch(int choice)
{
    int loc;
    int item;
    switch(choice)
        {
        case 0:
             printf("Bye!\n");
             break;
        case 1:
             randomize();
             break;
        case 2:
             selectionSort();
             break;
        case 3:
             printf("Enter the value to look for: ");
             scanf("%d",&item);
             loc = linearSearch(item);
             if (loc != -1)
                printf("Found at location %d\n" , loc);
             else
                  printf("Not in list\n");
             break;
        case 4:
             print();
             break;
        default:
                 printf("Sorry, invalid choice\n");
        }
}

//------------------------------------------------------
// Print the user's choices
//------------------------------------------------------
void printMenu()
{
    printf("\n   Menu   \n");
    printf("   ====\n");
    printf("0: Quit\n");
    printf("1: Initialise the list (** do this first!! **)\n");
    printf("2: Sort the list using selection sort\n");
    printf("3: Find an element in the list using linear search\n");
    printf("4: Print the list\n");
    printf("\nEnter your choice: ");
}

void replaceFirst(int oldVal, int newVal){
    for(int i = 0; i<listLength; i++){
        if(){
            intList[i] = oldVal;
            oldVal = newVal;
        }
    }
}

int binarySearchD(int target){
    int first = 0;
    int middle;
    int last = listLength - 1;
    while(first <=  last){
        middle = (first + last) / 2;
        if(intList[middle] == item){
            return middle;
        }else{
            if(intList[middle] < target){
                first = middle + 1;
            }else{
                last = middle - 1;
            }
        }
    }
    return -1;
}

void selectionSortDescending(){
    int middle;
    int i, j, temp;
    for(i = listLength-1; i => 0; i++){
        middle = i;
        for()
    }
}


//-------------------------------------------------------
// Create a list, then repeatedly print the menu and do what the
// user asks until they quit
//-------------------------------------------------------
int main()
{
    srand(time(NULL));
    int choice;
    printMenu();
    scanf("%d", &choice);
    while (choice != 0) {
        dispatch(choice);
        printMenu();
        scanf("%d", &choice);
    }

    system("pause");
    return 0;
}

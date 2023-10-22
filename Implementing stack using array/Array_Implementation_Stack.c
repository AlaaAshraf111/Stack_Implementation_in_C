/*@Amgad Diploma_C21-StackandQueue_21October2023*/
/*Stack_Implementation_Using_Array_Driver*/
/*Auther:     Alaa Ashraf
**Date:       21ctober2023
**LastUpdate: 22October2023*/


#include <stdio.h>
#include "types.h"
#include "Array_Implementation_Stack.h"

/************************************************* IMPLEMENTING STACK USING AN ARRAY *************************************************/
/*Global Variables*/


//Index to the top of stack
s16 TOP;   




/*Global Functions Implementation*/
/**************************************************************************/
/*Function:      Initialization of TOP Index
* Parameters:   -u16[Arr_Size]: the size of the allocated array for stack
* Return:        void*/
void Initialization_Stack(u16 Arr_Size){
    //initialize the TOP with -1 means, at beginning, the stack is empty
    TOP = INITIAL_VALUE;
}

/**************************************************************************/
/*Function:      Check on if Stack is FULL or not
* Parameters:   -u16[Arr_Size]: the size of the allocated array for stack
* Return:        FULL enum (One if Is_Full and Zero if Not)*/
FULL IS_FULL_Stack(u16 Arr_Size){
    //Check if the stack is full
    FULL Check=NOT_FULL;
    if(TOP == (Arr_Size-1)){
        Check = IS_FULL;
    }else{
        Check =NOT_FULL;
    }
    return Check;
}


/**************************************************************************/
/*Function:      Check on if Stack is EMPTY or not
* Parameters:   -u16[Arr_Size]: the size of the allocated array for stack
* Return:        EMPTY enum (One if Is_EMPTY and Zero if Not)*/
EMPTY IS_EMPTY_Stack(u16 Arr_Size){
    //Check if the stack is empty
    EMPTY Check=NOT_EMPTY;
    if(TOP == INITIAL_VALUE){
        Check = IS_EMPTY;
    }else{
        Check =NOT_EMPTY;
    }
    return Check;
}

/**************************************************************************/
/*Function:      Insertion new data in Stack
* Parameters:   -u16[Arr_Size]: the size of the allocated array for stack
*               -u16[Data]: the data wanted to insert in stack
* Return:        void*/
void PUSH_In_Stack(u16 Arr_Size, u16 Data){
    
    //Firstly, Check if the stack is full
    FULL Check= IS_FULL_Stack(Arr_Size);
    if(Check == NOT_FULL){
        TOP ++;  //Increment TOP index
        Arr[TOP] = Data;
    }else{
        printf("\nThe stack is full, the Data cann't be sotred in stack\n");
    }
}


/**************************************************************************/
/*Function:      Deletion last data from the Stack after Reading it
* Parameters:   -u16[Arr_Size]: the size of the allocated array for stack
* Return:        The wanted data at given index*/
s16 POP_From_Stack(u16 Arr_Size){
    
    //Firstly, Check if the stack is empty
    EMPTY Check= IS_EMPTY_Stack(Arr_Size);
    s16 Data;
    if(Check == NOT_EMPTY){
        //Retrieve the Data at index 
        Data = Arr[TOP] ;
        //decrement TOP index for deleting the data
        TOP --;  //as TOP losts the index of this data so it doesn't aviable (as Deletion) 
    }else{

        Data = UNDERFLOW_VALUE ;
    }

    return Data;
}



/**************************************************************************/
/*Function:      Reading last data from the Stack without deleting it
* Parameters:   -u16[Arr_Size]: the size of the allocated array for stack
* Return:        The wanted data at given index*/
s16 PEEK_From_Stack(u16 Arr_Size){
    
    //Firstly, Check if the stack is empty
    EMPTY Check= IS_EMPTY_Stack(Arr_Size);
    s16 Data;
    if(Check == NOT_EMPTY){
        //Reading the Data at index
        Data = Arr[TOP] ;

    }else{

        Data= UNDERFLOW_VALUE;
    }

    return Data;
}

/**************************************************************************/
/*Function:      Displaying the last value which is returned from POP or PEEK function
* Parameters:   -s16[last_data]: returned data from POP or PEEK function
* Return:        void*/
void Displaying_Last_Value(s16 last_data){
    
    if(last_data == UNDERFLOW_VALUE){
        printf("\nthe stack is empty and returning data from it is UNDERFLOW_VALUE\n");
    }else{
        printf("\nthe last data in stack = %d\n",last_data);
    }

}



/**************************************************************************/
/*Function:      Calculating the current size of stack
* Parameters:    void
* Return:        The current size of stack*/
u16 Size_Of_Stack(){
    
    u16 stack_size= TOP + 1 ;   //As TOP is the index of data in the stack array 

    return stack_size;
}

/**************************************************************************/
/*Function:      Displaying the data of the Stack
* Parameters:   -u16[Arr_Size]: the size of the allocated array for stack
* Return:        void*/
void Display_Stack(u16 Arr_Size){
    
    //Firstly, Check if the stack is empty
    EMPTY Check= IS_EMPTY_Stack(Arr_Size);

    if(Check == NOT_EMPTY){
        //Display the data
        for(s16 i =TOP ; i>=0 ; i--){
            printf("The data at index %d in the stack = %d\n",i,Arr[i]);
        }
    }else{

        printf("\nThe stack is empty, there is no data exists in stack\n");
    }

}
/*@Amgad Diploma_C21-StackandQueue_21October2023*/
/*Stack_Implementation_Using_Linkedlist_Driver*/
/*Auther:     Alaa Ashraf
**Date:       22ctober2023
**LastUpdate: 22October2023*/



#include <stdio.h>
#include "types.h"

#include "Linkedlist.h"

#include "Linkedlist_Implementation_Stack.h"

/************************************************* IMPLEMENTING STACK USING A LINKEDLIST *************************************************/
/*Global Variables*/


//Pointer to the top of stack
Node_t * TOP;   




/*Global Functions Implementation*/
/**************************************************************************/
/*Function:      Initialization of TOP pointer
* Parameters:    void      //as TOP pointer is global here
* Return:        void*/
void Initialization_Stack(){
    //initialize the TOP with NULL means, at beginning, the stack is empty
    TOP = INITIAL_VALUE;
}



/**************************************************************************/
/*Function:      Check on if Stack is EMPTY or not
* Parameters:    void      //as TOP pointer is global here
* Return:        EMPTY enum (One if Is_EMPTY and Zero if Not)*/
EMPTY IS_EMPTY_Stack(){
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
* Parameters:   -Data [u16]: the data wanted to insert in stack
* Return:        void*/
void PUSH_In_Stack(u16 Data){
    
    /*Push at top of stack means insertion at begninning of used linkedlist*/
    //Insertion at beginning
    TOP = Insertion_at_Beginning(Data , TOP);

}


/**************************************************************************/
/*Function:      Deletion last data from the Stack after Reading it
* Parameters:   void
* Return:        The wanted data at given index*/
s16 POP_From_Stack(){
    
    //Firstly, Check if the stack is empty
    EMPTY Check= IS_EMPTY_Stack();
    s16 Data;
    if(Check == NOT_EMPTY){
        //Retrieve the Data at index 
        Data = TOP->info ;     //here by implicit casting, Data (signed int[s16]) promots to (unsigned int[u16])

        /*Pop from top of stack means deletion at begninning of used linkedlist*/
        //delete the data and update the TOP
        u16 position= 1;  
        TOP = Delete_from_Particular_Position(TOP,position);
    }else{

        Data = UNDERFLOW_VALUE ;
    }

    return Data;
}



/**************************************************************************/
/*Function:      Reading last data from the Stack without deleting it
* Parameters:   void
* Return:        The wanted data at given index*/
u16 PEEK_From_Stack(){
    
    u16 Data = TOP->info;

    return Data;
}

/**************************************************************************/
/*Function:      Displaying the last value which is returned from POP or PEEK function
* Parameters:   -last_data [s16]: returned data from POP or PEEK function
* Return:        void*/
void Displaying_Last_Value(s16 last_data){
    
    if(last_data == UNDERFLOW_VALUE){
        printf("\nthe stack is empty and returning data from it is UNDERFLOW_VALUE\n");
    }else{
        printf("\nthe last data in stack = %d\n",(u16)last_data);
    }

}



/**************************************************************************/
/*Function:      Calculating the current size of stack
* Parameters:    void
* Return:        The current size of stack*/
u16 Size_Of_Stack(){
    
    u16 stack_size= Count_Nodes(TOP);

    return stack_size;
}



/**************************************************************************/
/*Function:      Displaying the data of the Stack
* Parameters:   void
* Return:        void*/
void Display_Stack(){
    
    //Firstly, Check if the stack is empty
    EMPTY Check= IS_EMPTY_Stack();

    if(Check == NOT_EMPTY){
        //Display the data
        /*Diplay data of stack by diplaying the info of linkedlist nodes*/
        Display_List(TOP);
    }else{

        printf("\nThe stack is empty, there is no data exists in stack\n");
    }

}
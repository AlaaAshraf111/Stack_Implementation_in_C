/*@Amgad Diploma_C21-StackandQueue_21October2023*/
/*Stack_Implementation_Using_Linkedlist_Driver*/
/*Auther:     Alaa Ashraf
**Date:       22ctober2023
**LastUpdate: 22October2023*/


#ifndef __LINKEDLIST_IMPLEMENTATION_STACK_H__
#define __LINKEDLIST_IMPLEMENTATION_STACK_H__

/************************************************* IMPLEMENTING STACK USING A LINKEDLIST *************************************************/
/*Global Variables*/
//Initialized Value of TOP
#define INITIAL_VALUE  NULL
//Returning Value from Empty Stack (at Underflow of stack)
#define UNDERFLOW_VALUE  (s16)-9999


//Enum Used in Checking on Stack IS_EMPTY
typedef enum Checking_Stack_Is_Empty{
    NOT_EMPTY=0, IS_EMPTY
}EMPTY;


/*Global Functions Prototype*/
/**************************************************************************/
/*Function:      Initialization of TOP pointer
* Parameters:    void      //as TOP pointer is global here
* Return:        void*/
void Initialization_Stack();



/**************************************************************************/
/*Function:      Check on if Stack is EMPTY or not
* Parameters:    void      //as TOP pointer is global here
* Return:        EMPTY enum (One if Is_EMPTY and Zero if Not)*/
EMPTY IS_EMPTY_Stack();



/**************************************************************************/
/*Function:      Insertion new data in Stack
* Parameters:   -Data [u16]: the data wanted to insert in stack
* Return:        void*/
void PUSH_In_Stack(u16 Data);



/**************************************************************************/
/*Function:      Deletion last data from the Stack after Reading it
* Parameters:   void
* Return:        The wanted data at given index*/
s16 POP_From_Stack();



/**************************************************************************/
/*Function:      Reading last data from the Stack without deleting it
* Parameters:   void
* Return:        The wanted data at given index*/
u16 PEEK_From_Stack();


/**************************************************************************/
/*Function:      Displaying the last value which is returned from POP or PEEK function
* Parameters:   -last_data [s16]: returned data from POP or PEEK function
* Return:        void*/
void Displaying_Last_Value(s16 last_data);



/**************************************************************************/
/*Function:      Calculating the current size of stack
* Parameters:    void
* Return:        The current size of stack*/
u16 Size_Of_Stack();



/**************************************************************************/
/*Function:      Displaying the data of the Stack
* Parameters:   void
* Return:        void*/
void Display_Stack();



#endif
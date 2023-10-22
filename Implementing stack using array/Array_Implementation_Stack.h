/*@Amgad Diploma_C21-StackandQueue_21October2023*/
/*Stack_Implementation_Using_Array_Driver*/
/*Auther:     Alaa Ashraf
**Date:       21ctober2023
**LastUpdate: 22October2023*/

#ifndef __ARRAY_IMPLEMENTATION_STACK_H__
#define __ARRAY_IMPLEMENTATION_STACK_H__

/************************************************* IMPLEMENTING STACK USING AN ARRAY *************************************************/
/*Global Variables*/
//Initialized Value of TOP
#define INITIAL_VALUE  (s16)-1
//Returning Value from Empty Stack (at Underflow of stack)
#define UNDERFLOW_VALUE  (s16)-9999

#define SIZE  5
u16 Arr[SIZE];   //The array allocated for the stack

//Enum Used in Checking on Stack IS_FULL
typedef enum Checking_Stack_Is_Full{
    NOT_FULL=0, IS_FULL
}FULL;
//Enum Used in Checking on Stack IS_EMPTY
typedef enum Checking_Stack_Is_Empty{
    NOT_EMPTY=0, IS_EMPTY
}EMPTY;


/*Global Functions Prototype*/
/**************************************************************************/
/*Function:      Initialization of TOP Index
* Parameters:   -u16[Arr_Size]: the size of the allocated array for stack
* Return:        void*/
void Initialization_Stack(u16 Arr_Size);



/**************************************************************************/
/*Function:      Check on if Stack is FULL or not
* Parameters:   -u16[Arr_Size]: the size of the allocated array for stack
* Return:        FULL enum (One if Is_Full and Zero if Not)*/
FULL IS_FULL_Stack(u16 Arr_Size);



/**************************************************************************/
/*Function:      Check on if Stack is EMPTY or not
* Parameters:   -u16[Arr_Size]: the size of the allocated array for stack
* Return:        EMPTY enum (One if Is_EMPTY and Zero if Not)*/
EMPTY IS_EMPTY_Stack(u16 Arr_Size);



/**************************************************************************/
/*Function:      Insertion new data in Stack
* Parameters:   -u16[Arr_Size]: the size of the allocated array for stack
*               -u16[Data]: the data wanted to insert in stack
* Return:        void*/
void PUSH_In_Stack(u16 Arr_Size, u16 Data);



/**************************************************************************/
/*Function:      Deletion last data from the Stack after Reading it
* Parameters:   -u16[Arr_Size]: the size of the allocated array for stack
* Return:        The wanted data at given index*/
s16 POP_From_Stack(u16 Arr_Size);




/**************************************************************************/
/*Function:      Reading last data from the Stack without deleting it
* Parameters:   -u16[Arr_Size]: the size of the allocated array for stack
* Return:        The wanted data at given index*/
s16 PEEK_From_Stack(u16 Arr_Size);

/**************************************************************************/
/*Function:      Displaying the last value which is returned from POP or PEEK function
* Parameters:   -s16[last_data]: returned data from POP or PEEK function
* Return:        void*/
void Displaying_Last_Value(s16 last_data);



/**************************************************************************/
/*Function:      Calculating the current size of stack
* Parameters:    void
* Return:        The current size of stack*/
u16 Size_Of_Stack();



/**************************************************************************/
/*Function:      Displaying the data of the Stack
* Parameters:   -u16[Arr_Size]: the size of the allocated array for stack
* Return:        void*/
void Display_Stack(u16 Arr_Size);


#endif
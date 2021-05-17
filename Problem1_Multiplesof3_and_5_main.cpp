/**********************************************************************************
**	 Implementation of Multiples_of_3_and_5
***********************************************************************************
*	Author: 			Muhammad Nauman Nasir
*	Creation Date:      05.05.2021
*	Last Edit Date:     06.05.2021
*	Revision:			0
*	Version:			1
*	File   :            Multiples_of_3_and_5_main.cpp
**********************************************************************************/
/****************************************************************************
**	DESCRIPTION
*****************************************************************************
**	Problem :
**	Find the multiples of 3 and 5 below 10 that are multiples of 3 and 5 , we get 3,5,6,9. The sum of these multiples is 23. 
**	Templates used for generalization 
**	****************************************************************************/

#include <iostream>
#include <string>

using namespace std;

template <typename T>
T multiplesof3and5(T &number)
   {
       int result = 0;
       for(int i=1; i<number ;i++)
       {
           if((i%3==0)||(i%5==0))
           {
             result  += i;  
           }
        
       }
    std::cout<< result;
        return result ;
   }

int main()
{
  multiplesof3and5 (10);

}

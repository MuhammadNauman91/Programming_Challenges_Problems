
/**********************************************************************************
**	 Implementation of Largest_PrimeFactor_of_a_number
***********************************************************************************
*	Author: 			Muhammad Nauman Nasir
*	Creation Date:      02.04.2021
*	Last Edit Date:     03.04.2021
*	Revision:			0
*	Version:			1
*	File   :            Largest_PrimeFactor_of_a_number_main.cpp
**********************************************************************************/
/****************************************************************************
**	DESCRIPTION
*****************************************************************************
**	Problem :
**  The Prime Factors of 13195 are 5,7,13,29. What is the tearget prime factor of the number 600851475143.
**	Find the Largest Prime Factor of a number. 
**	Templates used for generalization 
**	****************************************************************************/
#include <iostream>
#include <string>
#include<algorithm>
#include<stdint.h>

template <typename T>
T Largest_prime_factor (T &n)
  {  
      int d = 2;
    
    while (d*d < n)
   {
       if(n%d==0)
       {
          n = n/d;
        
          continue;
       }
       d = d+1;
  }
  return n;
}

template <typename T>
void Print_Value( T &y)
    {
        std::cout<< Largest_prime_factor (y);
    }

int main()
{
  long long unsigned int x = 600851475143ULL;
  Print_Value (x);

}

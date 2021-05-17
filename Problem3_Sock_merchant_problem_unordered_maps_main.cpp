/**********************************************************************************
**	 Implementation of Sock Merchant Problem Unordered Maps
***********************************************************************************
*	Author: 			Muhammad Nauman Nasir
*	Creation Date:      02.04.2021
*	Last Edit Date:     03.04.2021
*	Revision:			0
*	Version:			1
*	File   :            Sock_merchant_problem_unordered_maps.cpp
**********************************************************************************/
/****************************************************************************
**	DESCRIPTION
*****************************************************************************
**	Problem :
**	Find the Largest_Product_in_Series
**	Templates used for generalization 
**	Pass by reference will also save memory and to avoid duplication of stuff
**	Find the adjacent digits in the 1000-digit nuber that have the greatest product are 9*9*8*9 = 5832
**	****************************************************************************/
#include <iostream>
#include <string>
#include <map>
using namespace std;

template <typename T>
T Unordered_Maps(T arr[])
{
   map<int , int> mymap;
  // int length = (sizeof(arr)/sizeof(*arr));
 
   for(int i =0 ; i<9 ; i++)
    {
        mymap[arr[i]] = mymap[arr[i]] + 1;
    }
 int result = 0;
 for(auto pr:mymap)
   {
       result = result + (pr.second)/2;
   }
      std::cout<< result;
      return result;
}

using namespace std;

int main()
{
 int balance[9] = {10,20,20,10,10,30,50,10,20};
 Unordered_Maps(balance);
}
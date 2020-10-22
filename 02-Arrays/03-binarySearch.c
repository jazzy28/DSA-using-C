//for sorted data only and data is stored in array and not linked list
//also called half-interval search or logarithmic search
//look at the middle element first

#include <stdio.h>

int binarySearch(int arr[], int l_index, int r_index, int target){
    int m_index;
    while(l_index <= r_index){
      m_index = (l_index + r_index)/2;
      if(arr[m_index] == target)
        return m_index;
      if(arr[m_index] < target)
        return m_index+1;
      else
        return m_index-1;
      
    }
    return -1;
}

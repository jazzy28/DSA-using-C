//sequential search
//unsorted and sorted data both
//index: 0 to n-1

#include <stdio.h>

int linearSearch(int *arr, int size, int target){
    for(int i = 0; i<size; i++){
        if(arr[i] == target)
            return i;
        return -1;
    }
}

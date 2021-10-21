
#include <stdio.h>

int main()
{
    int arr[] = {1,2,45,36,78,95,63,41,22,5,8,9,6};
    int temp = 0;
    int length = 13;
    int target = 6;
    
    for(int i = 0; i< length ; i++){
        for(int j = 0 ; j < length ; j++){
           if(arr[i] < arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
           }
        }
    }
    int first = 0;
    int last = length - 1 ;

    for(int x = 0 ; x < length ; x++){
        int middle = first + (last - first)  / 2;
        if(arr[middle] == target){
            printf("%d \n",middle);
            break;
        }
        else if(arr[middle] > target){
            last = middle - 1;
        }
        else if(arr[middle] < target){
            first = middle + 1;
        }
    }
       for(int x = 0 ; x < length ; x++){
           printf("%d ",arr[x]);
       }
    
    return 0;
}
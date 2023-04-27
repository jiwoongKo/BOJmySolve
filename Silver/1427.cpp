#include <stdio.h>

int main(){
    char input_arr[16] = {};
    scanf("%s", input_arr);
    
    int input_arr_size = 0;
    while (input_arr[input_arr_size])
        input_arr_size ++;
    
    int result_arr[13] = {};
    for (int i = 0; i < input_arr_size; ++i)
        result_arr[input_arr[i] - 48] += 1;
    
    for (int i = 9; i >= 0; --i){
        if(result_arr[i] != 0){
            for(int j =0; j < result_arr[i]; ++j)
                printf("%d", i);
        }
    }
    printf("\n");
    
    return 0;
}

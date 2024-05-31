#include <stdio.h>

void test(){
    short int arr[5];
    arr[0] = 6;
    arr[1] = 7;
    arr[2] = 8;
    arr[3] = 9;
    arr[4] = 10;
    printf("%hi\n", arr[0]);
    arr[2] = 100;
    printf("%hi\n", arr[2]);

}

int main(){
    short int arr[5] = {1, 2, 3, 4, 5};
    printf("%hi\n", arr[0]);
    arr[2] = 10;
    printf("%hi\n", arr[2]);
    test();
    return 0;
}
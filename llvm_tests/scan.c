#include <stdio.h>

int main(){
    int x;
    scanf("%d", &x);
}

/*
; Define the array
@array = global [5 x i32] zeroinitializer

define void @changeArray() {
    ; Load the array pointer
    %arrayPtr = getelementptr [5 x i32], [5 x i32]* @array, i32 0, i32 0

    ; Set the values of the array elements
    store i32 1, i32* %arrayPtr
    %arrayPtr1 = getelementptr i32, i32* %arrayPtr, i32 1
    store i32 2, i32* %arrayPtr1
    %arrayPtr2 = getelementptr i32, i32* %arrayPtr, i32 2
    store i32 3, i32* %arrayPtr2
    %arrayPtr3 = getelementptr i32, i32* %arrayPtr, i32 3
    store i32 4, i32* %arrayPtr3
    arrayPtr4 = getelementptr i32, i32* %arrayPtr, i32 4
    store i32 5, i32* %arrayPtr4
    ret void
    }
    %
    [1,2,3,4,5]
*/
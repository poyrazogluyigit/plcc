;ModuleID = "calculator"
@read.str = constant [3 x i8] c"%d\00"
@writeline.str = constant [4 x i8] c"%d\0A\00"
@write.str = constant [3 x i8] c"%d\00"
@a = global i32 3
@b = global i32 4
@c = global i32 5

declare i32 @printf(i8*, ...)
declare i32 @scanf(i8*, ...)

define i32 @main() {
entry:
    %x = alloca i32
    %y = alloca i32
    %z = alloca i32

    ; Read input into %x
    call i32 (i8*, ...) @scanf(i8* getelementptr ([3 x i8], [3 x i8]* @read.str, i32 0, i32 0), i32* %x)

    ; Store the constant 2 into %x
    store i32 2, i32* %x

    ; Compute 3 + 4 and store the result in %y
    %3 = add i32 3, 4
    store i32 %3, i32* %y

    ; Store the constant 3 into %z
    store i32 3, i32* %z

    ; Load the value from %x and print it
    %4 = load i32, i32* %x
    call i32 (i8*, ...) @printf(i8* getelementptr ([3 x i8], [3 x i8]* @write.str, i32 0, i32 0), i32 %4)

    ; Load the value from %y and print it
    %6 = load i32, i32* %y
    call i32 (i8*, ...) @printf(i8* getelementptr ([4 x i8], [4 x i8]* @writeline.str, i32 0, i32 0), i32 %6)

    ; Load the value from %z and print it
    %8 = load i32, i32* %z
    call i32 (i8*, ...) @printf(i8* getelementptr ([4 x i8], [4 x i8]* @writeline.str, i32 0, i32 0), i32 %8)

    ret i32 0
}

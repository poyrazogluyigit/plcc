; ModuleID = 'calculator'
declare i32 @printf(i8, ...)
declare i32 @scanf(i8, ...)
@read.str = constant [3 x i8] c"%d\00"
@writeline.str = constant [4 x i8] c"%d\0A\00"
@write.str = constant [3 x i8] c"%d\00"
@x = global i32 5

define i32 @main() {
%y = alloca i32
store i32 0, i32* %y
br label %7
2:
%4 = load i32, i32* %y
%5 = load i32, i32* @x
%6 = icmp slt i32 %4, %5
br i1 %6, label %7, label %13
7:
%8 = load i32, i32* %y
call i32 (i8*, ...) @printf(i8* getelementptr ([4 x i8], [4 x i8]* @writeline.str, i32 0, i32 0), i32 %8)
%11 = load i32, i32* %y
%12 = add i32 %11, 1
store i32 %12, i32* %y
br label %2
13:
ret i32 0
}

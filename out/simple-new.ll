; ModuleID = 'calculator'
declare i32 @printf(i8, ...)
declare i32 @scanf(i8, ...)
@read.str = constant [3 x i8] c"%d\00"
@writeline.str = constant [4 x i8] c"%d\0A\00"
@write.str = constant [3 x i8] c"%d\00"
@a = global i32 3
@b = global i32 4
@c = global i32 5

define i32 @main() {
%x = alloca i32
%y = alloca i32
%z = alloca i32
call i32 (i8*, ...) @scanf(i8* getelementptr ([3 x i8], [3 x i8]* @read.str, i32 0, i32 0), i32* %z)
store i32 2, i32* %x
%3 = add i32 3, 4
store i32 %3, i32* %y
%4 = load i32, i32* %x
%5 = load i32, i32* %y
%6 = mul i32 %4, %5
store i32 %6, i32* %z
%7 = load i32, i32* %x
call i32 (i8*, ...) @printf(i8* getelementptr ([4 x i8], [4 x i8]* @writeline.str, i32 0, i32 0), i32 %7)
%9 = load i32, i32* %y
call i32 (i8*, ...) @printf(i8* getelementptr ([4 x i8], [4 x i8]* @writeline.str, i32 0, i32 0), i32 %9)
%11 = load i32, i32* %z
call i32 (i8*, ...) @printf(i8* getelementptr ([4 x i8], [4 x i8]* @writeline.str, i32 0, i32 0), i32 %11)
ret i32 0
}

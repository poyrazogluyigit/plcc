; ModuleID = 'calculator'
declare i32 @printf(i8*, ...)
declare i32 @scanf(i8*, ...)
declare i8 *@calloc(i64, i64)
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
%2 = add i32 3, 4
store i32 %2, i32* %y
%3 = load i32, i32* %z
call i32 (i8*, ...) @printf(i8* getelementptr ([4 x i8], [4 x i8]* @writeline.str, i32 0, i32 0), i32 %3)
%5 = load i32, i32* %x
%6 = load i32, i32* %y
%7 = mul i32 %5, %6
store i32 %7, i32* %z
%8 = load i32, i32* %x
call i32 (i8*, ...) @printf(i8* getelementptr ([4 x i8], [4 x i8]* @writeline.str, i32 0, i32 0), i32 %8)
%10 = load i32, i32* %y
call i32 (i8*, ...) @printf(i8* getelementptr ([4 x i8], [4 x i8]* @writeline.str, i32 0, i32 0), i32 %10)
%12 = load i32, i32* %z
call i32 (i8*, ...) @printf(i8* getelementptr ([4 x i8], [4 x i8]* @writeline.str, i32 0, i32 0), i32 %12)
ret i32 0
}

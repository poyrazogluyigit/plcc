; ModuleID = 'calculator'
declare i32 @printf(i8, ...)
declare i32 @scanf(i8, ...)
@read.str = constant [3 x i8] c"%d\00"
@writeline.str = constant [4 x i8] c"%d\0A\00"
@write.str = constant [3 x i8] c"%d\00"

define i32 @main() {
%a = alloca i32
%b = alloca i32
call i32 (i8*, ...) @scanf(i8* getelementptr ([3 x i8], [3 x i8]* @read.str, i32 0, i32 0), i32* %a)
call i32 (i8*, ...) @scanf(i8* getelementptr ([3 x i8], [3 x i8]* @read.str, i32 0, i32 0), i32* %b)
%6 = load i32, i32* %a
%7 = load i32, i32* %b
%8 = icmp sgt i32 %6, %7
br i1 %8, label %9, label %12
9:
%10 = load i32, i32* %a
call i32 (i8*, ...) @printf(i8* getelementptr ([4 x i8], [4 x i8]* @writeline.str, i32 0, i32 0), i32 %10)
12:
%14 = load i32, i32* %b
call i32 (i8*, ...) @printf(i8* getelementptr ([4 x i8], [4 x i8]* @writeline.str, i32 0, i32 0), i32 %14)
ret i32 0
}

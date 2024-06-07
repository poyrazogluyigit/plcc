; ModuleID = 'calculator'
declare i32 @printf(i8*, ...)
declare i32 @scanf(i8*, ...)
declare i8 *@calloc(i64, i64)
@read.str = constant [3 x i8] c"%d\00"
@writeline.str = constant [4 x i8] c"%d\0A\00"
@write.str = constant [3 x i8] c"%d\00"

define i32 @main() {
%a = alloca i32
%b = alloca i32
call i32 (i8*, ...) @scanf(i8* getelementptr ([3 x i8], [3 x i8]* @read.str, i32 0, i32 0), i32* %a)
call i32 (i8*, ...) @scanf(i8* getelementptr ([3 x i8], [3 x i8]* @read.str, i32 0, i32 0), i32* %b)
%3 = load i32, i32* %a
%4 = load i32, i32* %b
%5 = icmp sgt i32 %3, %4
br i1 %5, label %a6, label %a7
a6:
%6 = load i32, i32* %a
call i32 (i8*, ...) @printf(i8* getelementptr ([4 x i8], [4 x i8]* @writeline.str, i32 0, i32 0), i32 %6)
br label %a9
a7:
%8 = load i32, i32* %b
call i32 (i8*, ...) @printf(i8* getelementptr ([4 x i8], [4 x i8]* @writeline.str, i32 0, i32 0), i32 %8)
br label %a9
a9:
ret i32 0
}

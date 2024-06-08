; ModuleID = 'calculator'
declare i32 @printf(i8*, ...)
declare i32 @scanf(i8*, ...)
declare i8 *@calloc(i64, i64)
@read.str = constant [3 x i8] c"%d\00"
@writeline.str = constant [4 x i8] c"%d\0A\00"
@write.str = constant [3 x i8] c"%d\00"
@a = global [5 x i32] [i32 1, i32 2, i32 3, i32 4, i32 5]

define i32 @main() {
%d_raw = call i8 * @calloc(i64 5, i64 4 )
%d = bitcast i8* %d_raw to i32*
%i = alloca i32
store i32 0, i32* %i
br label %a4
a1:
%2 = load i32, i32* %i
%3 = icmp slt i32 %2, 5
br i1 %3, label %a4, label %a8
a4:
%4 = load i32, i32* %i
%6 = getelementptr i32, i32* @a, i32 %5
%7= load i32, i32* %6
%8 = getelementptr i32, i32* %d, i32 %4
store i32 %7, i32* %8
br label %a1
a8:
%10 = getelementptr i32, i32* @a, i32 4
%11= load i32, i32* %10
call i32 (i8*, ...) @printf(i8* getelementptr ([4 x i8], [4 x i8]* @writeline.str, i32 0, i32 0), i32 %11)
ret i32 0
}

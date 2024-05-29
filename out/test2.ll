; ModuleID = 'calculator'
declare i32 @printf(i8*, ...)
declare i32 @scanf(i8*, ...)
@read.str = constant [3 x i8] c"%d\00"
@writeline.str = constant [4 x i8] c"%d\0A\00"
@write.str = constant [3 x i8] c"%d\00"
@x = global i32 0
@y = global i32 1
@z = global i32 2
define i32 @main() {
  %x = alloca i32
  %y = alloca i32
  %z = alloca i32
  %1 = load i32, i32* %x
  %2 = load i32, i32* %y
  %3 = add i32 %1,%2
  call i32 (i8*, ...) @printf(i8* getelementptr ([4 x i8], [4 x i8]* @writeline.str, i32 0, i32 0), i32 %3 )
  %5 = load i32, i32* %y
  %6 = load i32, i32* %z
  %7 = mul i32 %5,%6
  call i32 (i8*, ...) @printf(i8* getelementptr ([4 x i8], [4 x i8]* @writeline.str, i32 0, i32 0), i32 %7 )
  %9 = load i32, i32* %x
  %10 = load i32, i32* %z
  %11 = sub i32 %9,%10
  call i32 (i8*, ...) @printf(i8* getelementptr ([4 x i8], [4 x i8]* @writeline.str, i32 0, i32 0), i32 %11 )
  ret i32 0
}

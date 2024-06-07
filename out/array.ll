; ModuleID = 'calculator'
declare i32 @printf(i8*, ...)
declare i32 @scanf(i8*, ...)
declare i8 *@calloc(i64, i64)
@read.str = constant [3 x i8] c"%d\00"
@writeline.str = constant [4 x i8] c"%d\0A\00"
@write.str = constant [3 x i8] c"%d\00"
@x = global i32 5
@a = global [3 x i32] [i32 1, i32 2, i32 3]

define i32 @main() {
%t = alloca i32
%q = alloca i32
%z = alloca i32
%y = alloca i32
%d_raw = call i8 * @calloc(i64 3, i64 4 )
%d = bitcast i8* %d_raw to i32*
%f_raw = call i8 * @calloc(i64 5, i64 4 )
%f = bitcast i8* %f_raw to i32*
store i32 2, i32* %t
%1 = getelementptr i32, i32* %d, i32 2
store i32 4, i32* %1
%2 = getelementptr i32, i32* %f, i32 1
store i32 5, i32* %2
%3 = getelementptr i32, i32* %f, i32 1
%4= load i32, i32* %3
store i32 %4, i32* %y
%5 = getelementptr i32, i32* %f, i32 1
store i32 5, i32* %5
%6 = getelementptr i32, i32* %f, i32 1
%7= load i32, i32* %6
store i32 %7, i32* %q
%8 = getelementptr i32, i32* %f, i32 1
%9= load i32, i32* %8
store i32 %9, i32* %z
%10 = getelementptr i32, i32* %d, i32 4
store i32 31, i32* %10
%11 = getelementptr i32, i32* %d, i32 4
%12= load i32, i32* %11
store i32 %12, i32* %y
%13 = getelementptr i32, i32* %d, i32 2
%14= load i32, i32* %13
%15 = getelementptr i32, i32* %f, i32 2
store i32 %14, i32* %15
%16 = getelementptr i32, i32* %f, i32 2
%17= load i32, i32* %16
store i32 %17, i32* %z
%18 = load i32, i32* %y
call i32 (i8*, ...) @printf(i8* getelementptr ([4 x i8], [4 x i8]* @writeline.str, i32 0, i32 0), i32 %18)
%20 = load i32, i32* %q
call i32 (i8*, ...) @printf(i8* getelementptr ([4 x i8], [4 x i8]* @writeline.str, i32 0, i32 0), i32 %20)
%22 = load i32, i32* %z
call i32 (i8*, ...) @printf(i8* getelementptr ([4 x i8], [4 x i8]* @writeline.str, i32 0, i32 0), i32 %22)
%24 = getelementptr i32, i32* %f, i32 2
%25= load i32, i32* %24
call i32 (i8*, ...) @printf(i8* getelementptr ([4 x i8], [4 x i8]* @writeline.str, i32 0, i32 0), i32 %25)
%27 = getelementptr i32, i32* %f, i32 2
%28= load i32, i32* %27
%29 = getelementptr i32, i32* %f, i32 1
%30= load i32, i32* %29
%31 = icmp sgt i32 %28, %30
br i1 %31, label %a32, label %a34
a32:
%32 = getelementptr i32, i32* %f, i32 2
%33= load i32, i32* %32
call i32 (i8*, ...) @printf(i8* getelementptr ([4 x i8], [4 x i8]* @writeline.str, i32 0, i32 0), i32 %33)
br label %a37
a34:
%35 = getelementptr i32, i32* %f, i32 1
%36= load i32, i32* %35
call i32 (i8*, ...) @printf(i8* getelementptr ([4 x i8], [4 x i8]* @writeline.str, i32 0, i32 0), i32 %36)
br label %a37
a37:
call i32 (i8*, ...) @scanf(i8* getelementptr ([3 x i8], [3 x i8]* @read.str, i32 0, i32 0), i32* %q)
%39 = load i32, i32* %q
%40 = getelementptr i32, i32* %f, i32 1
%41= load i32, i32* %40
%42 = icmp sgt i32 %39, %41
br i1 %42, label %a43, label %a44
a43:
%43 = load i32, i32* %q
call i32 (i8*, ...) @printf(i8* getelementptr ([4 x i8], [4 x i8]* @writeline.str, i32 0, i32 0), i32 %43)
br label %a47
a44:
%45 = getelementptr i32, i32* %f, i32 1
%46= load i32, i32* %45
call i32 (i8*, ...) @printf(i8* getelementptr ([4 x i8], [4 x i8]* @writeline.str, i32 0, i32 0), i32 %46)
br label %a47
a47:
call i32 (i8*, ...) @scanf(i8* getelementptr ([3 x i8], [3 x i8]* @read.str, i32 0, i32 0), i32* %q)
%49 = load i32, i32* %z
%50 = icmp sgt i32 %49, 1
br i1 %50, label %a51, label %a52
a51:
%51 = load i32, i32* %z
call i32 (i8*, ...) @printf(i8* getelementptr ([4 x i8], [4 x i8]* @writeline.str, i32 0, i32 0), i32 %51)
br label %a54
a52:
%53 = load i32, i32* %q
call i32 (i8*, ...) @printf(i8* getelementptr ([4 x i8], [4 x i8]* @writeline.str, i32 0, i32 0), i32 %53)
br label %a54
a54:
%55 = load i32, i32* %q
%56 = icmp sgt i32 1502, %55
br i1 %56, label %a57, label %a58
a57:
%57 = load i32, i32* %z
call i32 (i8*, ...) @printf(i8* getelementptr ([4 x i8], [4 x i8]* @writeline.str, i32 0, i32 0), i32 %57)
br label %a60
a58:
%59 = load i32, i32* %q
call i32 (i8*, ...) @printf(i8* getelementptr ([4 x i8], [4 x i8]* @writeline.str, i32 0, i32 0), i32 %59)
br label %a60
a60:
%61 = load i32, i32* %z
%62 = load i32, i32* %q
%63 = icmp sgt i32 %61, %62
br i1 %63, label %a64, label %a65
a64:
%64 = load i32, i32* %z
call i32 (i8*, ...) @printf(i8* getelementptr ([4 x i8], [4 x i8]* @writeline.str, i32 0, i32 0), i32 %64)
br label %a67
a65:
%66 = load i32, i32* %q
call i32 (i8*, ...) @printf(i8* getelementptr ([4 x i8], [4 x i8]* @writeline.str, i32 0, i32 0), i32 %66)
br label %a67
a67:
%68 = load i32, i32* %q
%69 = getelementptr i32, i32* %f, i32 2
%70= load i32, i32* %69
%71 = icmp sgt i32 %70, %68
br i1 %71, label %a72, label %a74
a72:
%72 = getelementptr i32, i32* %f, i32 2
%73= load i32, i32* %72
call i32 (i8*, ...) @printf(i8* getelementptr ([4 x i8], [4 x i8]* @writeline.str, i32 0, i32 0), i32 %73)
br label %a77
a74:
%75 = getelementptr i32, i32* %f, i32 1
%76= load i32, i32* %75
call i32 (i8*, ...) @printf(i8* getelementptr ([4 x i8], [4 x i8]* @writeline.str, i32 0, i32 0), i32 %76)
br label %a77
a77:
ret i32 0
}

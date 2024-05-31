; ModuleID = 'array.c'
source_filename = "array.c"
target datalayout = "e-m:o-i64:64-i128:128-n32:64-S128"
target triple = "arm64-apple-macosx14.0.0"

@.str = private unnamed_addr constant [5 x i8] c"%hi\0A\00", align 1
@__const.main.arr = private unnamed_addr constant [5 x i16] [i16 1, i16 2, i16 3, i16 4, i16 5], align 2

; Function Attrs: noinline nounwind optnone ssp uwtable(sync)
define void @test() #0 {
  %1 = alloca [5 x i16], align 2
  %2 = getelementptr inbounds [5 x i16], ptr %1, i64 0, i64 0
  store i16 6, ptr %2, align 2
  %3 = getelementptr inbounds [5 x i16], ptr %1, i64 0, i64 1
  store i16 7, ptr %3, align 2
  %4 = getelementptr inbounds [5 x i16], ptr %1, i64 0, i64 2
  store i16 8, ptr %4, align 2
  %5 = getelementptr inbounds [5 x i16], ptr %1, i64 0, i64 3
  store i16 9, ptr %5, align 2
  %6 = getelementptr inbounds [5 x i16], ptr %1, i64 0, i64 4
  store i16 10, ptr %6, align 2
  %7 = getelementptr inbounds [5 x i16], ptr %1, i64 0, i64 0
  %8 = load i16, ptr %7, align 2
  %9 = sext i16 %8 to i32
  %10 = call i32 (ptr, ...) @printf(ptr noundef @.str, i32 noundef %9)
  %11 = getelementptr inbounds [5 x i16], ptr %1, i64 0, i64 2
  store i16 100, ptr %11, align 2
  %12 = getelementptr inbounds [5 x i16], ptr %1, i64 0, i64 2
  %13 = load i16, ptr %12, align 2
  %14 = sext i16 %13 to i32
  %15 = call i32 (ptr, ...) @printf(ptr noundef @.str, i32 noundef %14)
  ret void
}

declare i32 @printf(ptr noundef, ...) #1

; Function Attrs: noinline nounwind optnone ssp uwtable(sync)
define i32 @main() #0 {
  %1 = alloca i32, align 4
  %2 = alloca [5 x i16], align 2
  store i32 0, ptr %1, align 4
  call void @llvm.memcpy.p0.p0.i64(ptr align 2 %2, ptr align 2 @__const.main.arr, i64 10, i1 false)
  %3 = getelementptr inbounds [5 x i16], ptr %2, i64 0, i64 0
  %4 = load i16, ptr %3, align 2
  %5 = sext i16 %4 to i32
  %6 = call i32 (ptr, ...) @printf(ptr noundef @.str, i32 noundef %5)
  %7 = getelementptr inbounds [5 x i16], ptr %2, i64 0, i64 2
  store i16 10, ptr %7, align 2
  %8 = getelementptr inbounds [5 x i16], ptr %2, i64 0, i64 2
  %9 = load i16, ptr %8, align 2
  %10 = sext i16 %9 to i32
  %11 = call i32 (ptr, ...) @printf(ptr noundef @.str, i32 noundef %10)
  call void @test()
  ret i32 0
}

; Function Attrs: nocallback nofree nounwind willreturn memory(argmem: readwrite)
declare void @llvm.memcpy.p0.p0.i64(ptr noalias nocapture writeonly, ptr noalias nocapture readonly, i64, i1 immarg) #2

attributes #0 = { noinline nounwind optnone ssp uwtable(sync) "frame-pointer"="non-leaf" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="apple-m1" "target-features"="+aes,+complxnum,+crc,+dotprod,+fp-armv8,+fp16fml,+fullfp16,+jsconv,+lse,+neon,+pauth,+ras,+rcpc,+rdm,+sha2,+sha3,+v8.1a,+v8.2a,+v8.3a,+v8.4a,+v8.5a,+v8a,+zcm,+zcz" }
attributes #1 = { "frame-pointer"="non-leaf" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="apple-m1" "target-features"="+aes,+complxnum,+crc,+dotprod,+fp-armv8,+fp16fml,+fullfp16,+jsconv,+lse,+neon,+pauth,+ras,+rcpc,+rdm,+sha2,+sha3,+v8.1a,+v8.2a,+v8.3a,+v8.4a,+v8.5a,+v8a,+zcm,+zcz" }
attributes #2 = { nocallback nofree nounwind willreturn memory(argmem: readwrite) }

!llvm.module.flags = !{!0, !1, !2, !3}
!llvm.ident = !{!4}

!0 = !{i32 1, !"wchar_size", i32 4}
!1 = !{i32 8, !"PIC Level", i32 2}
!2 = !{i32 7, !"uwtable", i32 1}
!3 = !{i32 7, !"frame-pointer", i32 1}
!4 = !{!"Homebrew clang version 18.1.5"}

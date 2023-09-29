# 1 "./target.cil.c"
# 1 "/home/yoel/iv-project/results/elevator/log/unit/floorIsOrdered//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "./target.cil.c"
# 217 "target.c"
void __globinit_target(void) ;
extern void __CrownInit(int id ) __attribute__((__crown_skip__)) ;
extern void __CrownCheckSymbolic(int id , char *fname ) __attribute__((__crown_skip__)) ;
extern void __CrownEnableSymbolic(int id , char *fname ) __attribute__((__crown_skip__)) ;
extern void __CrownSetCallerCalleeName(int id , char *fname , char *fname2 ) __attribute__((__crown_skip__)) ;
extern void __CrownHandleReturn(int id , int type , long long val , double fp_val ) __attribute__((__crown_skip__)) ;
extern void __CrownReturn(int id ) __attribute__((__crown_skip__)) ;
extern void __CrownCall(int id , unsigned int fid ) __attribute__((__crown_skip__)) ;
extern void __CrownBranch(int id , int bid , unsigned char b , int line , char *fname ) __attribute__((__crown_skip__)) ;
extern void __CrownApply2(int id , int op , int type , long long val , double fp_val ) __attribute__((__crown_skip__)) ;
extern void __CrownApply1(int id , int op , int type , long long val , double fp_val ) __attribute__((__crown_skip__)) ;
extern void __CrownClearStack(int id ) __attribute__((__crown_skip__)) ;
extern void __CrownStore(int id , unsigned long addr ) __attribute__((__crown_skip__)) ;
extern void __CrownLoad(int id , unsigned long addr , int type , long long val , double fp_val ) __attribute__((__crown_skip__)) ;
# 209 "/usr/lib/gcc/x86_64-linux-gnu/9/include/stddef.h"
typedef unsigned long size_t;
# 152 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __off_t;
# 153 "/usr/include/x86_64-linux-gnu/bits/types.h"
typedef long __off64_t;
# 4 "/usr/include/x86_64-linux-gnu/bits/types/__FILE.h"
struct _IO_FILE;
# 4 "/usr/include/x86_64-linux-gnu/bits/types/__FILE.h"
struct _IO_FILE;
# 4 "/usr/include/x86_64-linux-gnu/bits/types/FILE.h"
struct _IO_FILE;
# 7 "/usr/include/x86_64-linux-gnu/bits/types/FILE.h"
typedef struct _IO_FILE FILE;
# 35 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h"
struct _IO_FILE;
# 36 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h"
struct _IO_marker;
# 36 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h"
struct _IO_marker;
# 37 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h"
struct _IO_codecvt;
# 37 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h"
struct _IO_codecvt;
# 38 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h"
struct _IO_wide_data;
# 38 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h"
struct _IO_wide_data;
# 43 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h"
typedef void _IO_lock_t;
# 49 "/usr/include/x86_64-linux-gnu/bits/types/struct_FILE.h"
struct _IO_FILE {
   int _flags ;
   char *_IO_read_ptr ;
   char *_IO_read_end ;
   char *_IO_read_base ;
   char *_IO_write_base ;
   char *_IO_write_ptr ;
   char *_IO_write_end ;
   char *_IO_buf_base ;
   char *_IO_buf_end ;
   char *_IO_save_base ;
   char *_IO_backup_base ;
   char *_IO_save_end ;
   struct _IO_marker *_markers ;
   struct _IO_FILE *_chain ;
   int _fileno ;
   int _flags2 ;
   __off_t _old_offset ;
   unsigned short _cur_column ;
   signed char _vtable_offset ;
   char _shortbuf[1] ;
   _IO_lock_t *_lock ;
   __off64_t _offset ;
   struct _IO_codecvt *_codecvt ;
   struct _IO_wide_data *_wide_data ;
   struct _IO_FILE *_freeres_list ;
   void *_freeres_buf ;
   size_t __pad5 ;
   int _mode ;
   char _unused2[(15UL * sizeof(int ) - 4UL * sizeof(void *)) - sizeof(size_t )] ;
};
# 6 "target.c"
typedef _Bool __CPROVER_bool;
# 20 "target.c"
enum anonymous {
    INIT = 0,
    IDLE = 1,
    RUN = 2,
    STOP = 3,
    EMERGENCY = -1
} ;
# 24 "target.c"
typedef long clock_t___0;
# 26 "target.c"
typedef enum anonymous elevState;
# 372 "/opt/CROWN-CLI-ubuntu18.04/bin/../include/crown.h"
extern void __CrownInt(int *x , int cnt_sym_var , int ln , char *fname , ...) __attribute__((__crown_skip__)) ;
# 138 "/usr/include/stdio.h"
extern FILE *stdout ;
# 139 "/usr/include/stdio.h"
extern FILE *stderr ;
# 213 "/usr/include/stdio.h"
extern int fclose(FILE *__stream ) ;
# 218 "/usr/include/stdio.h"
extern int fflush(FILE *__stream ) ;
# 246 "/usr/include/stdio.h"
extern FILE *fopen(char * __restrict __filename , char * __restrict __modes ) ;
# 326 "/usr/include/stdio.h"
extern int fprintf(FILE * __restrict __stream , char * __restrict __format , ...) ;
# 332 "/usr/include/stdio.h"
extern int printf(char * __restrict __format , ...) ;
# 617 "/usr/include/stdlib.h"
extern __attribute__((__nothrow__, __noreturn__)) void ( __attribute__((__leaf__)) exit)(int __status ) ;
# 7 "target.c"
int __iv__max_path ;
# 8 "target.c"
int __iv__nondet_call_counter ;
# 9 "target.c"
FILE *__iv__fp ;
# 49 "target.c"
int floorIsOrdered(int floorNum , int motorDir ) ;
# 72 "target.c"
int currentFloorLocation = -1;
# 73 "target.c"
elevState currentState = (elevState )0;
# 77 "target.c"
int lastFloorAfterEmergency = -1;
# 78 "target.c"
int motorDirection = 0;
# 79 "target.c"
int orderMatrix[3L][4L] = { { 0, 0, 0, 0},
   { 0, 0, 0, 0},
   { 0, 0, 0, 0}};
# 80 "target.c"
int previousMainFloor = -1;
# 81 "target.c"
elevState previousState = (elevState )0;
# 82 "target.c"
clock_t___0 previousTime = 0L;
# 85 "target.c"
int floorIsOrdered(int floorNum , int motorDir )
{
  int floorBeyond ;
  __CPROVER_bool tmp_if_expr ;
  int button ;
  int i ;
  int floorIsOrdered__1__4__1__button ;
  int floorIsOrdered__1__4__1__1__1__i ;
  int __retres9 ;

  {
  __CrownCheckSymbolic(4, "floorIsOrdered");
  __CrownCall(3, 1);
  __CrownStore(2, (unsigned long )(& motorDir));
  __CrownStore(1, (unsigned long )(& floorNum));
  __CrownLoad(7, (unsigned long )(& __iv__max_path), 5, (long long )__iv__max_path,
              (double )__iv__max_path);
  __CrownLoad(6, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(5, 0, 5, (long long )(__iv__max_path + 1), (double )(__iv__max_path + 1));
  __CrownStore(8, (unsigned long )(& __iv__max_path));
# 87 "target.c"
  __iv__max_path ++;
  {
  __CrownLoad(11, (unsigned long )(& __iv__max_path), 5, (long long )__iv__max_path,
              (double )__iv__max_path);
  __CrownLoad(10, (unsigned long )0, 5, (long long )10000, (double )10000);
  __CrownApply2(9, 22, 5, (long long )(__iv__max_path >= 10000), (double )(__iv__max_path >= 10000));
# 88 "target.c"
  if (__iv__max_path >= 10000) {
    __CrownBranch(12, 3, 1, 89, "target.c");
    __CrownLoad(14, (unsigned long )0, 5, (long long )0, (double )0);
    __CrownStore(15, (unsigned long )(& __retres9));
# 88 "target.c"
    __retres9 = 0;
# 88 "target.c"
    goto return_label;
  }
# 88 "target.c"
    else {
    __CrownBranch(13, 5, 0, 89, "target.c");

  }
  }
  __CrownLoad(16, (unsigned long )0, 6, (long long )((char * __restrict )"Node_13_467:%d\n"),
              8);
  __CrownLoad(20, (unsigned long )(& orderMatrix[2][(long )floorNum]), 5, (long long )orderMatrix[2][(long )floorNum],
              (double )orderMatrix[2][(long )floorNum]);
  __CrownLoad(19, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(18, 13, 5, (long long )(orderMatrix[2][(long )floorNum] == 1), (double )(orderMatrix[2][(long )floorNum] == 1));
  __CrownApply1(17, 26, 5, (long long )(! (orderMatrix[2][(long )floorNum] == 1)),
                (double )(! (orderMatrix[2][(long )floorNum] == 1)));
  __CrownSetCallerCalleeName(21, "floorIsOrdered", "printf");
# 89 "target.c"
  printf((char * __restrict )"Node_13_467:%d\n", ! (orderMatrix[2][(long )floorNum] == 1));
  __CrownEnableSymbolic(23, "floorIsOrdered");
  __CrownClearStack(22);
  __CrownLoad(24, (unsigned long )(& stdout), 6, (long long )stdout, 8);
  __CrownSetCallerCalleeName(25, "floorIsOrdered", "fflush");
# 89 "target.c"
  fflush(stdout);
  __CrownEnableSymbolic(27, "floorIsOrdered");
  __CrownClearStack(26);
  {
  __CrownLoad(31, (unsigned long )0, 7, (long long )0L, (double )0L);
  __CrownLoad(30, (unsigned long )(& floorNum), 5, (long long )floorNum, (double )floorNum);
  __CrownApply1(29, 28, 7, (long long )((long )floorNum), (double )((long )floorNum));
  __CrownApply2(28, 16, 5, (long long )(0L > (long )floorNum), (double )(0L > (long )floorNum));
# 90 "target.c"
  if (0L > (long )floorNum) {
    __CrownBranch(32, 8, 1, 91, "target.c");
    __CrownLoad(34, (unsigned long )0, 5, (long long )10000, (double )10000);
    __CrownStore(35, (unsigned long )(& __iv__max_path));
# 90 "target.c"
    __iv__max_path = 10000;
  }
# 90 "target.c"
    else {
    __CrownBranch(33, 9, 0, 91, "target.c");
    {
    __CrownLoad(39, (unsigned long )(& floorNum), 5, (long long )floorNum, (double )floorNum);
    __CrownApply1(38, 28, 7, (long long )((long )floorNum), (double )((long )floorNum));
    __CrownLoad(37, (unsigned long )0, 7, (long long )4L, (double )4L);
    __CrownApply2(36, 22, 5, (long long )((long )floorNum >= 4L), (double )((long )floorNum >= 4L));
# 90 "target.c"
    if ((long )floorNum >= 4L) {
      __CrownBranch(40, 10, 1, 91, "target.c");
      __CrownLoad(42, (unsigned long )0, 5, (long long )10000, (double )10000);
      __CrownStore(43, (unsigned long )(& __iv__max_path));
# 90 "target.c"
      __iv__max_path = 10000;
    }
# 90 "target.c"
      else {
      __CrownBranch(41, 11, 0, 91, "target.c");

    }
    }
  }
  }
  {
  __CrownLoad(47, (unsigned long )(& orderMatrix[2][(long )floorNum]), 5, (long long )orderMatrix[2][(long )floorNum],
              (double )orderMatrix[2][(long )floorNum]);
  __CrownLoad(46, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(45, 13, 5, (long long )(orderMatrix[2][(long )floorNum] == 1), (double )(orderMatrix[2][(long )floorNum] == 1));
  __CrownApply1(44, 26, 5, (long long )(! (orderMatrix[2][(long )floorNum] == 1)),
                (double )(! (orderMatrix[2][(long )floorNum] == 1)));
# 91 "target.c"
  if (! (orderMatrix[2][(long )floorNum] == 1)) {
    __CrownBranch(48, 13, 1, 92, "target.c");
# 91 "target.c"
    goto Node_13_472;
  }
# 91 "target.c"
    else {
    __CrownBranch(49, 14, 0, 92, "target.c");

  }
  }
  __CrownLoad(50, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownStore(51, (unsigned long )(& __retres9));
# 92 "target.c"
  __retres9 = 1;
# 92 "target.c"
  goto return_label;
  Node_13_472:
  __CrownLoad(54, (unsigned long )(& __iv__max_path), 5, (long long )__iv__max_path,
              (double )__iv__max_path);
  __CrownLoad(53, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(52, 0, 5, (long long )(__iv__max_path + 1), (double )(__iv__max_path + 1));
  __CrownStore(55, (unsigned long )(& __iv__max_path));
# 94 "target.c"
  __iv__max_path ++;
  {
  __CrownLoad(58, (unsigned long )(& __iv__max_path), 5, (long long )__iv__max_path,
              (double )__iv__max_path);
  __CrownLoad(57, (unsigned long )0, 5, (long long )10000, (double )10000);
  __CrownApply2(56, 22, 5, (long long )(__iv__max_path >= 10000), (double )(__iv__max_path >= 10000));
# 95 "target.c"
  if (__iv__max_path >= 10000) {
    __CrownBranch(59, 19, 1, 96, "target.c");
    __CrownLoad(61, (unsigned long )0, 5, (long long )0, (double )0);
    __CrownStore(62, (unsigned long )(& __retres9));
# 95 "target.c"
    __retres9 = 0;
# 95 "target.c"
    goto return_label;
  }
# 95 "target.c"
    else {
    __CrownBranch(60, 21, 0, 96, "target.c");

  }
  }
  __CrownLoad(63, (unsigned long )0, 6, (long long )((char * __restrict )"Node_13_472:%d\n"),
              8);
  __CrownLoad(67, (unsigned long )(& motorDir), 5, (long long )motorDir, (double )motorDir);
  __CrownLoad(66, (unsigned long )0, 5, (long long )0, (double )0);
  __CrownApply2(65, 13, 5, (long long )(motorDir == 0), (double )(motorDir == 0));
  __CrownApply1(64, 26, 5, (long long )(! (motorDir == 0)), (double )(! (motorDir == 0)));
  __CrownSetCallerCalleeName(68, "floorIsOrdered", "printf");
# 96 "target.c"
  printf((char * __restrict )"Node_13_472:%d\n", ! (motorDir == 0));
  __CrownEnableSymbolic(70, "floorIsOrdered");
  __CrownClearStack(69);
  __CrownLoad(71, (unsigned long )(& stdout), 6, (long long )stdout, 8);
  __CrownSetCallerCalleeName(72, "floorIsOrdered", "fflush");
# 96 "target.c"
  fflush(stdout);
  __CrownEnableSymbolic(74, "floorIsOrdered");
  __CrownClearStack(73);
  {
  __CrownLoad(78, (unsigned long )(& motorDir), 5, (long long )motorDir, (double )motorDir);
  __CrownLoad(77, (unsigned long )0, 5, (long long )0, (double )0);
  __CrownApply2(76, 13, 5, (long long )(motorDir == 0), (double )(motorDir == 0));
  __CrownApply1(75, 26, 5, (long long )(! (motorDir == 0)), (double )(! (motorDir == 0)));
# 97 "target.c"
  if (! (motorDir == 0)) {
    __CrownBranch(79, 24, 1, 98, "target.c");
# 97 "target.c"
    goto Node_13_486;
  }
# 97 "target.c"
    else {
    __CrownBranch(80, 25, 0, 98, "target.c");

  }
  }
  __CrownLoad(83, (unsigned long )(& __iv__max_path), 5, (long long )__iv__max_path,
              (double )__iv__max_path);
  __CrownLoad(82, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(81, 0, 5, (long long )(__iv__max_path + 1), (double )(__iv__max_path + 1));
  __CrownStore(84, (unsigned long )(& __iv__max_path));
# 99 "target.c"
  __iv__max_path ++;
  {
  __CrownLoad(87, (unsigned long )(& __iv__max_path), 5, (long long )__iv__max_path,
              (double )__iv__max_path);
  __CrownLoad(86, (unsigned long )0, 5, (long long )10000, (double )10000);
  __CrownApply2(85, 22, 5, (long long )(__iv__max_path >= 10000), (double )(__iv__max_path >= 10000));
# 100 "target.c"
  if (__iv__max_path >= 10000) {
    __CrownBranch(88, 28, 1, 101, "target.c");
    __CrownLoad(90, (unsigned long )0, 5, (long long )0, (double )0);
    __CrownStore(91, (unsigned long )(& __retres9));
# 100 "target.c"
    __retres9 = 0;
# 100 "target.c"
    goto return_label;
  }
# 100 "target.c"
    else {
    __CrownBranch(89, 30, 0, 101, "target.c");

  }
  }
  __CrownLoad(92, (unsigned long )0, 6, (long long )((char * __restrict )"Node_13_474:%d\n"),
              8);
  __CrownLoad(96, (unsigned long )(& orderMatrix[0][(long )floorNum]), 5, (long long )orderMatrix[0][(long )floorNum],
              (double )orderMatrix[0][(long )floorNum]);
  __CrownLoad(95, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(94, 13, 5, (long long )(orderMatrix[0][(long )floorNum] == 1), (double )(orderMatrix[0][(long )floorNum] == 1));
  __CrownApply1(93, 26, 5, (long long )(! (orderMatrix[0][(long )floorNum] == 1)),
                (double )(! (orderMatrix[0][(long )floorNum] == 1)));
  __CrownSetCallerCalleeName(97, "floorIsOrdered", "printf");
# 101 "target.c"
  printf((char * __restrict )"Node_13_474:%d\n", ! (orderMatrix[0][(long )floorNum] == 1));
  __CrownEnableSymbolic(99, "floorIsOrdered");
  __CrownClearStack(98);
  __CrownLoad(100, (unsigned long )(& stdout), 6, (long long )stdout, 8);
  __CrownSetCallerCalleeName(101, "floorIsOrdered", "fflush");
# 101 "target.c"
  fflush(stdout);
  __CrownEnableSymbolic(103, "floorIsOrdered");
  __CrownClearStack(102);
  {
  __CrownLoad(107, (unsigned long )0, 7, (long long )0L, (double )0L);
  __CrownLoad(106, (unsigned long )(& floorNum), 5, (long long )floorNum, (double )floorNum);
  __CrownApply1(105, 28, 7, (long long )((long )floorNum), (double )((long )floorNum));
  __CrownApply2(104, 16, 5, (long long )(0L > (long )floorNum), (double )(0L > (long )floorNum));
# 102 "target.c"
  if (0L > (long )floorNum) {
    __CrownBranch(108, 33, 1, 103, "target.c");
    __CrownLoad(110, (unsigned long )0, 5, (long long )10000, (double )10000);
    __CrownStore(111, (unsigned long )(& __iv__max_path));
# 102 "target.c"
    __iv__max_path = 10000;
  }
# 102 "target.c"
    else {
    __CrownBranch(109, 34, 0, 103, "target.c");
    {
    __CrownLoad(115, (unsigned long )(& floorNum), 5, (long long )floorNum, (double )floorNum);
    __CrownApply1(114, 28, 7, (long long )((long )floorNum), (double )((long )floorNum));
    __CrownLoad(113, (unsigned long )0, 7, (long long )4L, (double )4L);
    __CrownApply2(112, 22, 5, (long long )((long )floorNum >= 4L), (double )((long )floorNum >= 4L));
# 102 "target.c"
    if ((long )floorNum >= 4L) {
      __CrownBranch(116, 35, 1, 103, "target.c");
      __CrownLoad(118, (unsigned long )0, 5, (long long )10000, (double )10000);
      __CrownStore(119, (unsigned long )(& __iv__max_path));
# 102 "target.c"
      __iv__max_path = 10000;
    }
# 102 "target.c"
      else {
      __CrownBranch(117, 36, 0, 103, "target.c");

    }
    }
  }
  }
  {
  __CrownLoad(123, (unsigned long )(& orderMatrix[0][(long )floorNum]), 5, (long long )orderMatrix[0][(long )floorNum],
              (double )orderMatrix[0][(long )floorNum]);
  __CrownLoad(122, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(121, 13, 5, (long long )(orderMatrix[0][(long )floorNum] == 1), (double )(orderMatrix[0][(long )floorNum] == 1));
  __CrownApply1(120, 26, 5, (long long )(! (orderMatrix[0][(long )floorNum] == 1)),
                (double )(! (orderMatrix[0][(long )floorNum] == 1)));
# 103 "target.c"
  if (! (orderMatrix[0][(long )floorNum] == 1)) {
    __CrownBranch(124, 38, 1, 104, "target.c");
# 103 "target.c"
    goto Node_13_477;
  }
# 103 "target.c"
    else {
    __CrownBranch(125, 39, 0, 104, "target.c");

  }
  }
  __CrownLoad(126, (unsigned long )0, 1, (long long )((__CPROVER_bool )1), (double )((__CPROVER_bool )1));
  __CrownStore(127, (unsigned long )(& tmp_if_expr));
# 104 "target.c"
  tmp_if_expr = (__CPROVER_bool )1;
# 105 "target.c"
  goto Node_13_478;
  Node_13_477: ;
  {
  __CrownLoad(131, (unsigned long )0, 7, (long long )0L, (double )0L);
  __CrownLoad(130, (unsigned long )(& floorNum), 5, (long long )floorNum, (double )floorNum);
  __CrownApply1(129, 28, 7, (long long )((long )floorNum), (double )((long )floorNum));
  __CrownApply2(128, 16, 5, (long long )(0L > (long )floorNum), (double )(0L > (long )floorNum));
# 107 "target.c"
  if (0L > (long )floorNum) {
    __CrownBranch(132, 44, 1, 108, "target.c");
    __CrownLoad(134, (unsigned long )0, 5, (long long )10000, (double )10000);
    __CrownStore(135, (unsigned long )(& __iv__max_path));
# 107 "target.c"
    __iv__max_path = 10000;
  }
# 107 "target.c"
    else {
    __CrownBranch(133, 45, 0, 108, "target.c");
    {
    __CrownLoad(139, (unsigned long )(& floorNum), 5, (long long )floorNum, (double )floorNum);
    __CrownApply1(138, 28, 7, (long long )((long )floorNum), (double )((long )floorNum));
    __CrownLoad(137, (unsigned long )0, 7, (long long )4L, (double )4L);
    __CrownApply2(136, 22, 5, (long long )((long )floorNum >= 4L), (double )((long )floorNum >= 4L));
# 107 "target.c"
    if ((long )floorNum >= 4L) {
      __CrownBranch(140, 46, 1, 108, "target.c");
      __CrownLoad(142, (unsigned long )0, 5, (long long )10000, (double )10000);
      __CrownStore(143, (unsigned long )(& __iv__max_path));
# 107 "target.c"
      __iv__max_path = 10000;
    }
# 107 "target.c"
      else {
      __CrownBranch(141, 47, 0, 108, "target.c");

    }
    }
  }
  }
  {
  __CrownLoad(146, (unsigned long )(& orderMatrix[1][(long )floorNum]), 5, (long long )orderMatrix[1][(long )floorNum],
              (double )orderMatrix[1][(long )floorNum]);
  __CrownLoad(145, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(144, 13, 5, (long long )(orderMatrix[1][(long )floorNum] == 1), (double )(orderMatrix[1][(long )floorNum] == 1));
# 108 "target.c"
  if (orderMatrix[1][(long )floorNum] == 1) {
    __CrownBranch(147, 49, 1, 109, "target.c");
    __CrownLoad(149, (unsigned long )0, 1, (long long )((__CPROVER_bool )1), (double )((__CPROVER_bool )1));
    __CrownStore(150, (unsigned long )(& tmp_if_expr));
# 108 "target.c"
    tmp_if_expr = (__CPROVER_bool )1;
  }
# 108 "target.c"
    else {
    __CrownBranch(148, 50, 0, 109, "target.c");
    __CrownLoad(151, (unsigned long )0, 1, (long long )((__CPROVER_bool )0), (double )((__CPROVER_bool )0));
    __CrownStore(152, (unsigned long )(& tmp_if_expr));
# 108 "target.c"
    tmp_if_expr = (__CPROVER_bool )0;
  }
  }
  Node_13_478:
  __CrownLoad(155, (unsigned long )(& __iv__max_path), 5, (long long )__iv__max_path,
              (double )__iv__max_path);
  __CrownLoad(154, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(153, 0, 5, (long long )(__iv__max_path + 1), (double )(__iv__max_path + 1));
  __CrownStore(156, (unsigned long )(& __iv__max_path));
# 110 "target.c"
  __iv__max_path ++;
  {
  __CrownLoad(159, (unsigned long )(& __iv__max_path), 5, (long long )__iv__max_path,
              (double )__iv__max_path);
  __CrownLoad(158, (unsigned long )0, 5, (long long )10000, (double )10000);
  __CrownApply2(157, 22, 5, (long long )(__iv__max_path >= 10000), (double )(__iv__max_path >= 10000));
# 111 "target.c"
  if (__iv__max_path >= 10000) {
    __CrownBranch(160, 53, 1, 112, "target.c");
    __CrownLoad(162, (unsigned long )0, 5, (long long )0, (double )0);
    __CrownStore(163, (unsigned long )(& __retres9));
# 111 "target.c"
    __retres9 = 0;
# 111 "target.c"
    goto return_label;
  }
# 111 "target.c"
    else {
    __CrownBranch(161, 55, 0, 112, "target.c");

  }
  }
  __CrownLoad(164, (unsigned long )0, 6, (long long )((char * __restrict )"Node_13_479:%d\n"),
              8);
  __CrownLoad(166, (unsigned long )(& tmp_if_expr), 1, (long long )tmp_if_expr, (double )tmp_if_expr);
  __CrownApply1(165, 26, 5, (long long )(! tmp_if_expr), (double )(! tmp_if_expr));
  __CrownSetCallerCalleeName(167, "floorIsOrdered", "printf");
# 112 "target.c"
  printf((char * __restrict )"Node_13_479:%d\n", ! tmp_if_expr);
  __CrownEnableSymbolic(169, "floorIsOrdered");
  __CrownClearStack(168);
  __CrownLoad(170, (unsigned long )(& stdout), 6, (long long )stdout, 8);
  __CrownSetCallerCalleeName(171, "floorIsOrdered", "fflush");
# 112 "target.c"
  fflush(stdout);
  __CrownEnableSymbolic(173, "floorIsOrdered");
  __CrownClearStack(172);
  {
  __CrownLoad(175, (unsigned long )(& tmp_if_expr), 1, (long long )tmp_if_expr, (double )tmp_if_expr);
  __CrownApply1(174, 26, 5, (long long )(! tmp_if_expr), (double )(! tmp_if_expr));
# 113 "target.c"
  if (! tmp_if_expr) {
    __CrownBranch(176, 58, 1, 114, "target.c");
# 113 "target.c"
    goto Node_13_484;
  }
# 113 "target.c"
    else {
    __CrownBranch(177, 59, 0, 114, "target.c");

  }
  }
  __CrownLoad(178, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownStore(179, (unsigned long )(& __retres9));
# 114 "target.c"
  __retres9 = 1;
# 114 "target.c"
  goto return_label;
  Node_13_484: ;
  Node_13_486:
  __CrownLoad(182, (unsigned long )(& __iv__max_path), 5, (long long )__iv__max_path,
              (double )__iv__max_path);
  __CrownLoad(181, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(180, 0, 5, (long long )(__iv__max_path + 1), (double )(__iv__max_path + 1));
  __CrownStore(183, (unsigned long )(& __iv__max_path));
# 117 "target.c"
  __iv__max_path ++;
  {
  __CrownLoad(186, (unsigned long )(& __iv__max_path), 5, (long long )__iv__max_path,
              (double )__iv__max_path);
  __CrownLoad(185, (unsigned long )0, 5, (long long )10000, (double )10000);
  __CrownApply2(184, 22, 5, (long long )(__iv__max_path >= 10000), (double )(__iv__max_path >= 10000));
# 118 "target.c"
  if (__iv__max_path >= 10000) {
    __CrownBranch(187, 65, 1, 119, "target.c");
    __CrownLoad(189, (unsigned long )0, 5, (long long )0, (double )0);
    __CrownStore(190, (unsigned long )(& __retres9));
# 118 "target.c"
    __retres9 = 0;
# 118 "target.c"
    goto return_label;
  }
# 118 "target.c"
    else {
    __CrownBranch(188, 67, 0, 119, "target.c");

  }
  }
  __CrownLoad(191, (unsigned long )0, 6, (long long )((char * __restrict )"Node_13_487:%d\n"),
              8);
  __CrownLoad(195, (unsigned long )(& motorDir), 5, (long long )motorDir, (double )motorDir);
  __CrownLoad(194, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(193, 13, 5, (long long )(motorDir == 1), (double )(motorDir == 1));
  __CrownApply1(192, 26, 5, (long long )(! (motorDir == 1)), (double )(! (motorDir == 1)));
  __CrownSetCallerCalleeName(196, "floorIsOrdered", "printf");
# 119 "target.c"
  printf((char * __restrict )"Node_13_487:%d\n", ! (motorDir == 1));
  __CrownEnableSymbolic(198, "floorIsOrdered");
  __CrownClearStack(197);
  __CrownLoad(199, (unsigned long )(& stdout), 6, (long long )stdout, 8);
  __CrownSetCallerCalleeName(200, "floorIsOrdered", "fflush");
# 119 "target.c"
  fflush(stdout);
  __CrownEnableSymbolic(202, "floorIsOrdered");
  __CrownClearStack(201);
  {
  __CrownLoad(206, (unsigned long )(& motorDir), 5, (long long )motorDir, (double )motorDir);
  __CrownLoad(205, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(204, 13, 5, (long long )(motorDir == 1), (double )(motorDir == 1));
  __CrownApply1(203, 26, 5, (long long )(! (motorDir == 1)), (double )(! (motorDir == 1)));
# 120 "target.c"
  if (! (motorDir == 1)) {
    __CrownBranch(207, 70, 1, 121, "target.c");
# 120 "target.c"
    goto Node_13_521;
  }
# 120 "target.c"
    else {
    __CrownBranch(208, 71, 0, 121, "target.c");

  }
  }
  __CrownLoad(209, (unsigned long )0, 5, (long long )0, (double )0);
  __CrownStore(210, (unsigned long )(& floorBeyond));
# 121 "target.c"
  floorBeyond = 0;
  __CrownLoad(211, (unsigned long )0, 5, (long long )0, (double )0);
  __CrownStore(212, (unsigned long )(& button));
# 123 "target.c"
  button = 0;
  Node_13_492:
  __CrownLoad(215, (unsigned long )(& __iv__max_path), 5, (long long )__iv__max_path,
              (double )__iv__max_path);
  __CrownLoad(214, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(213, 0, 5, (long long )(__iv__max_path + 1), (double )(__iv__max_path + 1));
  __CrownStore(216, (unsigned long )(& __iv__max_path));
# 125 "target.c"
  __iv__max_path ++;
  {
  __CrownLoad(219, (unsigned long )(& __iv__max_path), 5, (long long )__iv__max_path,
              (double )__iv__max_path);
  __CrownLoad(218, (unsigned long )0, 5, (long long )10000, (double )10000);
  __CrownApply2(217, 22, 5, (long long )(__iv__max_path >= 10000), (double )(__iv__max_path >= 10000));
# 126 "target.c"
  if (__iv__max_path >= 10000) {
    __CrownBranch(220, 75, 1, 127, "target.c");
    __CrownLoad(222, (unsigned long )0, 5, (long long )0, (double )0);
    __CrownStore(223, (unsigned long )(& __retres9));
# 126 "target.c"
    __retres9 = 0;
# 126 "target.c"
    goto return_label;
  }
# 126 "target.c"
    else {
    __CrownBranch(221, 77, 0, 127, "target.c");

  }
  }
  __CrownLoad(224, (unsigned long )0, 6, (long long )((char * __restrict )"Node_13_492:%d\n"),
              8);
  __CrownLoad(227, (unsigned long )(& button), 5, (long long )button, (double )button);
  __CrownLoad(226, (unsigned long )0, 5, (long long )2, (double )2);
  __CrownApply2(225, 22, 5, (long long )(button >= 2), (double )(button >= 2));
  __CrownSetCallerCalleeName(228, "floorIsOrdered", "printf");
# 127 "target.c"
  printf((char * __restrict )"Node_13_492:%d\n", button >= 2);
  __CrownEnableSymbolic(230, "floorIsOrdered");
  __CrownClearStack(229);
  __CrownLoad(231, (unsigned long )(& stdout), 6, (long long )stdout, 8);
  __CrownSetCallerCalleeName(232, "floorIsOrdered", "fflush");
# 127 "target.c"
  fflush(stdout);
  __CrownEnableSymbolic(234, "floorIsOrdered");
  __CrownClearStack(233);
  {
  __CrownLoad(237, (unsigned long )(& button), 5, (long long )button, (double )button);
  __CrownLoad(236, (unsigned long )0, 5, (long long )2, (double )2);
  __CrownApply2(235, 22, 5, (long long )(button >= 2), (double )(button >= 2));
# 128 "target.c"
  if (button >= 2) {
    __CrownBranch(238, 80, 1, 129, "target.c");
# 128 "target.c"
    goto Node_13_504;
  }
# 128 "target.c"
    else {
    __CrownBranch(239, 81, 0, 129, "target.c");

  }
  }
  __CrownLoad(242, (unsigned long )(& floorNum), 5, (long long )floorNum, (double )floorNum);
  __CrownLoad(241, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(240, 0, 5, (long long )(floorNum + 1), (double )(floorNum + 1));
  __CrownStore(243, (unsigned long )(& i));
# 130 "target.c"
  i = floorNum + 1;
  Node_13_496:
  __CrownLoad(246, (unsigned long )(& __iv__max_path), 5, (long long )__iv__max_path,
              (double )__iv__max_path);
  __CrownLoad(245, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(244, 0, 5, (long long )(__iv__max_path + 1), (double )(__iv__max_path + 1));
  __CrownStore(247, (unsigned long )(& __iv__max_path));
# 132 "target.c"
  __iv__max_path ++;
  {
  __CrownLoad(250, (unsigned long )(& __iv__max_path), 5, (long long )__iv__max_path,
              (double )__iv__max_path);
  __CrownLoad(249, (unsigned long )0, 5, (long long )10000, (double )10000);
  __CrownApply2(248, 22, 5, (long long )(__iv__max_path >= 10000), (double )(__iv__max_path >= 10000));
# 133 "target.c"
  if (__iv__max_path >= 10000) {
    __CrownBranch(251, 85, 1, 134, "target.c");
    __CrownLoad(253, (unsigned long )0, 5, (long long )0, (double )0);
    __CrownStore(254, (unsigned long )(& __retres9));
# 133 "target.c"
    __retres9 = 0;
# 133 "target.c"
    goto return_label;
  }
# 133 "target.c"
    else {
    __CrownBranch(252, 87, 0, 134, "target.c");

  }
  }
  __CrownLoad(255, (unsigned long )0, 6, (long long )((char * __restrict )"Node_13_496:%d\n"),
              8);
  __CrownLoad(258, (unsigned long )(& i), 5, (long long )i, (double )i);
  __CrownLoad(257, (unsigned long )0, 5, (long long )4, (double )4);
  __CrownApply2(256, 22, 5, (long long )(i >= 4), (double )(i >= 4));
  __CrownSetCallerCalleeName(259, "floorIsOrdered", "printf");
# 134 "target.c"
  printf((char * __restrict )"Node_13_496:%d\n", i >= 4);
  __CrownEnableSymbolic(261, "floorIsOrdered");
  __CrownClearStack(260);
  __CrownLoad(262, (unsigned long )(& stdout), 6, (long long )stdout, 8);
  __CrownSetCallerCalleeName(263, "floorIsOrdered", "fflush");
# 134 "target.c"
  fflush(stdout);
  __CrownEnableSymbolic(265, "floorIsOrdered");
  __CrownClearStack(264);
  {
  __CrownLoad(268, (unsigned long )(& i), 5, (long long )i, (double )i);
  __CrownLoad(267, (unsigned long )0, 5, (long long )4, (double )4);
  __CrownApply2(266, 22, 5, (long long )(i >= 4), (double )(i >= 4));
# 135 "target.c"
  if (i >= 4) {
    __CrownBranch(269, 90, 1, 136, "target.c");
# 135 "target.c"
    goto Node_13_500;
  }
# 135 "target.c"
    else {
    __CrownBranch(270, 91, 0, 136, "target.c");

  }
  }
  {
  __CrownLoad(274, (unsigned long )0, 7, (long long )0L, (double )0L);
  __CrownLoad(273, (unsigned long )(& button), 5, (long long )button, (double )button);
  __CrownApply1(272, 28, 7, (long long )((long )button), (double )((long )button));
  __CrownApply2(271, 16, 5, (long long )(0L > (long )button), (double )(0L > (long )button));
# 136 "target.c"
  if (0L > (long )button) {
    __CrownBranch(275, 93, 1, 137, "target.c");
    __CrownLoad(277, (unsigned long )0, 5, (long long )10000, (double )10000);
    __CrownStore(278, (unsigned long )(& __iv__max_path));
# 136 "target.c"
    __iv__max_path = 10000;
  }
# 136 "target.c"
    else {
    __CrownBranch(276, 94, 0, 137, "target.c");
    {
    __CrownLoad(282, (unsigned long )(& button), 5, (long long )button, (double )button);
    __CrownApply1(281, 28, 7, (long long )((long )button), (double )((long )button));
    __CrownLoad(280, (unsigned long )0, 7, (long long )3L, (double )3L);
    __CrownApply2(279, 22, 5, (long long )((long )button >= 3L), (double )((long )button >= 3L));
# 136 "target.c"
    if ((long )button >= 3L) {
      __CrownBranch(283, 95, 1, 137, "target.c");
      __CrownLoad(285, (unsigned long )0, 5, (long long )10000, (double )10000);
      __CrownStore(286, (unsigned long )(& __iv__max_path));
# 136 "target.c"
      __iv__max_path = 10000;
    }
# 136 "target.c"
      else {
      __CrownBranch(284, 96, 0, 137, "target.c");

    }
    }
  }
  }
  {
  __CrownLoad(290, (unsigned long )0, 7, (long long )0L, (double )0L);
  __CrownLoad(289, (unsigned long )(& i), 5, (long long )i, (double )i);
  __CrownApply1(288, 28, 7, (long long )((long )i), (double )((long )i));
  __CrownApply2(287, 16, 5, (long long )(0L > (long )i), (double )(0L > (long )i));
# 137 "target.c"
  if (0L > (long )i) {
    __CrownBranch(291, 98, 1, 138, "target.c");
    __CrownLoad(293, (unsigned long )0, 5, (long long )10000, (double )10000);
    __CrownStore(294, (unsigned long )(& __iv__max_path));
# 137 "target.c"
    __iv__max_path = 10000;
  }
# 137 "target.c"
    else {
    __CrownBranch(292, 99, 0, 138, "target.c");
    {
    __CrownLoad(298, (unsigned long )(& i), 5, (long long )i, (double )i);
    __CrownApply1(297, 28, 7, (long long )((long )i), (double )((long )i));
    __CrownLoad(296, (unsigned long )0, 7, (long long )4L, (double )4L);
    __CrownApply2(295, 22, 5, (long long )((long )i >= 4L), (double )((long )i >= 4L));
# 137 "target.c"
    if ((long )i >= 4L) {
      __CrownBranch(299, 100, 1, 138, "target.c");
      __CrownLoad(301, (unsigned long )0, 5, (long long )10000, (double )10000);
      __CrownStore(302, (unsigned long )(& __iv__max_path));
# 137 "target.c"
      __iv__max_path = 10000;
    }
# 137 "target.c"
      else {
      __CrownBranch(300, 101, 0, 138, "target.c");

    }
    }
  }
  }
  {
  __CrownLoad(306, (unsigned long )0, 7, (long long )0L, (double )0L);
  __CrownLoad(305, (unsigned long )(& button), 5, (long long )button, (double )button);
  __CrownApply1(304, 28, 7, (long long )((long )button), (double )((long )button));
  __CrownApply2(303, 16, 5, (long long )(0L > (long )button), (double )(0L > (long )button));
# 138 "target.c"
  if (0L > (long )button) {
    __CrownBranch(307, 103, 1, 139, "target.c");
    __CrownLoad(309, (unsigned long )0, 5, (long long )10000, (double )10000);
    __CrownStore(310, (unsigned long )(& __iv__max_path));
# 138 "target.c"
    __iv__max_path = 10000;
  }
# 138 "target.c"
    else {
    __CrownBranch(308, 104, 0, 139, "target.c");
    {
    __CrownLoad(314, (unsigned long )(& button), 5, (long long )button, (double )button);
    __CrownApply1(313, 28, 7, (long long )((long )button), (double )((long )button));
    __CrownLoad(312, (unsigned long )0, 7, (long long )3L, (double )3L);
    __CrownApply2(311, 22, 5, (long long )((long )button >= 3L), (double )((long )button >= 3L));
# 138 "target.c"
    if ((long )button >= 3L) {
      __CrownBranch(315, 105, 1, 139, "target.c");
      __CrownLoad(317, (unsigned long )0, 5, (long long )10000, (double )10000);
      __CrownStore(318, (unsigned long )(& __iv__max_path));
# 138 "target.c"
      __iv__max_path = 10000;
    }
# 138 "target.c"
      else {
      __CrownBranch(316, 106, 0, 139, "target.c");

    }
    }
  }
  }
  __CrownLoad(321, (unsigned long )(& floorBeyond), 5, (long long )floorBeyond, (double )floorBeyond);
  __CrownLoad(320, (unsigned long )(& orderMatrix[(long )button][(long )i]), 5, (long long )orderMatrix[(long )button][(long )i],
              (double )orderMatrix[(long )button][(long )i]);
  __CrownApply2(319, 0, 5, (long long )(floorBeyond + orderMatrix[(long )button][(long )i]),
                (double )(floorBeyond + orderMatrix[(long )button][(long )i]));
  __CrownStore(322, (unsigned long )(& floorBeyond));
# 139 "target.c"
  floorBeyond += orderMatrix[(long )button][(long )i];
  __CrownLoad(325, (unsigned long )(& i), 5, (long long )i, (double )i);
  __CrownLoad(324, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(323, 0, 5, (long long )(i + 1), (double )(i + 1));
  __CrownStore(326, (unsigned long )(& i));
# 140 "target.c"
  i ++;
# 141 "target.c"
  goto Node_13_496;
  Node_13_500:
  __CrownLoad(329, (unsigned long )(& button), 5, (long long )button, (double )button);
  __CrownLoad(328, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(327, 0, 5, (long long )(button + 1), (double )(button + 1));
  __CrownStore(330, (unsigned long )(& button));
# 143 "target.c"
  button ++;
# 144 "target.c"
  goto Node_13_492;
  Node_13_504:
  __CrownLoad(333, (unsigned long )(& __iv__max_path), 5, (long long )__iv__max_path,
              (double )__iv__max_path);
  __CrownLoad(332, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(331, 0, 5, (long long )(__iv__max_path + 1), (double )(__iv__max_path + 1));
  __CrownStore(334, (unsigned long )(& __iv__max_path));
# 146 "target.c"
  __iv__max_path ++;
  {
  __CrownLoad(337, (unsigned long )(& __iv__max_path), 5, (long long )__iv__max_path,
              (double )__iv__max_path);
  __CrownLoad(336, (unsigned long )0, 5, (long long )10000, (double )10000);
  __CrownApply2(335, 22, 5, (long long )(__iv__max_path >= 10000), (double )(__iv__max_path >= 10000));
# 147 "target.c"
  if (__iv__max_path >= 10000) {
    __CrownBranch(338, 113, 1, 148, "target.c");
    __CrownLoad(340, (unsigned long )0, 5, (long long )0, (double )0);
    __CrownStore(341, (unsigned long )(& __retres9));
# 147 "target.c"
    __retres9 = 0;
# 147 "target.c"
    goto return_label;
  }
# 147 "target.c"
    else {
    __CrownBranch(339, 115, 0, 148, "target.c");

  }
  }
  __CrownLoad(342, (unsigned long )0, 6, (long long )((char * __restrict )"Node_13_505:%d\n"),
              8);
  __CrownLoad(346, (unsigned long )(& orderMatrix[0][(long )floorNum]), 5, (long long )orderMatrix[0][(long )floorNum],
              (double )orderMatrix[0][(long )floorNum]);
  __CrownLoad(345, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(344, 13, 5, (long long )(orderMatrix[0][(long )floorNum] == 1), (double )(orderMatrix[0][(long )floorNum] == 1));
  __CrownApply1(343, 26, 5, (long long )(! (orderMatrix[0][(long )floorNum] == 1)),
                (double )(! (orderMatrix[0][(long )floorNum] == 1)));
  __CrownSetCallerCalleeName(347, "floorIsOrdered", "printf");
# 148 "target.c"
  printf((char * __restrict )"Node_13_505:%d\n", ! (orderMatrix[0][(long )floorNum] == 1));
  __CrownEnableSymbolic(349, "floorIsOrdered");
  __CrownClearStack(348);
  __CrownLoad(350, (unsigned long )(& stdout), 6, (long long )stdout, 8);
  __CrownSetCallerCalleeName(351, "floorIsOrdered", "fflush");
# 148 "target.c"
  fflush(stdout);
  __CrownEnableSymbolic(353, "floorIsOrdered");
  __CrownClearStack(352);
  {
  __CrownLoad(357, (unsigned long )0, 7, (long long )0L, (double )0L);
  __CrownLoad(356, (unsigned long )(& floorNum), 5, (long long )floorNum, (double )floorNum);
  __CrownApply1(355, 28, 7, (long long )((long )floorNum), (double )((long )floorNum));
  __CrownApply2(354, 16, 5, (long long )(0L > (long )floorNum), (double )(0L > (long )floorNum));
# 149 "target.c"
  if (0L > (long )floorNum) {
    __CrownBranch(358, 118, 1, 150, "target.c");
    __CrownLoad(360, (unsigned long )0, 5, (long long )10000, (double )10000);
    __CrownStore(361, (unsigned long )(& __iv__max_path));
# 149 "target.c"
    __iv__max_path = 10000;
  }
# 149 "target.c"
    else {
    __CrownBranch(359, 119, 0, 150, "target.c");
    {
    __CrownLoad(365, (unsigned long )(& floorNum), 5, (long long )floorNum, (double )floorNum);
    __CrownApply1(364, 28, 7, (long long )((long )floorNum), (double )((long )floorNum));
    __CrownLoad(363, (unsigned long )0, 7, (long long )4L, (double )4L);
    __CrownApply2(362, 22, 5, (long long )((long )floorNum >= 4L), (double )((long )floorNum >= 4L));
# 149 "target.c"
    if ((long )floorNum >= 4L) {
      __CrownBranch(366, 120, 1, 150, "target.c");
      __CrownLoad(368, (unsigned long )0, 5, (long long )10000, (double )10000);
      __CrownStore(369, (unsigned long )(& __iv__max_path));
# 149 "target.c"
      __iv__max_path = 10000;
    }
# 149 "target.c"
      else {
      __CrownBranch(367, 121, 0, 150, "target.c");

    }
    }
  }
  }
  {
  __CrownLoad(373, (unsigned long )(& orderMatrix[0][(long )floorNum]), 5, (long long )orderMatrix[0][(long )floorNum],
              (double )orderMatrix[0][(long )floorNum]);
  __CrownLoad(372, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(371, 13, 5, (long long )(orderMatrix[0][(long )floorNum] == 1), (double )(orderMatrix[0][(long )floorNum] == 1));
  __CrownApply1(370, 26, 5, (long long )(! (orderMatrix[0][(long )floorNum] == 1)),
                (double )(! (orderMatrix[0][(long )floorNum] == 1)));
# 150 "target.c"
  if (! (orderMatrix[0][(long )floorNum] == 1)) {
    __CrownBranch(374, 123, 1, 151, "target.c");
# 150 "target.c"
    goto Node_13_511;
  }
# 150 "target.c"
    else {
    __CrownBranch(375, 124, 0, 151, "target.c");

  }
  }
  __CrownLoad(376, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownStore(377, (unsigned long )(& __retres9));
# 151 "target.c"
  __retres9 = 1;
# 151 "target.c"
  goto return_label;
  Node_13_511:
  __CrownLoad(380, (unsigned long )(& __iv__max_path), 5, (long long )__iv__max_path,
              (double )__iv__max_path);
  __CrownLoad(379, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(378, 0, 5, (long long )(__iv__max_path + 1), (double )(__iv__max_path + 1));
  __CrownStore(381, (unsigned long )(& __iv__max_path));
# 153 "target.c"
  __iv__max_path ++;
  {
  __CrownLoad(384, (unsigned long )(& __iv__max_path), 5, (long long )__iv__max_path,
              (double )__iv__max_path);
  __CrownLoad(383, (unsigned long )0, 5, (long long )10000, (double )10000);
  __CrownApply2(382, 22, 5, (long long )(__iv__max_path >= 10000), (double )(__iv__max_path >= 10000));
# 154 "target.c"
  if (__iv__max_path >= 10000) {
    __CrownBranch(385, 129, 1, 155, "target.c");
    __CrownLoad(387, (unsigned long )0, 5, (long long )0, (double )0);
    __CrownStore(388, (unsigned long )(& __retres9));
# 154 "target.c"
    __retres9 = 0;
# 154 "target.c"
    goto return_label;
  }
# 154 "target.c"
    else {
    __CrownBranch(386, 131, 0, 155, "target.c");

  }
  }
  __CrownLoad(389, (unsigned long )0, 6, (long long )((char * __restrict )"Node_13_511:%d\n"),
              8);
  __CrownLoad(392, (unsigned long )(& orderMatrix[1][(long )floorNum]), 5, (long long )orderMatrix[1][(long )floorNum],
              (double )orderMatrix[1][(long )floorNum]);
  __CrownLoad(391, (unsigned long )0, 5, (long long )0, (double )0);
  __CrownApply2(390, 13, 5, (long long )(orderMatrix[1][(long )floorNum] == 0), (double )(orderMatrix[1][(long )floorNum] == 0));
  __CrownSetCallerCalleeName(393, "floorIsOrdered", "printf");
# 155 "target.c"
  printf((char * __restrict )"Node_13_511:%d\n", orderMatrix[1][(long )floorNum] == 0);
  __CrownEnableSymbolic(395, "floorIsOrdered");
  __CrownClearStack(394);
  __CrownLoad(396, (unsigned long )(& stdout), 6, (long long )stdout, 8);
  __CrownSetCallerCalleeName(397, "floorIsOrdered", "fflush");
# 155 "target.c"
  fflush(stdout);
  __CrownEnableSymbolic(399, "floorIsOrdered");
  __CrownClearStack(398);
  {
  __CrownLoad(403, (unsigned long )0, 7, (long long )0L, (double )0L);
  __CrownLoad(402, (unsigned long )(& floorNum), 5, (long long )floorNum, (double )floorNum);
  __CrownApply1(401, 28, 7, (long long )((long )floorNum), (double )((long )floorNum));
  __CrownApply2(400, 16, 5, (long long )(0L > (long )floorNum), (double )(0L > (long )floorNum));
# 156 "target.c"
  if (0L > (long )floorNum) {
    __CrownBranch(404, 134, 1, 157, "target.c");
    __CrownLoad(406, (unsigned long )0, 5, (long long )10000, (double )10000);
    __CrownStore(407, (unsigned long )(& __iv__max_path));
# 156 "target.c"
    __iv__max_path = 10000;
  }
# 156 "target.c"
    else {
    __CrownBranch(405, 135, 0, 157, "target.c");
    {
    __CrownLoad(411, (unsigned long )(& floorNum), 5, (long long )floorNum, (double )floorNum);
    __CrownApply1(410, 28, 7, (long long )((long )floorNum), (double )((long )floorNum));
    __CrownLoad(409, (unsigned long )0, 7, (long long )4L, (double )4L);
    __CrownApply2(408, 22, 5, (long long )((long )floorNum >= 4L), (double )((long )floorNum >= 4L));
# 156 "target.c"
    if ((long )floorNum >= 4L) {
      __CrownBranch(412, 136, 1, 157, "target.c");
      __CrownLoad(414, (unsigned long )0, 5, (long long )10000, (double )10000);
      __CrownStore(415, (unsigned long )(& __iv__max_path));
# 156 "target.c"
      __iv__max_path = 10000;
    }
# 156 "target.c"
      else {
      __CrownBranch(413, 137, 0, 157, "target.c");

    }
    }
  }
  }
  {
  __CrownLoad(418, (unsigned long )(& orderMatrix[1][(long )floorNum]), 5, (long long )orderMatrix[1][(long )floorNum],
              (double )orderMatrix[1][(long )floorNum]);
  __CrownLoad(417, (unsigned long )0, 5, (long long )0, (double )0);
  __CrownApply2(416, 13, 5, (long long )(orderMatrix[1][(long )floorNum] == 0), (double )(orderMatrix[1][(long )floorNum] == 0));
# 157 "target.c"
  if (orderMatrix[1][(long )floorNum] == 0) {
    __CrownBranch(419, 139, 1, 158, "target.c");
# 157 "target.c"
    goto Node_13_518;
  }
# 157 "target.c"
    else {
    __CrownBranch(420, 140, 0, 158, "target.c");

  }
  }
  __CrownLoad(423, (unsigned long )(& __iv__max_path), 5, (long long )__iv__max_path,
              (double )__iv__max_path);
  __CrownLoad(422, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(421, 0, 5, (long long )(__iv__max_path + 1), (double )(__iv__max_path + 1));
  __CrownStore(424, (unsigned long )(& __iv__max_path));
# 158 "target.c"
  __iv__max_path ++;
  {
  __CrownLoad(427, (unsigned long )(& __iv__max_path), 5, (long long )__iv__max_path,
              (double )__iv__max_path);
  __CrownLoad(426, (unsigned long )0, 5, (long long )10000, (double )10000);
  __CrownApply2(425, 22, 5, (long long )(__iv__max_path >= 10000), (double )(__iv__max_path >= 10000));
# 159 "target.c"
  if (__iv__max_path >= 10000) {
    __CrownBranch(428, 143, 1, 160, "target.c");
    __CrownLoad(430, (unsigned long )0, 5, (long long )0, (double )0);
    __CrownStore(431, (unsigned long )(& __retres9));
# 159 "target.c"
    __retres9 = 0;
# 159 "target.c"
    goto return_label;
  }
# 159 "target.c"
    else {
    __CrownBranch(429, 145, 0, 160, "target.c");

  }
  }
  __CrownLoad(432, (unsigned long )0, 6, (long long )((char * __restrict )"Node_13_512:%d\n"),
              8);
  __CrownLoad(436, (unsigned long )(& floorBeyond), 5, (long long )floorBeyond, (double )floorBeyond);
  __CrownLoad(435, (unsigned long )0, 5, (long long )0, (double )0);
  __CrownApply2(434, 13, 5, (long long )(floorBeyond == 0), (double )(floorBeyond == 0));
  __CrownApply1(433, 26, 5, (long long )(! (floorBeyond == 0)), (double )(! (floorBeyond == 0)));
  __CrownSetCallerCalleeName(437, "floorIsOrdered", "printf");
# 160 "target.c"
  printf((char * __restrict )"Node_13_512:%d\n", ! (floorBeyond == 0));
  __CrownEnableSymbolic(439, "floorIsOrdered");
  __CrownClearStack(438);
  __CrownLoad(440, (unsigned long )(& stdout), 6, (long long )stdout, 8);
  __CrownSetCallerCalleeName(441, "floorIsOrdered", "fflush");
# 160 "target.c"
  fflush(stdout);
  __CrownEnableSymbolic(443, "floorIsOrdered");
  __CrownClearStack(442);
  {
  __CrownLoad(447, (unsigned long )(& floorBeyond), 5, (long long )floorBeyond, (double )floorBeyond);
  __CrownLoad(446, (unsigned long )0, 5, (long long )0, (double )0);
  __CrownApply2(445, 13, 5, (long long )(floorBeyond == 0), (double )(floorBeyond == 0));
  __CrownApply1(444, 26, 5, (long long )(! (floorBeyond == 0)), (double )(! (floorBeyond == 0)));
# 161 "target.c"
  if (! (floorBeyond == 0)) {
    __CrownBranch(448, 148, 1, 162, "target.c");
# 161 "target.c"
    goto Node_13_517;
  }
# 161 "target.c"
    else {
    __CrownBranch(449, 149, 0, 162, "target.c");

  }
  }
  __CrownLoad(450, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownStore(451, (unsigned long )(& __retres9));
# 162 "target.c"
  __retres9 = 1;
# 162 "target.c"
  goto return_label;
  Node_13_517: ;
  Node_13_518: ;
  Node_13_521:
  __CrownLoad(454, (unsigned long )(& __iv__max_path), 5, (long long )__iv__max_path,
              (double )__iv__max_path);
  __CrownLoad(453, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(452, 0, 5, (long long )(__iv__max_path + 1), (double )(__iv__max_path + 1));
  __CrownStore(455, (unsigned long )(& __iv__max_path));
# 166 "target.c"
  __iv__max_path ++;
  {
  __CrownLoad(458, (unsigned long )(& __iv__max_path), 5, (long long )__iv__max_path,
              (double )__iv__max_path);
  __CrownLoad(457, (unsigned long )0, 5, (long long )10000, (double )10000);
  __CrownApply2(456, 22, 5, (long long )(__iv__max_path >= 10000), (double )(__iv__max_path >= 10000));
# 167 "target.c"
  if (__iv__max_path >= 10000) {
    __CrownBranch(459, 156, 1, 168, "target.c");
    __CrownLoad(461, (unsigned long )0, 5, (long long )0, (double )0);
    __CrownStore(462, (unsigned long )(& __retres9));
# 167 "target.c"
    __retres9 = 0;
# 167 "target.c"
    goto return_label;
  }
# 167 "target.c"
    else {
    __CrownBranch(460, 158, 0, 168, "target.c");

  }
  }
  __CrownLoad(463, (unsigned long )0, 6, (long long )((char * __restrict )"Node_13_522:%d\n"),
              8);
  __CrownLoad(467, (unsigned long )(& motorDir), 5, (long long )motorDir, (double )motorDir);
  __CrownLoad(466, (unsigned long )0, 5, (long long )-1, (double )-1);
  __CrownApply2(465, 13, 5, (long long )(motorDir == -1), (double )(motorDir == -1));
  __CrownApply1(464, 26, 5, (long long )(! (motorDir == -1)), (double )(! (motorDir == -1)));
  __CrownSetCallerCalleeName(468, "floorIsOrdered", "printf");
# 168 "target.c"
  printf((char * __restrict )"Node_13_522:%d\n", ! (motorDir == -1));
  __CrownEnableSymbolic(470, "floorIsOrdered");
  __CrownClearStack(469);
  __CrownLoad(471, (unsigned long )(& stdout), 6, (long long )stdout, 8);
  __CrownSetCallerCalleeName(472, "floorIsOrdered", "fflush");
# 168 "target.c"
  fflush(stdout);
  __CrownEnableSymbolic(474, "floorIsOrdered");
  __CrownClearStack(473);
  {
  __CrownLoad(478, (unsigned long )(& motorDir), 5, (long long )motorDir, (double )motorDir);
  __CrownLoad(477, (unsigned long )0, 5, (long long )-1, (double )-1);
  __CrownApply2(476, 13, 5, (long long )(motorDir == -1), (double )(motorDir == -1));
  __CrownApply1(475, 26, 5, (long long )(! (motorDir == -1)), (double )(! (motorDir == -1)));
# 169 "target.c"
  if (! (motorDir == -1)) {
    __CrownBranch(479, 161, 1, 170, "target.c");
# 169 "target.c"
    goto Node_13_556;
  }
# 169 "target.c"
    else {
    __CrownBranch(480, 162, 0, 170, "target.c");

  }
  }
  __CrownLoad(481, (unsigned long )0, 5, (long long )0, (double )0);
  __CrownStore(482, (unsigned long )(& floorBeyond));
# 170 "target.c"
  floorBeyond = 0;
  __CrownLoad(483, (unsigned long )0, 5, (long long )0, (double )0);
  __CrownStore(484, (unsigned long )(& floorIsOrdered__1__4__1__button));
# 172 "target.c"
  floorIsOrdered__1__4__1__button = 0;
  Node_13_527:
  __CrownLoad(487, (unsigned long )(& __iv__max_path), 5, (long long )__iv__max_path,
              (double )__iv__max_path);
  __CrownLoad(486, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(485, 0, 5, (long long )(__iv__max_path + 1), (double )(__iv__max_path + 1));
  __CrownStore(488, (unsigned long )(& __iv__max_path));
# 174 "target.c"
  __iv__max_path ++;
  {
  __CrownLoad(491, (unsigned long )(& __iv__max_path), 5, (long long )__iv__max_path,
              (double )__iv__max_path);
  __CrownLoad(490, (unsigned long )0, 5, (long long )10000, (double )10000);
  __CrownApply2(489, 22, 5, (long long )(__iv__max_path >= 10000), (double )(__iv__max_path >= 10000));
# 175 "target.c"
  if (__iv__max_path >= 10000) {
    __CrownBranch(492, 166, 1, 176, "target.c");
    __CrownLoad(494, (unsigned long )0, 5, (long long )0, (double )0);
    __CrownStore(495, (unsigned long )(& __retres9));
# 175 "target.c"
    __retres9 = 0;
# 175 "target.c"
    goto return_label;
  }
# 175 "target.c"
    else {
    __CrownBranch(493, 168, 0, 176, "target.c");

  }
  }
  __CrownLoad(496, (unsigned long )0, 6, (long long )((char * __restrict )"Node_13_527:%d\n"),
              8);
  __CrownLoad(499, (unsigned long )(& floorIsOrdered__1__4__1__button), 5, (long long )floorIsOrdered__1__4__1__button,
              (double )floorIsOrdered__1__4__1__button);
  __CrownLoad(498, (unsigned long )0, 5, (long long )2, (double )2);
  __CrownApply2(497, 22, 5, (long long )(floorIsOrdered__1__4__1__button >= 2), (double )(floorIsOrdered__1__4__1__button >= 2));
  __CrownSetCallerCalleeName(500, "floorIsOrdered", "printf");
# 176 "target.c"
  printf((char * __restrict )"Node_13_527:%d\n", floorIsOrdered__1__4__1__button >= 2);
  __CrownEnableSymbolic(502, "floorIsOrdered");
  __CrownClearStack(501);
  __CrownLoad(503, (unsigned long )(& stdout), 6, (long long )stdout, 8);
  __CrownSetCallerCalleeName(504, "floorIsOrdered", "fflush");
# 176 "target.c"
  fflush(stdout);
  __CrownEnableSymbolic(506, "floorIsOrdered");
  __CrownClearStack(505);
  {
  __CrownLoad(509, (unsigned long )(& floorIsOrdered__1__4__1__button), 5, (long long )floorIsOrdered__1__4__1__button,
              (double )floorIsOrdered__1__4__1__button);
  __CrownLoad(508, (unsigned long )0, 5, (long long )2, (double )2);
  __CrownApply2(507, 22, 5, (long long )(floorIsOrdered__1__4__1__button >= 2), (double )(floorIsOrdered__1__4__1__button >= 2));
# 177 "target.c"
  if (floorIsOrdered__1__4__1__button >= 2) {
    __CrownBranch(510, 171, 1, 178, "target.c");
# 177 "target.c"
    goto Node_13_539;
  }
# 177 "target.c"
    else {
    __CrownBranch(511, 172, 0, 178, "target.c");

  }
  }
  __CrownLoad(512, (unsigned long )0, 5, (long long )0, (double )0);
  __CrownStore(513, (unsigned long )(& floorIsOrdered__1__4__1__1__1__i));
# 179 "target.c"
  floorIsOrdered__1__4__1__1__1__i = 0;
  Node_13_531:
  __CrownLoad(516, (unsigned long )(& __iv__max_path), 5, (long long )__iv__max_path,
              (double )__iv__max_path);
  __CrownLoad(515, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(514, 0, 5, (long long )(__iv__max_path + 1), (double )(__iv__max_path + 1));
  __CrownStore(517, (unsigned long )(& __iv__max_path));
# 181 "target.c"
  __iv__max_path ++;
  {
  __CrownLoad(520, (unsigned long )(& __iv__max_path), 5, (long long )__iv__max_path,
              (double )__iv__max_path);
  __CrownLoad(519, (unsigned long )0, 5, (long long )10000, (double )10000);
  __CrownApply2(518, 22, 5, (long long )(__iv__max_path >= 10000), (double )(__iv__max_path >= 10000));
# 182 "target.c"
  if (__iv__max_path >= 10000) {
    __CrownBranch(521, 176, 1, 183, "target.c");
    __CrownLoad(523, (unsigned long )0, 5, (long long )0, (double )0);
    __CrownStore(524, (unsigned long )(& __retres9));
# 182 "target.c"
    __retres9 = 0;
# 182 "target.c"
    goto return_label;
  }
# 182 "target.c"
    else {
    __CrownBranch(522, 178, 0, 183, "target.c");

  }
  }
  __CrownLoad(525, (unsigned long )0, 6, (long long )((char * __restrict )"Node_13_531:%d\n"),
              8);
  __CrownLoad(528, (unsigned long )(& floorIsOrdered__1__4__1__1__1__i), 5, (long long )floorIsOrdered__1__4__1__1__1__i,
              (double )floorIsOrdered__1__4__1__1__1__i);
  __CrownLoad(527, (unsigned long )(& floorNum), 5, (long long )floorNum, (double )floorNum);
  __CrownApply2(526, 22, 5, (long long )(floorIsOrdered__1__4__1__1__1__i >= floorNum),
                (double )(floorIsOrdered__1__4__1__1__1__i >= floorNum));
  __CrownSetCallerCalleeName(529, "floorIsOrdered", "printf");
# 183 "target.c"
  printf((char * __restrict )"Node_13_531:%d\n", floorIsOrdered__1__4__1__1__1__i >= floorNum);
  __CrownEnableSymbolic(531, "floorIsOrdered");
  __CrownClearStack(530);
  __CrownLoad(532, (unsigned long )(& stdout), 6, (long long )stdout, 8);
  __CrownSetCallerCalleeName(533, "floorIsOrdered", "fflush");
# 183 "target.c"
  fflush(stdout);
  __CrownEnableSymbolic(535, "floorIsOrdered");
  __CrownClearStack(534);
  {
  __CrownLoad(538, (unsigned long )(& floorIsOrdered__1__4__1__1__1__i), 5, (long long )floorIsOrdered__1__4__1__1__1__i,
              (double )floorIsOrdered__1__4__1__1__1__i);
  __CrownLoad(537, (unsigned long )(& floorNum), 5, (long long )floorNum, (double )floorNum);
  __CrownApply2(536, 22, 5, (long long )(floorIsOrdered__1__4__1__1__1__i >= floorNum),
                (double )(floorIsOrdered__1__4__1__1__1__i >= floorNum));
# 184 "target.c"
  if (floorIsOrdered__1__4__1__1__1__i >= floorNum) {
    __CrownBranch(539, 181, 1, 185, "target.c");
# 184 "target.c"
    goto Node_13_535;
  }
# 184 "target.c"
    else {
    __CrownBranch(540, 182, 0, 185, "target.c");

  }
  }
  {
  __CrownLoad(544, (unsigned long )0, 7, (long long )0L, (double )0L);
  __CrownLoad(543, (unsigned long )(& floorIsOrdered__1__4__1__button), 5, (long long )floorIsOrdered__1__4__1__button,
              (double )floorIsOrdered__1__4__1__button);
  __CrownApply1(542, 28, 7, (long long )((long )floorIsOrdered__1__4__1__button),
                (double )((long )floorIsOrdered__1__4__1__button));
  __CrownApply2(541, 16, 5, (long long )(0L > (long )floorIsOrdered__1__4__1__button),
                (double )(0L > (long )floorIsOrdered__1__4__1__button));
# 185 "target.c"
  if (0L > (long )floorIsOrdered__1__4__1__button) {
    __CrownBranch(545, 184, 1, 186, "target.c");
    __CrownLoad(547, (unsigned long )0, 5, (long long )10000, (double )10000);
    __CrownStore(548, (unsigned long )(& __iv__max_path));
# 185 "target.c"
    __iv__max_path = 10000;
  }
# 185 "target.c"
    else {
    __CrownBranch(546, 185, 0, 186, "target.c");
    {
    __CrownLoad(552, (unsigned long )(& floorIsOrdered__1__4__1__button), 5, (long long )floorIsOrdered__1__4__1__button,
                (double )floorIsOrdered__1__4__1__button);
    __CrownApply1(551, 28, 7, (long long )((long )floorIsOrdered__1__4__1__button),
                  (double )((long )floorIsOrdered__1__4__1__button));
    __CrownLoad(550, (unsigned long )0, 7, (long long )3L, (double )3L);
    __CrownApply2(549, 22, 5, (long long )((long )floorIsOrdered__1__4__1__button >= 3L),
                  (double )((long )floorIsOrdered__1__4__1__button >= 3L));
# 185 "target.c"
    if ((long )floorIsOrdered__1__4__1__button >= 3L) {
      __CrownBranch(553, 186, 1, 186, "target.c");
      __CrownLoad(555, (unsigned long )0, 5, (long long )10000, (double )10000);
      __CrownStore(556, (unsigned long )(& __iv__max_path));
# 185 "target.c"
      __iv__max_path = 10000;
    }
# 185 "target.c"
      else {
      __CrownBranch(554, 187, 0, 186, "target.c");

    }
    }
  }
  }
  {
  __CrownLoad(560, (unsigned long )0, 7, (long long )0L, (double )0L);
  __CrownLoad(559, (unsigned long )(& floorIsOrdered__1__4__1__1__1__i), 5, (long long )floorIsOrdered__1__4__1__1__1__i,
              (double )floorIsOrdered__1__4__1__1__1__i);
  __CrownApply1(558, 28, 7, (long long )((long )floorIsOrdered__1__4__1__1__1__i),
                (double )((long )floorIsOrdered__1__4__1__1__1__i));
  __CrownApply2(557, 16, 5, (long long )(0L > (long )floorIsOrdered__1__4__1__1__1__i),
                (double )(0L > (long )floorIsOrdered__1__4__1__1__1__i));
# 186 "target.c"
  if (0L > (long )floorIsOrdered__1__4__1__1__1__i) {
    __CrownBranch(561, 189, 1, 187, "target.c");
    __CrownLoad(563, (unsigned long )0, 5, (long long )10000, (double )10000);
    __CrownStore(564, (unsigned long )(& __iv__max_path));
# 186 "target.c"
    __iv__max_path = 10000;
  }
# 186 "target.c"
    else {
    __CrownBranch(562, 190, 0, 187, "target.c");
    {
    __CrownLoad(568, (unsigned long )(& floorIsOrdered__1__4__1__1__1__i), 5, (long long )floorIsOrdered__1__4__1__1__1__i,
                (double )floorIsOrdered__1__4__1__1__1__i);
    __CrownApply1(567, 28, 7, (long long )((long )floorIsOrdered__1__4__1__1__1__i),
                  (double )((long )floorIsOrdered__1__4__1__1__1__i));
    __CrownLoad(566, (unsigned long )0, 7, (long long )4L, (double )4L);
    __CrownApply2(565, 22, 5, (long long )((long )floorIsOrdered__1__4__1__1__1__i >= 4L),
                  (double )((long )floorIsOrdered__1__4__1__1__1__i >= 4L));
# 186 "target.c"
    if ((long )floorIsOrdered__1__4__1__1__1__i >= 4L) {
      __CrownBranch(569, 191, 1, 187, "target.c");
      __CrownLoad(571, (unsigned long )0, 5, (long long )10000, (double )10000);
      __CrownStore(572, (unsigned long )(& __iv__max_path));
# 186 "target.c"
      __iv__max_path = 10000;
    }
# 186 "target.c"
      else {
      __CrownBranch(570, 192, 0, 187, "target.c");

    }
    }
  }
  }
  {
  __CrownLoad(576, (unsigned long )0, 7, (long long )0L, (double )0L);
  __CrownLoad(575, (unsigned long )(& floorIsOrdered__1__4__1__button), 5, (long long )floorIsOrdered__1__4__1__button,
              (double )floorIsOrdered__1__4__1__button);
  __CrownApply1(574, 28, 7, (long long )((long )floorIsOrdered__1__4__1__button),
                (double )((long )floorIsOrdered__1__4__1__button));
  __CrownApply2(573, 16, 5, (long long )(0L > (long )floorIsOrdered__1__4__1__button),
                (double )(0L > (long )floorIsOrdered__1__4__1__button));
# 187 "target.c"
  if (0L > (long )floorIsOrdered__1__4__1__button) {
    __CrownBranch(577, 194, 1, 188, "target.c");
    __CrownLoad(579, (unsigned long )0, 5, (long long )10000, (double )10000);
    __CrownStore(580, (unsigned long )(& __iv__max_path));
# 187 "target.c"
    __iv__max_path = 10000;
  }
# 187 "target.c"
    else {
    __CrownBranch(578, 195, 0, 188, "target.c");
    {
    __CrownLoad(584, (unsigned long )(& floorIsOrdered__1__4__1__button), 5, (long long )floorIsOrdered__1__4__1__button,
                (double )floorIsOrdered__1__4__1__button);
    __CrownApply1(583, 28, 7, (long long )((long )floorIsOrdered__1__4__1__button),
                  (double )((long )floorIsOrdered__1__4__1__button));
    __CrownLoad(582, (unsigned long )0, 7, (long long )3L, (double )3L);
    __CrownApply2(581, 22, 5, (long long )((long )floorIsOrdered__1__4__1__button >= 3L),
                  (double )((long )floorIsOrdered__1__4__1__button >= 3L));
# 187 "target.c"
    if ((long )floorIsOrdered__1__4__1__button >= 3L) {
      __CrownBranch(585, 196, 1, 188, "target.c");
      __CrownLoad(587, (unsigned long )0, 5, (long long )10000, (double )10000);
      __CrownStore(588, (unsigned long )(& __iv__max_path));
# 187 "target.c"
      __iv__max_path = 10000;
    }
# 187 "target.c"
      else {
      __CrownBranch(586, 197, 0, 188, "target.c");

    }
    }
  }
  }
  __CrownLoad(591, (unsigned long )(& floorBeyond), 5, (long long )floorBeyond, (double )floorBeyond);
  __CrownLoad(590, (unsigned long )(& orderMatrix[(long )floorIsOrdered__1__4__1__button][(long )floorIsOrdered__1__4__1__1__1__i]),
              5, (long long )orderMatrix[(long )floorIsOrdered__1__4__1__button][(long )floorIsOrdered__1__4__1__1__1__i],
              (double )orderMatrix[(long )floorIsOrdered__1__4__1__button][(long )floorIsOrdered__1__4__1__1__1__i]);
  __CrownApply2(589, 0, 5, (long long )(floorBeyond + orderMatrix[(long )floorIsOrdered__1__4__1__button][(long )floorIsOrdered__1__4__1__1__1__i]),
                (double )(floorBeyond + orderMatrix[(long )floorIsOrdered__1__4__1__button][(long )floorIsOrdered__1__4__1__1__1__i]));
  __CrownStore(592, (unsigned long )(& floorBeyond));
# 188 "target.c"
  floorBeyond += orderMatrix[(long )floorIsOrdered__1__4__1__button][(long )floorIsOrdered__1__4__1__1__1__i];
  __CrownLoad(595, (unsigned long )(& floorIsOrdered__1__4__1__1__1__i), 5, (long long )floorIsOrdered__1__4__1__1__1__i,
              (double )floorIsOrdered__1__4__1__1__1__i);
  __CrownLoad(594, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(593, 0, 5, (long long )(floorIsOrdered__1__4__1__1__1__i + 1), (double )(floorIsOrdered__1__4__1__1__1__i + 1));
  __CrownStore(596, (unsigned long )(& floorIsOrdered__1__4__1__1__1__i));
# 189 "target.c"
  floorIsOrdered__1__4__1__1__1__i ++;
# 190 "target.c"
  goto Node_13_531;
  Node_13_535:
  __CrownLoad(599, (unsigned long )(& floorIsOrdered__1__4__1__button), 5, (long long )floorIsOrdered__1__4__1__button,
              (double )floorIsOrdered__1__4__1__button);
  __CrownLoad(598, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(597, 0, 5, (long long )(floorIsOrdered__1__4__1__button + 1), (double )(floorIsOrdered__1__4__1__button + 1));
  __CrownStore(600, (unsigned long )(& floorIsOrdered__1__4__1__button));
# 192 "target.c"
  floorIsOrdered__1__4__1__button ++;
# 193 "target.c"
  goto Node_13_527;
  Node_13_539:
  __CrownLoad(603, (unsigned long )(& __iv__max_path), 5, (long long )__iv__max_path,
              (double )__iv__max_path);
  __CrownLoad(602, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(601, 0, 5, (long long )(__iv__max_path + 1), (double )(__iv__max_path + 1));
  __CrownStore(604, (unsigned long )(& __iv__max_path));
# 195 "target.c"
  __iv__max_path ++;
  {
  __CrownLoad(607, (unsigned long )(& __iv__max_path), 5, (long long )__iv__max_path,
              (double )__iv__max_path);
  __CrownLoad(606, (unsigned long )0, 5, (long long )10000, (double )10000);
  __CrownApply2(605, 22, 5, (long long )(__iv__max_path >= 10000), (double )(__iv__max_path >= 10000));
# 196 "target.c"
  if (__iv__max_path >= 10000) {
    __CrownBranch(608, 204, 1, 197, "target.c");
    __CrownLoad(610, (unsigned long )0, 5, (long long )0, (double )0);
    __CrownStore(611, (unsigned long )(& __retres9));
# 196 "target.c"
    __retres9 = 0;
# 196 "target.c"
    goto return_label;
  }
# 196 "target.c"
    else {
    __CrownBranch(609, 206, 0, 197, "target.c");

  }
  }
  __CrownLoad(612, (unsigned long )0, 6, (long long )((char * __restrict )"Node_13_540:%d\n"),
              8);
  __CrownLoad(616, (unsigned long )(& orderMatrix[1][(long )floorNum]), 5, (long long )orderMatrix[1][(long )floorNum],
              (double )orderMatrix[1][(long )floorNum]);
  __CrownLoad(615, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(614, 13, 5, (long long )(orderMatrix[1][(long )floorNum] == 1), (double )(orderMatrix[1][(long )floorNum] == 1));
  __CrownApply1(613, 26, 5, (long long )(! (orderMatrix[1][(long )floorNum] == 1)),
                (double )(! (orderMatrix[1][(long )floorNum] == 1)));
  __CrownSetCallerCalleeName(617, "floorIsOrdered", "printf");
# 197 "target.c"
  printf((char * __restrict )"Node_13_540:%d\n", ! (orderMatrix[1][(long )floorNum] == 1));
  __CrownEnableSymbolic(619, "floorIsOrdered");
  __CrownClearStack(618);
  __CrownLoad(620, (unsigned long )(& stdout), 6, (long long )stdout, 8);
  __CrownSetCallerCalleeName(621, "floorIsOrdered", "fflush");
# 197 "target.c"
  fflush(stdout);
  __CrownEnableSymbolic(623, "floorIsOrdered");
  __CrownClearStack(622);
  {
  __CrownLoad(627, (unsigned long )0, 7, (long long )0L, (double )0L);
  __CrownLoad(626, (unsigned long )(& floorNum), 5, (long long )floorNum, (double )floorNum);
  __CrownApply1(625, 28, 7, (long long )((long )floorNum), (double )((long )floorNum));
  __CrownApply2(624, 16, 5, (long long )(0L > (long )floorNum), (double )(0L > (long )floorNum));
# 198 "target.c"
  if (0L > (long )floorNum) {
    __CrownBranch(628, 209, 1, 199, "target.c");
    __CrownLoad(630, (unsigned long )0, 5, (long long )10000, (double )10000);
    __CrownStore(631, (unsigned long )(& __iv__max_path));
# 198 "target.c"
    __iv__max_path = 10000;
  }
# 198 "target.c"
    else {
    __CrownBranch(629, 210, 0, 199, "target.c");
    {
    __CrownLoad(635, (unsigned long )(& floorNum), 5, (long long )floorNum, (double )floorNum);
    __CrownApply1(634, 28, 7, (long long )((long )floorNum), (double )((long )floorNum));
    __CrownLoad(633, (unsigned long )0, 7, (long long )4L, (double )4L);
    __CrownApply2(632, 22, 5, (long long )((long )floorNum >= 4L), (double )((long )floorNum >= 4L));
# 198 "target.c"
    if ((long )floorNum >= 4L) {
      __CrownBranch(636, 211, 1, 199, "target.c");
      __CrownLoad(638, (unsigned long )0, 5, (long long )10000, (double )10000);
      __CrownStore(639, (unsigned long )(& __iv__max_path));
# 198 "target.c"
      __iv__max_path = 10000;
    }
# 198 "target.c"
      else {
      __CrownBranch(637, 212, 0, 199, "target.c");

    }
    }
  }
  }
  {
  __CrownLoad(643, (unsigned long )(& orderMatrix[1][(long )floorNum]), 5, (long long )orderMatrix[1][(long )floorNum],
              (double )orderMatrix[1][(long )floorNum]);
  __CrownLoad(642, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(641, 13, 5, (long long )(orderMatrix[1][(long )floorNum] == 1), (double )(orderMatrix[1][(long )floorNum] == 1));
  __CrownApply1(640, 26, 5, (long long )(! (orderMatrix[1][(long )floorNum] == 1)),
                (double )(! (orderMatrix[1][(long )floorNum] == 1)));
# 199 "target.c"
  if (! (orderMatrix[1][(long )floorNum] == 1)) {
    __CrownBranch(644, 214, 1, 200, "target.c");
# 199 "target.c"
    goto Node_13_546;
  }
# 199 "target.c"
    else {
    __CrownBranch(645, 215, 0, 200, "target.c");

  }
  }
  __CrownLoad(646, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownStore(647, (unsigned long )(& __retres9));
# 200 "target.c"
  __retres9 = 1;
# 200 "target.c"
  goto return_label;
  Node_13_546:
  __CrownLoad(650, (unsigned long )(& __iv__max_path), 5, (long long )__iv__max_path,
              (double )__iv__max_path);
  __CrownLoad(649, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(648, 0, 5, (long long )(__iv__max_path + 1), (double )(__iv__max_path + 1));
  __CrownStore(651, (unsigned long )(& __iv__max_path));
# 202 "target.c"
  __iv__max_path ++;
  {
  __CrownLoad(654, (unsigned long )(& __iv__max_path), 5, (long long )__iv__max_path,
              (double )__iv__max_path);
  __CrownLoad(653, (unsigned long )0, 5, (long long )10000, (double )10000);
  __CrownApply2(652, 22, 5, (long long )(__iv__max_path >= 10000), (double )(__iv__max_path >= 10000));
# 203 "target.c"
  if (__iv__max_path >= 10000) {
    __CrownBranch(655, 220, 1, 204, "target.c");
    __CrownLoad(657, (unsigned long )0, 5, (long long )0, (double )0);
    __CrownStore(658, (unsigned long )(& __retres9));
# 203 "target.c"
    __retres9 = 0;
# 203 "target.c"
    goto return_label;
  }
# 203 "target.c"
    else {
    __CrownBranch(656, 222, 0, 204, "target.c");

  }
  }
  __CrownLoad(659, (unsigned long )0, 6, (long long )((char * __restrict )"Node_13_546:%d\n"),
              8);
  __CrownLoad(662, (unsigned long )(& orderMatrix[0][(long )floorNum]), 5, (long long )orderMatrix[0][(long )floorNum],
              (double )orderMatrix[0][(long )floorNum]);
  __CrownLoad(661, (unsigned long )0, 5, (long long )0, (double )0);
  __CrownApply2(660, 13, 5, (long long )(orderMatrix[0][(long )floorNum] == 0), (double )(orderMatrix[0][(long )floorNum] == 0));
  __CrownSetCallerCalleeName(663, "floorIsOrdered", "printf");
# 204 "target.c"
  printf((char * __restrict )"Node_13_546:%d\n", orderMatrix[0][(long )floorNum] == 0);
  __CrownEnableSymbolic(665, "floorIsOrdered");
  __CrownClearStack(664);
  __CrownLoad(666, (unsigned long )(& stdout), 6, (long long )stdout, 8);
  __CrownSetCallerCalleeName(667, "floorIsOrdered", "fflush");
# 204 "target.c"
  fflush(stdout);
  __CrownEnableSymbolic(669, "floorIsOrdered");
  __CrownClearStack(668);
  {
  __CrownLoad(673, (unsigned long )0, 7, (long long )0L, (double )0L);
  __CrownLoad(672, (unsigned long )(& floorNum), 5, (long long )floorNum, (double )floorNum);
  __CrownApply1(671, 28, 7, (long long )((long )floorNum), (double )((long )floorNum));
  __CrownApply2(670, 16, 5, (long long )(0L > (long )floorNum), (double )(0L > (long )floorNum));
# 205 "target.c"
  if (0L > (long )floorNum) {
    __CrownBranch(674, 225, 1, 206, "target.c");
    __CrownLoad(676, (unsigned long )0, 5, (long long )10000, (double )10000);
    __CrownStore(677, (unsigned long )(& __iv__max_path));
# 205 "target.c"
    __iv__max_path = 10000;
  }
# 205 "target.c"
    else {
    __CrownBranch(675, 226, 0, 206, "target.c");
    {
    __CrownLoad(681, (unsigned long )(& floorNum), 5, (long long )floorNum, (double )floorNum);
    __CrownApply1(680, 28, 7, (long long )((long )floorNum), (double )((long )floorNum));
    __CrownLoad(679, (unsigned long )0, 7, (long long )4L, (double )4L);
    __CrownApply2(678, 22, 5, (long long )((long )floorNum >= 4L), (double )((long )floorNum >= 4L));
# 205 "target.c"
    if ((long )floorNum >= 4L) {
      __CrownBranch(682, 227, 1, 206, "target.c");
      __CrownLoad(684, (unsigned long )0, 5, (long long )10000, (double )10000);
      __CrownStore(685, (unsigned long )(& __iv__max_path));
# 205 "target.c"
      __iv__max_path = 10000;
    }
# 205 "target.c"
      else {
      __CrownBranch(683, 228, 0, 206, "target.c");

    }
    }
  }
  }
  {
  __CrownLoad(688, (unsigned long )(& orderMatrix[0][(long )floorNum]), 5, (long long )orderMatrix[0][(long )floorNum],
              (double )orderMatrix[0][(long )floorNum]);
  __CrownLoad(687, (unsigned long )0, 5, (long long )0, (double )0);
  __CrownApply2(686, 13, 5, (long long )(orderMatrix[0][(long )floorNum] == 0), (double )(orderMatrix[0][(long )floorNum] == 0));
# 206 "target.c"
  if (orderMatrix[0][(long )floorNum] == 0) {
    __CrownBranch(689, 230, 1, 207, "target.c");
# 206 "target.c"
    goto Node_13_553;
  }
# 206 "target.c"
    else {
    __CrownBranch(690, 231, 0, 207, "target.c");

  }
  }
  __CrownLoad(693, (unsigned long )(& __iv__max_path), 5, (long long )__iv__max_path,
              (double )__iv__max_path);
  __CrownLoad(692, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(691, 0, 5, (long long )(__iv__max_path + 1), (double )(__iv__max_path + 1));
  __CrownStore(694, (unsigned long )(& __iv__max_path));
# 207 "target.c"
  __iv__max_path ++;
  {
  __CrownLoad(697, (unsigned long )(& __iv__max_path), 5, (long long )__iv__max_path,
              (double )__iv__max_path);
  __CrownLoad(696, (unsigned long )0, 5, (long long )10000, (double )10000);
  __CrownApply2(695, 22, 5, (long long )(__iv__max_path >= 10000), (double )(__iv__max_path >= 10000));
# 208 "target.c"
  if (__iv__max_path >= 10000) {
    __CrownBranch(698, 234, 1, 209, "target.c");
    __CrownLoad(700, (unsigned long )0, 5, (long long )0, (double )0);
    __CrownStore(701, (unsigned long )(& __retres9));
# 208 "target.c"
    __retres9 = 0;
# 208 "target.c"
    goto return_label;
  }
# 208 "target.c"
    else {
    __CrownBranch(699, 236, 0, 209, "target.c");

  }
  }
  __CrownLoad(702, (unsigned long )0, 6, (long long )((char * __restrict )"Node_13_547:%d\n"),
              8);
  __CrownLoad(706, (unsigned long )(& floorBeyond), 5, (long long )floorBeyond, (double )floorBeyond);
  __CrownLoad(705, (unsigned long )0, 5, (long long )0, (double )0);
  __CrownApply2(704, 13, 5, (long long )(floorBeyond == 0), (double )(floorBeyond == 0));
  __CrownApply1(703, 26, 5, (long long )(! (floorBeyond == 0)), (double )(! (floorBeyond == 0)));
  __CrownSetCallerCalleeName(707, "floorIsOrdered", "printf");
# 209 "target.c"
  printf((char * __restrict )"Node_13_547:%d\n", ! (floorBeyond == 0));
  __CrownEnableSymbolic(709, "floorIsOrdered");
  __CrownClearStack(708);
  __CrownLoad(710, (unsigned long )(& stdout), 6, (long long )stdout, 8);
  __CrownSetCallerCalleeName(711, "floorIsOrdered", "fflush");
# 209 "target.c"
  fflush(stdout);
  __CrownEnableSymbolic(713, "floorIsOrdered");
  __CrownClearStack(712);
  {
  __CrownLoad(717, (unsigned long )(& floorBeyond), 5, (long long )floorBeyond, (double )floorBeyond);
  __CrownLoad(716, (unsigned long )0, 5, (long long )0, (double )0);
  __CrownApply2(715, 13, 5, (long long )(floorBeyond == 0), (double )(floorBeyond == 0));
  __CrownApply1(714, 26, 5, (long long )(! (floorBeyond == 0)), (double )(! (floorBeyond == 0)));
# 210 "target.c"
  if (! (floorBeyond == 0)) {
    __CrownBranch(718, 239, 1, 211, "target.c");
# 210 "target.c"
    goto Node_13_552;
  }
# 210 "target.c"
    else {
    __CrownBranch(719, 240, 0, 211, "target.c");

  }
  }
  __CrownLoad(720, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownStore(721, (unsigned long )(& __retres9));
# 211 "target.c"
  __retres9 = 1;
# 211 "target.c"
  goto return_label;
  Node_13_552: ;
  Node_13_553: ;
  Node_13_556: ;
  __CrownLoad(722, (unsigned long )0, 5, (long long )0, (double )0);
  __CrownStore(723, (unsigned long )(& __retres9));
# 215 "target.c"
  __retres9 = 0;
  return_label:
  {
  __CrownLoad(724, (unsigned long )(& __retres9), 5, (long long )__retres9, (double )__retres9);
  __CrownReturn(725);
# 85 "target.c"
  return (__retres9);
  }
}
}
# 222 "target.c"
int main(void) ;
# 222 "target.c"
static int cnt_symbolic_var = 1;
# 223 "target.c"
int main(void) ;
# 223 "target.c"
static int cnt_symbolic_var___0 = 1;
# 224 "target.c"
int main(void) ;
# 224 "target.c"
static int cnt_symbolic_var___1 = 1;
# 225 "target.c"
int main(void) ;
# 225 "target.c"
static int cnt_symbolic_var___2 = 1;
# 226 "target.c"
int main(void) ;
# 226 "target.c"
static int cnt_symbolic_var___3 = 1;
# 227 "target.c"
int main(void) ;
# 227 "target.c"
static int cnt_symbolic_var___4 = 1;
# 228 "target.c"
int main(void) ;
# 228 "target.c"
static int cnt_symbolic_var___5 = 1;
# 229 "target.c"
int main(void) ;
# 229 "target.c"
static int cnt_symbolic_var___6 = 1;
# 230 "target.c"
int main(void) ;
# 230 "target.c"
static int cnt_symbolic_var___7 = 1;
# 231 "target.c"
int main(void) ;
# 231 "target.c"
static int cnt_symbolic_var___8 = 1;
# 232 "target.c"
int main(void) ;
# 232 "target.c"
static int cnt_symbolic_var___9 = 1;
# 233 "target.c"
int main(void) ;
# 233 "target.c"
static int cnt_symbolic_var___10 = 1;
# 234 "target.c"
int main(void) ;
# 234 "target.c"
static int cnt_symbolic_var___11 = 1;
# 235 "target.c"
int main(void) ;
# 235 "target.c"
static int cnt_symbolic_var___12 = 1;
# 217 "target.c"
int main(void)
{
  int floorNum ;
  int motorDir ;
  int __iv__return_expr_floorIsOrdered ;
  FILE *f ;
  FILE *tmp ;
  int __retres6 ;

  {
  __globinit_target();
  __CrownCheckSymbolic(728, "main");
  __CrownCall(727, 2);
  __CrownClearStack(726);
  __CrownLoad(729, (unsigned long )0, 6, (long long )((char * __restrict )"input:\n"),
              8);
  __CrownSetCallerCalleeName(730, "main", "printf");
# 221 "target.c"
  printf((char * __restrict )"input:\n");
  __CrownEnableSymbolic(732, "main");
  __CrownClearStack(731);
  __CrownLoad(733, (unsigned long )(& stdout), 6, (long long )stdout, 8);
  __CrownSetCallerCalleeName(734, "main", "fflush");
# 221 "target.c"
  fflush(stdout);
  __CrownEnableSymbolic(736, "main");
  __CrownClearStack(735);
# 222 "target.c"
  __CrownInt(& orderMatrix[1][3], cnt_symbolic_var, 222, (char *)"target.c", "orderMatrix[1][3]");
  __CrownLoad(739, (unsigned long )(& cnt_symbolic_var), 5, (long long )cnt_symbolic_var,
              (double )cnt_symbolic_var);
  __CrownLoad(738, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(737, 0, 5, (long long )(cnt_symbolic_var + 1), (double )(cnt_symbolic_var + 1));
  __CrownStore(740, (unsigned long )(& cnt_symbolic_var));
# 222 "target.c"
  cnt_symbolic_var ++;
  __CrownLoad(741, (unsigned long )0, 6, (long long )((char * __restrict )"orderMatrix[1][3]=%d\n"),
              8);
  __CrownLoad(742, (unsigned long )(& orderMatrix[1][3]), 5, (long long )orderMatrix[1][3],
              (double )orderMatrix[1][3]);
  __CrownSetCallerCalleeName(743, "main", "printf");
# 222 "target.c"
  printf((char * __restrict )"orderMatrix[1][3]=%d\n", orderMatrix[1][3]);
  __CrownEnableSymbolic(745, "main");
  __CrownClearStack(744);
  __CrownLoad(746, (unsigned long )(& stdout), 6, (long long )stdout, 8);
  __CrownSetCallerCalleeName(747, "main", "fflush");
# 222 "target.c"
  fflush(stdout);
  __CrownEnableSymbolic(749, "main");
  __CrownClearStack(748);
# 223 "target.c"
  __CrownInt(& orderMatrix[2][0], cnt_symbolic_var___0, 223, (char *)"target.c", "orderMatrix[2][0]");
  __CrownLoad(752, (unsigned long )(& cnt_symbolic_var___0), 5, (long long )cnt_symbolic_var___0,
              (double )cnt_symbolic_var___0);
  __CrownLoad(751, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(750, 0, 5, (long long )(cnt_symbolic_var___0 + 1), (double )(cnt_symbolic_var___0 + 1));
  __CrownStore(753, (unsigned long )(& cnt_symbolic_var___0));
# 223 "target.c"
  cnt_symbolic_var___0 ++;
  __CrownLoad(754, (unsigned long )0, 6, (long long )((char * __restrict )"orderMatrix[2][0]=%d\n"),
              8);
  __CrownLoad(755, (unsigned long )(& orderMatrix[2][0]), 5, (long long )orderMatrix[2][0],
              (double )orderMatrix[2][0]);
  __CrownSetCallerCalleeName(756, "main", "printf");
# 223 "target.c"
  printf((char * __restrict )"orderMatrix[2][0]=%d\n", orderMatrix[2][0]);
  __CrownEnableSymbolic(758, "main");
  __CrownClearStack(757);
  __CrownLoad(759, (unsigned long )(& stdout), 6, (long long )stdout, 8);
  __CrownSetCallerCalleeName(760, "main", "fflush");
# 223 "target.c"
  fflush(stdout);
  __CrownEnableSymbolic(762, "main");
  __CrownClearStack(761);
# 224 "target.c"
  __CrownInt(& orderMatrix[2][1], cnt_symbolic_var___1, 224, (char *)"target.c", "orderMatrix[2][1]");
  __CrownLoad(765, (unsigned long )(& cnt_symbolic_var___1), 5, (long long )cnt_symbolic_var___1,
              (double )cnt_symbolic_var___1);
  __CrownLoad(764, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(763, 0, 5, (long long )(cnt_symbolic_var___1 + 1), (double )(cnt_symbolic_var___1 + 1));
  __CrownStore(766, (unsigned long )(& cnt_symbolic_var___1));
# 224 "target.c"
  cnt_symbolic_var___1 ++;
  __CrownLoad(767, (unsigned long )0, 6, (long long )((char * __restrict )"orderMatrix[2][1]=%d\n"),
              8);
  __CrownLoad(768, (unsigned long )(& orderMatrix[2][1]), 5, (long long )orderMatrix[2][1],
              (double )orderMatrix[2][1]);
  __CrownSetCallerCalleeName(769, "main", "printf");
# 224 "target.c"
  printf((char * __restrict )"orderMatrix[2][1]=%d\n", orderMatrix[2][1]);
  __CrownEnableSymbolic(771, "main");
  __CrownClearStack(770);
  __CrownLoad(772, (unsigned long )(& stdout), 6, (long long )stdout, 8);
  __CrownSetCallerCalleeName(773, "main", "fflush");
# 224 "target.c"
  fflush(stdout);
  __CrownEnableSymbolic(775, "main");
  __CrownClearStack(774);
# 225 "target.c"
  __CrownInt(& orderMatrix[2][2], cnt_symbolic_var___2, 225, (char *)"target.c", "orderMatrix[2][2]");
  __CrownLoad(778, (unsigned long )(& cnt_symbolic_var___2), 5, (long long )cnt_symbolic_var___2,
              (double )cnt_symbolic_var___2);
  __CrownLoad(777, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(776, 0, 5, (long long )(cnt_symbolic_var___2 + 1), (double )(cnt_symbolic_var___2 + 1));
  __CrownStore(779, (unsigned long )(& cnt_symbolic_var___2));
# 225 "target.c"
  cnt_symbolic_var___2 ++;
  __CrownLoad(780, (unsigned long )0, 6, (long long )((char * __restrict )"orderMatrix[2][2]=%d\n"),
              8);
  __CrownLoad(781, (unsigned long )(& orderMatrix[2][2]), 5, (long long )orderMatrix[2][2],
              (double )orderMatrix[2][2]);
  __CrownSetCallerCalleeName(782, "main", "printf");
# 225 "target.c"
  printf((char * __restrict )"orderMatrix[2][2]=%d\n", orderMatrix[2][2]);
  __CrownEnableSymbolic(784, "main");
  __CrownClearStack(783);
  __CrownLoad(785, (unsigned long )(& stdout), 6, (long long )stdout, 8);
  __CrownSetCallerCalleeName(786, "main", "fflush");
# 225 "target.c"
  fflush(stdout);
  __CrownEnableSymbolic(788, "main");
  __CrownClearStack(787);
# 226 "target.c"
  __CrownInt(& orderMatrix[2][3], cnt_symbolic_var___3, 226, (char *)"target.c", "orderMatrix[2][3]");
  __CrownLoad(791, (unsigned long )(& cnt_symbolic_var___3), 5, (long long )cnt_symbolic_var___3,
              (double )cnt_symbolic_var___3);
  __CrownLoad(790, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(789, 0, 5, (long long )(cnt_symbolic_var___3 + 1), (double )(cnt_symbolic_var___3 + 1));
  __CrownStore(792, (unsigned long )(& cnt_symbolic_var___3));
# 226 "target.c"
  cnt_symbolic_var___3 ++;
  __CrownLoad(793, (unsigned long )0, 6, (long long )((char * __restrict )"orderMatrix[2][3]=%d\n"),
              8);
  __CrownLoad(794, (unsigned long )(& orderMatrix[2][3]), 5, (long long )orderMatrix[2][3],
              (double )orderMatrix[2][3]);
  __CrownSetCallerCalleeName(795, "main", "printf");
# 226 "target.c"
  printf((char * __restrict )"orderMatrix[2][3]=%d\n", orderMatrix[2][3]);
  __CrownEnableSymbolic(797, "main");
  __CrownClearStack(796);
  __CrownLoad(798, (unsigned long )(& stdout), 6, (long long )stdout, 8);
  __CrownSetCallerCalleeName(799, "main", "fflush");
# 226 "target.c"
  fflush(stdout);
  __CrownEnableSymbolic(801, "main");
  __CrownClearStack(800);
# 227 "target.c"
  __CrownInt(& floorNum, cnt_symbolic_var___4, 227, (char *)"target.c", "floorNum");
  __CrownLoad(804, (unsigned long )(& cnt_symbolic_var___4), 5, (long long )cnt_symbolic_var___4,
              (double )cnt_symbolic_var___4);
  __CrownLoad(803, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(802, 0, 5, (long long )(cnt_symbolic_var___4 + 1), (double )(cnt_symbolic_var___4 + 1));
  __CrownStore(805, (unsigned long )(& cnt_symbolic_var___4));
# 227 "target.c"
  cnt_symbolic_var___4 ++;
  __CrownLoad(806, (unsigned long )0, 6, (long long )((char * __restrict )"floorNum=%d\n"),
              8);
  __CrownLoad(807, (unsigned long )(& floorNum), 5, (long long )floorNum, (double )floorNum);
  __CrownSetCallerCalleeName(808, "main", "printf");
# 227 "target.c"
  printf((char * __restrict )"floorNum=%d\n", floorNum);
  __CrownEnableSymbolic(810, "main");
  __CrownClearStack(809);
  __CrownLoad(811, (unsigned long )(& stdout), 6, (long long )stdout, 8);
  __CrownSetCallerCalleeName(812, "main", "fflush");
# 227 "target.c"
  fflush(stdout);
  __CrownEnableSymbolic(814, "main");
  __CrownClearStack(813);
# 228 "target.c"
  __CrownInt(& motorDir, cnt_symbolic_var___5, 228, (char *)"target.c", "motorDir");
  __CrownLoad(817, (unsigned long )(& cnt_symbolic_var___5), 5, (long long )cnt_symbolic_var___5,
              (double )cnt_symbolic_var___5);
  __CrownLoad(816, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(815, 0, 5, (long long )(cnt_symbolic_var___5 + 1), (double )(cnt_symbolic_var___5 + 1));
  __CrownStore(818, (unsigned long )(& cnt_symbolic_var___5));
# 228 "target.c"
  cnt_symbolic_var___5 ++;
  __CrownLoad(819, (unsigned long )0, 6, (long long )((char * __restrict )"motorDir=%d\n"),
              8);
  __CrownLoad(820, (unsigned long )(& motorDir), 5, (long long )motorDir, (double )motorDir);
  __CrownSetCallerCalleeName(821, "main", "printf");
# 228 "target.c"
  printf((char * __restrict )"motorDir=%d\n", motorDir);
  __CrownEnableSymbolic(823, "main");
  __CrownClearStack(822);
  __CrownLoad(824, (unsigned long )(& stdout), 6, (long long )stdout, 8);
  __CrownSetCallerCalleeName(825, "main", "fflush");
# 228 "target.c"
  fflush(stdout);
  __CrownEnableSymbolic(827, "main");
  __CrownClearStack(826);
# 229 "target.c"
  __CrownInt(& orderMatrix[0][0], cnt_symbolic_var___6, 229, (char *)"target.c", "orderMatrix[0][0]");
  __CrownLoad(830, (unsigned long )(& cnt_symbolic_var___6), 5, (long long )cnt_symbolic_var___6,
              (double )cnt_symbolic_var___6);
  __CrownLoad(829, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(828, 0, 5, (long long )(cnt_symbolic_var___6 + 1), (double )(cnt_symbolic_var___6 + 1));
  __CrownStore(831, (unsigned long )(& cnt_symbolic_var___6));
# 229 "target.c"
  cnt_symbolic_var___6 ++;
  __CrownLoad(832, (unsigned long )0, 6, (long long )((char * __restrict )"orderMatrix[0][0]=%d\n"),
              8);
  __CrownLoad(833, (unsigned long )(& orderMatrix[0][0]), 5, (long long )orderMatrix[0][0],
              (double )orderMatrix[0][0]);
  __CrownSetCallerCalleeName(834, "main", "printf");
# 229 "target.c"
  printf((char * __restrict )"orderMatrix[0][0]=%d\n", orderMatrix[0][0]);
  __CrownEnableSymbolic(836, "main");
  __CrownClearStack(835);
  __CrownLoad(837, (unsigned long )(& stdout), 6, (long long )stdout, 8);
  __CrownSetCallerCalleeName(838, "main", "fflush");
# 229 "target.c"
  fflush(stdout);
  __CrownEnableSymbolic(840, "main");
  __CrownClearStack(839);
# 230 "target.c"
  __CrownInt(& orderMatrix[0][1], cnt_symbolic_var___7, 230, (char *)"target.c", "orderMatrix[0][1]");
  __CrownLoad(843, (unsigned long )(& cnt_symbolic_var___7), 5, (long long )cnt_symbolic_var___7,
              (double )cnt_symbolic_var___7);
  __CrownLoad(842, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(841, 0, 5, (long long )(cnt_symbolic_var___7 + 1), (double )(cnt_symbolic_var___7 + 1));
  __CrownStore(844, (unsigned long )(& cnt_symbolic_var___7));
# 230 "target.c"
  cnt_symbolic_var___7 ++;
  __CrownLoad(845, (unsigned long )0, 6, (long long )((char * __restrict )"orderMatrix[0][1]=%d\n"),
              8);
  __CrownLoad(846, (unsigned long )(& orderMatrix[0][1]), 5, (long long )orderMatrix[0][1],
              (double )orderMatrix[0][1]);
  __CrownSetCallerCalleeName(847, "main", "printf");
# 230 "target.c"
  printf((char * __restrict )"orderMatrix[0][1]=%d\n", orderMatrix[0][1]);
  __CrownEnableSymbolic(849, "main");
  __CrownClearStack(848);
  __CrownLoad(850, (unsigned long )(& stdout), 6, (long long )stdout, 8);
  __CrownSetCallerCalleeName(851, "main", "fflush");
# 230 "target.c"
  fflush(stdout);
  __CrownEnableSymbolic(853, "main");
  __CrownClearStack(852);
# 231 "target.c"
  __CrownInt(& orderMatrix[0][2], cnt_symbolic_var___8, 231, (char *)"target.c", "orderMatrix[0][2]");
  __CrownLoad(856, (unsigned long )(& cnt_symbolic_var___8), 5, (long long )cnt_symbolic_var___8,
              (double )cnt_symbolic_var___8);
  __CrownLoad(855, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(854, 0, 5, (long long )(cnt_symbolic_var___8 + 1), (double )(cnt_symbolic_var___8 + 1));
  __CrownStore(857, (unsigned long )(& cnt_symbolic_var___8));
# 231 "target.c"
  cnt_symbolic_var___8 ++;
  __CrownLoad(858, (unsigned long )0, 6, (long long )((char * __restrict )"orderMatrix[0][2]=%d\n"),
              8);
  __CrownLoad(859, (unsigned long )(& orderMatrix[0][2]), 5, (long long )orderMatrix[0][2],
              (double )orderMatrix[0][2]);
  __CrownSetCallerCalleeName(860, "main", "printf");
# 231 "target.c"
  printf((char * __restrict )"orderMatrix[0][2]=%d\n", orderMatrix[0][2]);
  __CrownEnableSymbolic(862, "main");
  __CrownClearStack(861);
  __CrownLoad(863, (unsigned long )(& stdout), 6, (long long )stdout, 8);
  __CrownSetCallerCalleeName(864, "main", "fflush");
# 231 "target.c"
  fflush(stdout);
  __CrownEnableSymbolic(866, "main");
  __CrownClearStack(865);
# 232 "target.c"
  __CrownInt(& orderMatrix[0][3], cnt_symbolic_var___9, 232, (char *)"target.c", "orderMatrix[0][3]");
  __CrownLoad(869, (unsigned long )(& cnt_symbolic_var___9), 5, (long long )cnt_symbolic_var___9,
              (double )cnt_symbolic_var___9);
  __CrownLoad(868, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(867, 0, 5, (long long )(cnt_symbolic_var___9 + 1), (double )(cnt_symbolic_var___9 + 1));
  __CrownStore(870, (unsigned long )(& cnt_symbolic_var___9));
# 232 "target.c"
  cnt_symbolic_var___9 ++;
  __CrownLoad(871, (unsigned long )0, 6, (long long )((char * __restrict )"orderMatrix[0][3]=%d\n"),
              8);
  __CrownLoad(872, (unsigned long )(& orderMatrix[0][3]), 5, (long long )orderMatrix[0][3],
              (double )orderMatrix[0][3]);
  __CrownSetCallerCalleeName(873, "main", "printf");
# 232 "target.c"
  printf((char * __restrict )"orderMatrix[0][3]=%d\n", orderMatrix[0][3]);
  __CrownEnableSymbolic(875, "main");
  __CrownClearStack(874);
  __CrownLoad(876, (unsigned long )(& stdout), 6, (long long )stdout, 8);
  __CrownSetCallerCalleeName(877, "main", "fflush");
# 232 "target.c"
  fflush(stdout);
  __CrownEnableSymbolic(879, "main");
  __CrownClearStack(878);
# 233 "target.c"
  __CrownInt(& orderMatrix[1][0], cnt_symbolic_var___10, 233, (char *)"target.c",
             "orderMatrix[1][0]");
  __CrownLoad(882, (unsigned long )(& cnt_symbolic_var___10), 5, (long long )cnt_symbolic_var___10,
              (double )cnt_symbolic_var___10);
  __CrownLoad(881, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(880, 0, 5, (long long )(cnt_symbolic_var___10 + 1), (double )(cnt_symbolic_var___10 + 1));
  __CrownStore(883, (unsigned long )(& cnt_symbolic_var___10));
# 233 "target.c"
  cnt_symbolic_var___10 ++;
  __CrownLoad(884, (unsigned long )0, 6, (long long )((char * __restrict )"orderMatrix[1][0]=%d\n"),
              8);
  __CrownLoad(885, (unsigned long )(& orderMatrix[1][0]), 5, (long long )orderMatrix[1][0],
              (double )orderMatrix[1][0]);
  __CrownSetCallerCalleeName(886, "main", "printf");
# 233 "target.c"
  printf((char * __restrict )"orderMatrix[1][0]=%d\n", orderMatrix[1][0]);
  __CrownEnableSymbolic(888, "main");
  __CrownClearStack(887);
  __CrownLoad(889, (unsigned long )(& stdout), 6, (long long )stdout, 8);
  __CrownSetCallerCalleeName(890, "main", "fflush");
# 233 "target.c"
  fflush(stdout);
  __CrownEnableSymbolic(892, "main");
  __CrownClearStack(891);
# 234 "target.c"
  __CrownInt(& orderMatrix[1][1], cnt_symbolic_var___11, 234, (char *)"target.c",
             "orderMatrix[1][1]");
  __CrownLoad(895, (unsigned long )(& cnt_symbolic_var___11), 5, (long long )cnt_symbolic_var___11,
              (double )cnt_symbolic_var___11);
  __CrownLoad(894, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(893, 0, 5, (long long )(cnt_symbolic_var___11 + 1), (double )(cnt_symbolic_var___11 + 1));
  __CrownStore(896, (unsigned long )(& cnt_symbolic_var___11));
# 234 "target.c"
  cnt_symbolic_var___11 ++;
  __CrownLoad(897, (unsigned long )0, 6, (long long )((char * __restrict )"orderMatrix[1][1]=%d\n"),
              8);
  __CrownLoad(898, (unsigned long )(& orderMatrix[1][1]), 5, (long long )orderMatrix[1][1],
              (double )orderMatrix[1][1]);
  __CrownSetCallerCalleeName(899, "main", "printf");
# 234 "target.c"
  printf((char * __restrict )"orderMatrix[1][1]=%d\n", orderMatrix[1][1]);
  __CrownEnableSymbolic(901, "main");
  __CrownClearStack(900);
  __CrownLoad(902, (unsigned long )(& stdout), 6, (long long )stdout, 8);
  __CrownSetCallerCalleeName(903, "main", "fflush");
# 234 "target.c"
  fflush(stdout);
  __CrownEnableSymbolic(905, "main");
  __CrownClearStack(904);
# 235 "target.c"
  __CrownInt(& orderMatrix[1][2], cnt_symbolic_var___12, 235, (char *)"target.c",
             "orderMatrix[1][2]");
  __CrownLoad(908, (unsigned long )(& cnt_symbolic_var___12), 5, (long long )cnt_symbolic_var___12,
              (double )cnt_symbolic_var___12);
  __CrownLoad(907, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(906, 0, 5, (long long )(cnt_symbolic_var___12 + 1), (double )(cnt_symbolic_var___12 + 1));
  __CrownStore(909, (unsigned long )(& cnt_symbolic_var___12));
# 235 "target.c"
  cnt_symbolic_var___12 ++;
  __CrownLoad(910, (unsigned long )0, 6, (long long )((char * __restrict )"orderMatrix[1][2]=%d\n"),
              8);
  __CrownLoad(911, (unsigned long )(& orderMatrix[1][2]), 5, (long long )orderMatrix[1][2],
              (double )orderMatrix[1][2]);
  __CrownSetCallerCalleeName(912, "main", "printf");
# 235 "target.c"
  printf((char * __restrict )"orderMatrix[1][2]=%d\n", orderMatrix[1][2]);
  __CrownEnableSymbolic(914, "main");
  __CrownClearStack(913);
  __CrownLoad(915, (unsigned long )(& stdout), 6, (long long )stdout, 8);
  __CrownSetCallerCalleeName(916, "main", "fflush");
# 235 "target.c"
  fflush(stdout);
  __CrownEnableSymbolic(918, "main");
  __CrownClearStack(917);
  __CrownLoad(919, (unsigned long )0, 6, (long long )((char * __restrict )"path:\n"),
              8);
  __CrownSetCallerCalleeName(920, "main", "printf");
# 236 "target.c"
  printf((char * __restrict )"path:\n");
  __CrownEnableSymbolic(922, "main");
  __CrownClearStack(921);
  __CrownLoad(923, (unsigned long )(& stdout), 6, (long long )stdout, 8);
  __CrownSetCallerCalleeName(924, "main", "fflush");
# 236 "target.c"
  fflush(stdout);
  __CrownEnableSymbolic(926, "main");
  __CrownClearStack(925);
  __CrownLoad(927, (unsigned long )(& floorNum), 5, (long long )floorNum, (double )floorNum);
  __CrownLoad(928, (unsigned long )(& motorDir), 5, (long long )motorDir, (double )motorDir);
  __CrownSetCallerCalleeName(929, "main", "floorIsOrdered");
# 237 "target.c"
  __iv__return_expr_floorIsOrdered = floorIsOrdered(floorNum, motorDir);
  __CrownEnableSymbolic(932, "main");
  __CrownHandleReturn(931, 5, (long long )__iv__return_expr_floorIsOrdered, (double )__iv__return_expr_floorIsOrdered);
  __CrownStore(930, (unsigned long )(& __iv__return_expr_floorIsOrdered));
# 238 "target.c"
  while (1) {
    while_continue: ;
    {
    __CrownLoad(936, (unsigned long )(& __iv__max_path), 5, (long long )__iv__max_path,
                (double )__iv__max_path);
    __CrownLoad(935, (unsigned long )0, 5, (long long )10000, (double )10000);
    __CrownApply2(934, 20, 5, (long long )(__iv__max_path < 10000), (double )(__iv__max_path < 10000));
    __CrownApply1(933, 26, 5, (long long )(! (__iv__max_path < 10000)), (double )(! (__iv__max_path < 10000)));
# 238 "target.c"
    if (! (__iv__max_path < 10000)) {
      __CrownBranch(937, 253, 1, 239, "target.c");
      __CrownLoad(940, (unsigned long )(& stderr), 6, (long long )stderr, 8);
      __CrownApply1(939, 27, 6, (long long )((FILE * __restrict )stderr), 8);
      __CrownLoad(941, (unsigned long )0, 6, (long long )((char * __restrict )"### SYM_assume(%s) is violated at Line %d (%s in %s) ###\n"),
                  8);
      __CrownLoad(942, (unsigned long )0, 6, (long long )"__iv__max_path < 10000",
                  8);
      __CrownLoad(943, (unsigned long )0, 5, (long long )238, (double )238);
      __CrownLoad(944, (unsigned long )0, 6, (long long )"main", 8);
      __CrownLoad(945, (unsigned long )0, 6, (long long )"target.c", 8);
      __CrownSetCallerCalleeName(946, "main", "fprintf");
# 238 "target.c"
      fprintf((FILE * __restrict )stderr, (char * __restrict )"### SYM_assume(%s) is violated at Line %d (%s in %s) ###\n",
              "__iv__max_path < 10000", 238, "main", "target.c");
      __CrownEnableSymbolic(948, "main");
      __CrownClearStack(947);
      __CrownLoad(949, (unsigned long )0, 6, (long long )((char * __restrict )"__SYM_assume_violated"),
                  8);
      __CrownLoad(950, (unsigned long )0, 6, (long long )((char * __restrict )"w"),
                  8);
      __CrownSetCallerCalleeName(951, "main", "fopen");
# 238 "target.c"
      tmp = fopen((char * __restrict )"__SYM_assume_violated", (char * __restrict )"w");
      __CrownEnableSymbolic(954, "main");
      __CrownHandleReturn(953, 6, (long long )tmp, 8);
      __CrownStore(952, (unsigned long )(& tmp));
      __CrownLoad(955, (unsigned long )(& tmp), 6, (long long )tmp, 8);
      __CrownStore(956, (unsigned long )(& f));
# 238 "target.c"
      f = tmp;
      {
      __CrownLoad(958, (unsigned long )(& f), 6, (long long )f, 8);
      __CrownApply1(957, 26, 5, (long long )(! f), (double )(! f));
# 238 "target.c"
      if (! f) {
        __CrownBranch(959, 255, 1, 239, "target.c");
        __CrownLoad(962, (unsigned long )(& stderr), 6, (long long )stderr, 8);
        __CrownApply1(961, 27, 6, (long long )((FILE * __restrict )stderr), 8);
        __CrownLoad(963, (unsigned long )0, 6, (long long )((char * __restrict )"### %s file cannot be created ###\n"),
                    8);
        __CrownLoad(964, (unsigned long )0, 6, (long long )"__SYM_assume_violated",
                    8);
        __CrownSetCallerCalleeName(965, "main", "fprintf");
# 238 "target.c"
        fprintf((FILE * __restrict )stderr, (char * __restrict )"### %s file cannot be created ###\n",
                "__SYM_assume_violated");
        __CrownEnableSymbolic(967, "main");
        __CrownClearStack(966);
      }
# 238 "target.c"
        else {
        __CrownBranch(960, 256, 0, 239, "target.c");
        __CrownLoad(968, (unsigned long )(& f), 6, (long long )f, 8);
        __CrownSetCallerCalleeName(969, "main", "fclose");
# 238 "target.c"
        fclose(f);
        __CrownEnableSymbolic(971, "main");
        __CrownClearStack(970);
      }
      }
      __CrownLoad(972, (unsigned long )0, 5, (long long )1, (double )1);
      __CrownSetCallerCalleeName(973, "main", "exit");
# 238 "target.c"
      exit(1);
      __CrownEnableSymbolic(975, "main");
      __CrownClearStack(974);
    }
# 238 "target.c"
      else {
      __CrownBranch(938, 258, 0, 239, "target.c");

    }
    }
# 238 "target.c"
    goto while_break;
  }
  while_break:
  __CrownLoad(976, (unsigned long )0, 6, (long long )((char * __restrict )"output:\n"),
              8);
  __CrownSetCallerCalleeName(977, "main", "printf");
# 239 "target.c"
  printf((char * __restrict )"output:\n");
  __CrownEnableSymbolic(979, "main");
  __CrownClearStack(978);
  __CrownLoad(980, (unsigned long )(& stdout), 6, (long long )stdout, 8);
  __CrownSetCallerCalleeName(981, "main", "fflush");
# 239 "target.c"
  fflush(stdout);
  __CrownEnableSymbolic(983, "main");
  __CrownClearStack(982);
  __CrownLoad(984, (unsigned long )0, 6, (long long )((char * __restrict )"__iv__return_expr_floorIsOrdered=%d\n"),
              8);
  __CrownLoad(985, (unsigned long )(& __iv__return_expr_floorIsOrdered), 5, (long long )__iv__return_expr_floorIsOrdered,
              (double )__iv__return_expr_floorIsOrdered);
  __CrownSetCallerCalleeName(986, "main", "printf");
# 240 "target.c"
  printf((char * __restrict )"__iv__return_expr_floorIsOrdered=%d\n", __iv__return_expr_floorIsOrdered);
  __CrownEnableSymbolic(988, "main");
  __CrownClearStack(987);
  __CrownLoad(989, (unsigned long )(& stdout), 6, (long long )stdout, 8);
  __CrownSetCallerCalleeName(990, "main", "fflush");
# 240 "target.c"
  fflush(stdout);
  __CrownEnableSymbolic(992, "main");
  __CrownClearStack(991);
  __CrownLoad(993, (unsigned long )0, 5, (long long )0, (double )0);
  __CrownStore(994, (unsigned long )(& __retres6));
# 241 "target.c"
  __retres6 = 0;
  __CrownLoad(995, (unsigned long )(& __retres6), 5, (long long )__retres6, (double )__retres6);
  __CrownReturn(996);
# 217 "target.c"
  return (__retres6);
}
}
void __globinit_target(void)
{


  {
  __CrownInit(997);
}
}

# 1 "./target.cil.c"
# 1 "/home/yoel/iv-project/results/elevator/log/unit/isButtonPressed//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "./target.cil.c"
# 117 "target.c"
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
# 59 "target.c"
int isButtonPressed(void) ;
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
int isButtonPressed(void)
{
  int button ;
  int floorNum ;
  int __retres3 ;

  {
  __CrownCheckSymbolic(2, "isButtonPressed");
  __CrownCall(1, 1);

  __CrownLoad(3, (unsigned long )0, 5, (long long )0, (double )0);
  __CrownStore(4, (unsigned long )(& button));
# 87 "target.c"
  button = 0;
  Node_7_365:
  __CrownLoad(7, (unsigned long )(& __iv__max_path), 5, (long long )__iv__max_path,
              (double )__iv__max_path);
  __CrownLoad(6, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(5, 0, 5, (long long )(__iv__max_path + 1), (double )(__iv__max_path + 1));
  __CrownStore(8, (unsigned long )(& __iv__max_path));
# 89 "target.c"
  __iv__max_path ++;
  {
  __CrownLoad(11, (unsigned long )(& __iv__max_path), 5, (long long )__iv__max_path,
              (double )__iv__max_path);
  __CrownLoad(10, (unsigned long )0, 5, (long long )10000, (double )10000);
  __CrownApply2(9, 22, 5, (long long )(__iv__max_path >= 10000), (double )(__iv__max_path >= 10000));
# 90 "target.c"
  if (__iv__max_path >= 10000) {
    __CrownBranch(12, 4, 1, 91, "target.c");
    __CrownLoad(14, (unsigned long )0, 5, (long long )0, (double )0);
    __CrownStore(15, (unsigned long )(& __retres3));
# 90 "target.c"
    __retres3 = 0;
# 90 "target.c"
    goto return_label;
  }
# 90 "target.c"
    else {
    __CrownBranch(13, 6, 0, 91, "target.c");

  }
  }
  __CrownLoad(16, (unsigned long )0, 6, (long long )((char * __restrict )"Node_7_365:%d\n"),
              8);
  __CrownLoad(19, (unsigned long )(& button), 5, (long long )button, (double )button);
  __CrownLoad(18, (unsigned long )0, 5, (long long )3, (double )3);
  __CrownApply2(17, 22, 5, (long long )(button >= 3), (double )(button >= 3));
  __CrownSetCallerCalleeName(20, "isButtonPressed", "printf");
# 91 "target.c"
  printf((char * __restrict )"Node_7_365:%d\n", button >= 3);
  __CrownEnableSymbolic(22, "isButtonPressed");
  __CrownClearStack(21);
  __CrownLoad(23, (unsigned long )(& stdout), 6, (long long )stdout, 8);
  __CrownSetCallerCalleeName(24, "isButtonPressed", "fflush");
# 91 "target.c"
  fflush(stdout);
  __CrownEnableSymbolic(26, "isButtonPressed");
  __CrownClearStack(25);
  {
  __CrownLoad(29, (unsigned long )(& button), 5, (long long )button, (double )button);
  __CrownLoad(28, (unsigned long )0, 5, (long long )3, (double )3);
  __CrownApply2(27, 22, 5, (long long )(button >= 3), (double )(button >= 3));
# 92 "target.c"
  if (button >= 3) {
    __CrownBranch(30, 9, 1, 93, "target.c");
# 92 "target.c"
    goto Node_7_382;
  }
# 92 "target.c"
    else {
    __CrownBranch(31, 10, 0, 93, "target.c");

  }
  }
  __CrownLoad(32, (unsigned long )0, 5, (long long )0, (double )0);
  __CrownStore(33, (unsigned long )(& floorNum));
# 94 "target.c"
  floorNum = 0;
  Node_7_369:
  __CrownLoad(36, (unsigned long )(& __iv__max_path), 5, (long long )__iv__max_path,
              (double )__iv__max_path);
  __CrownLoad(35, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(34, 0, 5, (long long )(__iv__max_path + 1), (double )(__iv__max_path + 1));
  __CrownStore(37, (unsigned long )(& __iv__max_path));
# 96 "target.c"
  __iv__max_path ++;
  {
  __CrownLoad(40, (unsigned long )(& __iv__max_path), 5, (long long )__iv__max_path,
              (double )__iv__max_path);
  __CrownLoad(39, (unsigned long )0, 5, (long long )10000, (double )10000);
  __CrownApply2(38, 22, 5, (long long )(__iv__max_path >= 10000), (double )(__iv__max_path >= 10000));
# 97 "target.c"
  if (__iv__max_path >= 10000) {
    __CrownBranch(41, 14, 1, 98, "target.c");
    __CrownLoad(43, (unsigned long )0, 5, (long long )0, (double )0);
    __CrownStore(44, (unsigned long )(& __retres3));
# 97 "target.c"
    __retres3 = 0;
# 97 "target.c"
    goto return_label;
  }
# 97 "target.c"
    else {
    __CrownBranch(42, 16, 0, 98, "target.c");

  }
  }
  __CrownLoad(45, (unsigned long )0, 6, (long long )((char * __restrict )"Node_7_369:%d\n"),
              8);
  __CrownLoad(48, (unsigned long )(& floorNum), 5, (long long )floorNum, (double )floorNum);
  __CrownLoad(47, (unsigned long )0, 5, (long long )4, (double )4);
  __CrownApply2(46, 22, 5, (long long )(floorNum >= 4), (double )(floorNum >= 4));
  __CrownSetCallerCalleeName(49, "isButtonPressed", "printf");
# 98 "target.c"
  printf((char * __restrict )"Node_7_369:%d\n", floorNum >= 4);
  __CrownEnableSymbolic(51, "isButtonPressed");
  __CrownClearStack(50);
  __CrownLoad(52, (unsigned long )(& stdout), 6, (long long )stdout, 8);
  __CrownSetCallerCalleeName(53, "isButtonPressed", "fflush");
# 98 "target.c"
  fflush(stdout);
  __CrownEnableSymbolic(55, "isButtonPressed");
  __CrownClearStack(54);
  {
  __CrownLoad(58, (unsigned long )(& floorNum), 5, (long long )floorNum, (double )floorNum);
  __CrownLoad(57, (unsigned long )0, 5, (long long )4, (double )4);
  __CrownApply2(56, 22, 5, (long long )(floorNum >= 4), (double )(floorNum >= 4));
# 99 "target.c"
  if (floorNum >= 4) {
    __CrownBranch(59, 19, 1, 100, "target.c");
# 99 "target.c"
    goto Node_7_378;
  }
# 99 "target.c"
    else {
    __CrownBranch(60, 20, 0, 100, "target.c");

  }
  }
  __CrownLoad(63, (unsigned long )(& __iv__max_path), 5, (long long )__iv__max_path,
              (double )__iv__max_path);
  __CrownLoad(62, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(61, 0, 5, (long long )(__iv__max_path + 1), (double )(__iv__max_path + 1));
  __CrownStore(64, (unsigned long )(& __iv__max_path));
# 100 "target.c"
  __iv__max_path ++;
  {
  __CrownLoad(67, (unsigned long )(& __iv__max_path), 5, (long long )__iv__max_path,
              (double )__iv__max_path);
  __CrownLoad(66, (unsigned long )0, 5, (long long )10000, (double )10000);
  __CrownApply2(65, 22, 5, (long long )(__iv__max_path >= 10000), (double )(__iv__max_path >= 10000));
# 101 "target.c"
  if (__iv__max_path >= 10000) {
    __CrownBranch(68, 23, 1, 102, "target.c");
    __CrownLoad(70, (unsigned long )0, 5, (long long )0, (double )0);
    __CrownStore(71, (unsigned long )(& __retres3));
# 101 "target.c"
    __retres3 = 0;
# 101 "target.c"
    goto return_label;
  }
# 101 "target.c"
    else {
    __CrownBranch(69, 25, 0, 102, "target.c");

  }
  }
  __CrownLoad(72, (unsigned long )0, 6, (long long )((char * __restrict )"Node_7_370:%d\n"),
              8);
  __CrownLoad(76, (unsigned long )(& orderMatrix[(long )button][(long )floorNum]),
              5, (long long )orderMatrix[(long )button][(long )floorNum], (double )orderMatrix[(long )button][(long )floorNum]);
  __CrownLoad(75, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(74, 13, 5, (long long )(orderMatrix[(long )button][(long )floorNum] == 1),
                (double )(orderMatrix[(long )button][(long )floorNum] == 1));
  __CrownApply1(73, 26, 5, (long long )(! (orderMatrix[(long )button][(long )floorNum] == 1)),
                (double )(! (orderMatrix[(long )button][(long )floorNum] == 1)));
  __CrownSetCallerCalleeName(77, "isButtonPressed", "printf");
# 102 "target.c"
  printf((char * __restrict )"Node_7_370:%d\n", ! (orderMatrix[(long )button][(long )floorNum] == 1));
  __CrownEnableSymbolic(79, "isButtonPressed");
  __CrownClearStack(78);
  __CrownLoad(80, (unsigned long )(& stdout), 6, (long long )stdout, 8);
  __CrownSetCallerCalleeName(81, "isButtonPressed", "fflush");
# 102 "target.c"
  fflush(stdout);
  __CrownEnableSymbolic(83, "isButtonPressed");
  __CrownClearStack(82);
  {
  __CrownLoad(87, (unsigned long )0, 7, (long long )0L, (double )0L);
  __CrownLoad(86, (unsigned long )(& button), 5, (long long )button, (double )button);
  __CrownApply1(85, 28, 7, (long long )((long )button), (double )((long )button));
  __CrownApply2(84, 16, 5, (long long )(0L > (long )button), (double )(0L > (long )button));
# 103 "target.c"
  if (0L > (long )button) {
    __CrownBranch(88, 28, 1, 104, "target.c");
    __CrownLoad(90, (unsigned long )0, 5, (long long )10000, (double )10000);
    __CrownStore(91, (unsigned long )(& __iv__max_path));
# 103 "target.c"
    __iv__max_path = 10000;
  }
# 103 "target.c"
    else {
    __CrownBranch(89, 29, 0, 104, "target.c");
    {
    __CrownLoad(95, (unsigned long )(& button), 5, (long long )button, (double )button);
    __CrownApply1(94, 28, 7, (long long )((long )button), (double )((long )button));
    __CrownLoad(93, (unsigned long )0, 7, (long long )3L, (double )3L);
    __CrownApply2(92, 22, 5, (long long )((long )button >= 3L), (double )((long )button >= 3L));
# 103 "target.c"
    if ((long )button >= 3L) {
      __CrownBranch(96, 30, 1, 104, "target.c");
      __CrownLoad(98, (unsigned long )0, 5, (long long )10000, (double )10000);
      __CrownStore(99, (unsigned long )(& __iv__max_path));
# 103 "target.c"
      __iv__max_path = 10000;
    }
# 103 "target.c"
      else {
      __CrownBranch(97, 31, 0, 104, "target.c");

    }
    }
  }
  }
  {
  __CrownLoad(103, (unsigned long )0, 7, (long long )0L, (double )0L);
  __CrownLoad(102, (unsigned long )(& floorNum), 5, (long long )floorNum, (double )floorNum);
  __CrownApply1(101, 28, 7, (long long )((long )floorNum), (double )((long )floorNum));
  __CrownApply2(100, 16, 5, (long long )(0L > (long )floorNum), (double )(0L > (long )floorNum));
# 104 "target.c"
  if (0L > (long )floorNum) {
    __CrownBranch(104, 33, 1, 105, "target.c");
    __CrownLoad(106, (unsigned long )0, 5, (long long )10000, (double )10000);
    __CrownStore(107, (unsigned long )(& __iv__max_path));
# 104 "target.c"
    __iv__max_path = 10000;
  }
# 104 "target.c"
    else {
    __CrownBranch(105, 34, 0, 105, "target.c");
    {
    __CrownLoad(111, (unsigned long )(& floorNum), 5, (long long )floorNum, (double )floorNum);
    __CrownApply1(110, 28, 7, (long long )((long )floorNum), (double )((long )floorNum));
    __CrownLoad(109, (unsigned long )0, 7, (long long )4L, (double )4L);
    __CrownApply2(108, 22, 5, (long long )((long )floorNum >= 4L), (double )((long )floorNum >= 4L));
# 104 "target.c"
    if ((long )floorNum >= 4L) {
      __CrownBranch(112, 35, 1, 105, "target.c");
      __CrownLoad(114, (unsigned long )0, 5, (long long )10000, (double )10000);
      __CrownStore(115, (unsigned long )(& __iv__max_path));
# 104 "target.c"
      __iv__max_path = 10000;
    }
# 104 "target.c"
      else {
      __CrownBranch(113, 36, 0, 105, "target.c");

    }
    }
  }
  }
  {
  __CrownLoad(119, (unsigned long )0, 7, (long long )0L, (double )0L);
  __CrownLoad(118, (unsigned long )(& button), 5, (long long )button, (double )button);
  __CrownApply1(117, 28, 7, (long long )((long )button), (double )((long )button));
  __CrownApply2(116, 16, 5, (long long )(0L > (long )button), (double )(0L > (long )button));
# 105 "target.c"
  if (0L > (long )button) {
    __CrownBranch(120, 38, 1, 106, "target.c");
    __CrownLoad(122, (unsigned long )0, 5, (long long )10000, (double )10000);
    __CrownStore(123, (unsigned long )(& __iv__max_path));
# 105 "target.c"
    __iv__max_path = 10000;
  }
# 105 "target.c"
    else {
    __CrownBranch(121, 39, 0, 106, "target.c");
    {
    __CrownLoad(127, (unsigned long )(& button), 5, (long long )button, (double )button);
    __CrownApply1(126, 28, 7, (long long )((long )button), (double )((long )button));
    __CrownLoad(125, (unsigned long )0, 7, (long long )3L, (double )3L);
    __CrownApply2(124, 22, 5, (long long )((long )button >= 3L), (double )((long )button >= 3L));
# 105 "target.c"
    if ((long )button >= 3L) {
      __CrownBranch(128, 40, 1, 106, "target.c");
      __CrownLoad(130, (unsigned long )0, 5, (long long )10000, (double )10000);
      __CrownStore(131, (unsigned long )(& __iv__max_path));
# 105 "target.c"
      __iv__max_path = 10000;
    }
# 105 "target.c"
      else {
      __CrownBranch(129, 41, 0, 106, "target.c");

    }
    }
  }
  }
  {
  __CrownLoad(135, (unsigned long )(& orderMatrix[(long )button][(long )floorNum]),
              5, (long long )orderMatrix[(long )button][(long )floorNum], (double )orderMatrix[(long )button][(long )floorNum]);
  __CrownLoad(134, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(133, 13, 5, (long long )(orderMatrix[(long )button][(long )floorNum] == 1),
                (double )(orderMatrix[(long )button][(long )floorNum] == 1));
  __CrownApply1(132, 26, 5, (long long )(! (orderMatrix[(long )button][(long )floorNum] == 1)),
                (double )(! (orderMatrix[(long )button][(long )floorNum] == 1)));
# 106 "target.c"
  if (! (orderMatrix[(long )button][(long )floorNum] == 1)) {
    __CrownBranch(136, 43, 1, 107, "target.c");
# 106 "target.c"
    goto Node_7_375;
  }
# 106 "target.c"
    else {
    __CrownBranch(137, 44, 0, 107, "target.c");

  }
  }
  __CrownLoad(138, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownStore(139, (unsigned long )(& __retres3));
# 107 "target.c"
  __retres3 = 1;
# 107 "target.c"
  goto return_label;
  Node_7_375:
  __CrownLoad(142, (unsigned long )(& floorNum), 5, (long long )floorNum, (double )floorNum);
  __CrownLoad(141, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(140, 0, 5, (long long )(floorNum + 1), (double )(floorNum + 1));
  __CrownStore(143, (unsigned long )(& floorNum));
# 109 "target.c"
  floorNum ++;
# 110 "target.c"
  goto Node_7_369;
  Node_7_378:
  __CrownLoad(146, (unsigned long )(& button), 5, (long long )button, (double )button);
  __CrownLoad(145, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(144, 0, 5, (long long )(button + 1), (double )(button + 1));
  __CrownStore(147, (unsigned long )(& button));
# 112 "target.c"
  button ++;
# 113 "target.c"
  goto Node_7_365;
  Node_7_382: ;
  __CrownLoad(148, (unsigned long )0, 5, (long long )0, (double )0);
  __CrownStore(149, (unsigned long )(& __retres3));
# 115 "target.c"
  __retres3 = 0;
  return_label:
  {
  __CrownLoad(150, (unsigned long )(& __retres3), 5, (long long )__retres3, (double )__retres3);
  __CrownReturn(151);
# 85 "target.c"
  return (__retres3);
  }
}
}
# 120 "target.c"
int main(void) ;
# 120 "target.c"
static int cnt_symbolic_var = 1;
# 121 "target.c"
int main(void) ;
# 121 "target.c"
static int cnt_symbolic_var___0 = 1;
# 122 "target.c"
int main(void) ;
# 122 "target.c"
static int cnt_symbolic_var___1 = 1;
# 123 "target.c"
int main(void) ;
# 123 "target.c"
static int cnt_symbolic_var___2 = 1;
# 124 "target.c"
int main(void) ;
# 124 "target.c"
static int cnt_symbolic_var___3 = 1;
# 125 "target.c"
int main(void) ;
# 125 "target.c"
static int cnt_symbolic_var___4 = 1;
# 126 "target.c"
int main(void) ;
# 126 "target.c"
static int cnt_symbolic_var___5 = 1;
# 127 "target.c"
int main(void) ;
# 127 "target.c"
static int cnt_symbolic_var___6 = 1;
# 128 "target.c"
int main(void) ;
# 128 "target.c"
static int cnt_symbolic_var___7 = 1;
# 129 "target.c"
int main(void) ;
# 129 "target.c"
static int cnt_symbolic_var___8 = 1;
# 130 "target.c"
int main(void) ;
# 130 "target.c"
static int cnt_symbolic_var___9 = 1;
# 131 "target.c"
int main(void) ;
# 131 "target.c"
static int cnt_symbolic_var___10 = 1;
# 117 "target.c"
int main(void)
{
  int __iv__return_expr_isButtonPressed ;
  FILE *f ;
  FILE *tmp ;
  int __retres4 ;

  {
  __globinit_target();
  __CrownCheckSymbolic(154, "main");
  __CrownCall(153, 2);
  __CrownClearStack(152);
  __CrownLoad(155, (unsigned long )0, 6, (long long )((char * __restrict )"input:\n"),
              8);
  __CrownSetCallerCalleeName(156, "main", "printf");
# 119 "target.c"
  printf((char * __restrict )"input:\n");
  __CrownEnableSymbolic(158, "main");
  __CrownClearStack(157);
  __CrownLoad(159, (unsigned long )(& stdout), 6, (long long )stdout, 8);
  __CrownSetCallerCalleeName(160, "main", "fflush");
# 119 "target.c"
  fflush(stdout);
  __CrownEnableSymbolic(162, "main");
  __CrownClearStack(161);
# 120 "target.c"
  __CrownInt(& orderMatrix[1][3], cnt_symbolic_var, 120, (char *)"target.c", "orderMatrix[1][3]");
  __CrownLoad(165, (unsigned long )(& cnt_symbolic_var), 5, (long long )cnt_symbolic_var,
              (double )cnt_symbolic_var);
  __CrownLoad(164, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(163, 0, 5, (long long )(cnt_symbolic_var + 1), (double )(cnt_symbolic_var + 1));
  __CrownStore(166, (unsigned long )(& cnt_symbolic_var));
# 120 "target.c"
  cnt_symbolic_var ++;
  __CrownLoad(167, (unsigned long )0, 6, (long long )((char * __restrict )"orderMatrix[1][3]=%d\n"),
              8);
  __CrownLoad(168, (unsigned long )(& orderMatrix[1][3]), 5, (long long )orderMatrix[1][3],
              (double )orderMatrix[1][3]);
  __CrownSetCallerCalleeName(169, "main", "printf");
# 120 "target.c"
  printf((char * __restrict )"orderMatrix[1][3]=%d\n", orderMatrix[1][3]);
  __CrownEnableSymbolic(171, "main");
  __CrownClearStack(170);
  __CrownLoad(172, (unsigned long )(& stdout), 6, (long long )stdout, 8);
  __CrownSetCallerCalleeName(173, "main", "fflush");
# 120 "target.c"
  fflush(stdout);
  __CrownEnableSymbolic(175, "main");
  __CrownClearStack(174);
# 121 "target.c"
  __CrownInt(& orderMatrix[2][0], cnt_symbolic_var___0, 121, (char *)"target.c", "orderMatrix[2][0]");
  __CrownLoad(178, (unsigned long )(& cnt_symbolic_var___0), 5, (long long )cnt_symbolic_var___0,
              (double )cnt_symbolic_var___0);
  __CrownLoad(177, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(176, 0, 5, (long long )(cnt_symbolic_var___0 + 1), (double )(cnt_symbolic_var___0 + 1));
  __CrownStore(179, (unsigned long )(& cnt_symbolic_var___0));
# 121 "target.c"
  cnt_symbolic_var___0 ++;
  __CrownLoad(180, (unsigned long )0, 6, (long long )((char * __restrict )"orderMatrix[2][0]=%d\n"),
              8);
  __CrownLoad(181, (unsigned long )(& orderMatrix[2][0]), 5, (long long )orderMatrix[2][0],
              (double )orderMatrix[2][0]);
  __CrownSetCallerCalleeName(182, "main", "printf");
# 121 "target.c"
  printf((char * __restrict )"orderMatrix[2][0]=%d\n", orderMatrix[2][0]);
  __CrownEnableSymbolic(184, "main");
  __CrownClearStack(183);
  __CrownLoad(185, (unsigned long )(& stdout), 6, (long long )stdout, 8);
  __CrownSetCallerCalleeName(186, "main", "fflush");
# 121 "target.c"
  fflush(stdout);
  __CrownEnableSymbolic(188, "main");
  __CrownClearStack(187);
# 122 "target.c"
  __CrownInt(& orderMatrix[2][1], cnt_symbolic_var___1, 122, (char *)"target.c", "orderMatrix[2][1]");
  __CrownLoad(191, (unsigned long )(& cnt_symbolic_var___1), 5, (long long )cnt_symbolic_var___1,
              (double )cnt_symbolic_var___1);
  __CrownLoad(190, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(189, 0, 5, (long long )(cnt_symbolic_var___1 + 1), (double )(cnt_symbolic_var___1 + 1));
  __CrownStore(192, (unsigned long )(& cnt_symbolic_var___1));
# 122 "target.c"
  cnt_symbolic_var___1 ++;
  __CrownLoad(193, (unsigned long )0, 6, (long long )((char * __restrict )"orderMatrix[2][1]=%d\n"),
              8);
  __CrownLoad(194, (unsigned long )(& orderMatrix[2][1]), 5, (long long )orderMatrix[2][1],
              (double )orderMatrix[2][1]);
  __CrownSetCallerCalleeName(195, "main", "printf");
# 122 "target.c"
  printf((char * __restrict )"orderMatrix[2][1]=%d\n", orderMatrix[2][1]);
  __CrownEnableSymbolic(197, "main");
  __CrownClearStack(196);
  __CrownLoad(198, (unsigned long )(& stdout), 6, (long long )stdout, 8);
  __CrownSetCallerCalleeName(199, "main", "fflush");
# 122 "target.c"
  fflush(stdout);
  __CrownEnableSymbolic(201, "main");
  __CrownClearStack(200);
# 123 "target.c"
  __CrownInt(& orderMatrix[2][2], cnt_symbolic_var___2, 123, (char *)"target.c", "orderMatrix[2][2]");
  __CrownLoad(204, (unsigned long )(& cnt_symbolic_var___2), 5, (long long )cnt_symbolic_var___2,
              (double )cnt_symbolic_var___2);
  __CrownLoad(203, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(202, 0, 5, (long long )(cnt_symbolic_var___2 + 1), (double )(cnt_symbolic_var___2 + 1));
  __CrownStore(205, (unsigned long )(& cnt_symbolic_var___2));
# 123 "target.c"
  cnt_symbolic_var___2 ++;
  __CrownLoad(206, (unsigned long )0, 6, (long long )((char * __restrict )"orderMatrix[2][2]=%d\n"),
              8);
  __CrownLoad(207, (unsigned long )(& orderMatrix[2][2]), 5, (long long )orderMatrix[2][2],
              (double )orderMatrix[2][2]);
  __CrownSetCallerCalleeName(208, "main", "printf");
# 123 "target.c"
  printf((char * __restrict )"orderMatrix[2][2]=%d\n", orderMatrix[2][2]);
  __CrownEnableSymbolic(210, "main");
  __CrownClearStack(209);
  __CrownLoad(211, (unsigned long )(& stdout), 6, (long long )stdout, 8);
  __CrownSetCallerCalleeName(212, "main", "fflush");
# 123 "target.c"
  fflush(stdout);
  __CrownEnableSymbolic(214, "main");
  __CrownClearStack(213);
# 124 "target.c"
  __CrownInt(& orderMatrix[2][3], cnt_symbolic_var___3, 124, (char *)"target.c", "orderMatrix[2][3]");
  __CrownLoad(217, (unsigned long )(& cnt_symbolic_var___3), 5, (long long )cnt_symbolic_var___3,
              (double )cnt_symbolic_var___3);
  __CrownLoad(216, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(215, 0, 5, (long long )(cnt_symbolic_var___3 + 1), (double )(cnt_symbolic_var___3 + 1));
  __CrownStore(218, (unsigned long )(& cnt_symbolic_var___3));
# 124 "target.c"
  cnt_symbolic_var___3 ++;
  __CrownLoad(219, (unsigned long )0, 6, (long long )((char * __restrict )"orderMatrix[2][3]=%d\n"),
              8);
  __CrownLoad(220, (unsigned long )(& orderMatrix[2][3]), 5, (long long )orderMatrix[2][3],
              (double )orderMatrix[2][3]);
  __CrownSetCallerCalleeName(221, "main", "printf");
# 124 "target.c"
  printf((char * __restrict )"orderMatrix[2][3]=%d\n", orderMatrix[2][3]);
  __CrownEnableSymbolic(223, "main");
  __CrownClearStack(222);
  __CrownLoad(224, (unsigned long )(& stdout), 6, (long long )stdout, 8);
  __CrownSetCallerCalleeName(225, "main", "fflush");
# 124 "target.c"
  fflush(stdout);
  __CrownEnableSymbolic(227, "main");
  __CrownClearStack(226);
# 125 "target.c"
  __CrownInt(& orderMatrix[0][0], cnt_symbolic_var___4, 125, (char *)"target.c", "orderMatrix[0][0]");
  __CrownLoad(230, (unsigned long )(& cnt_symbolic_var___4), 5, (long long )cnt_symbolic_var___4,
              (double )cnt_symbolic_var___4);
  __CrownLoad(229, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(228, 0, 5, (long long )(cnt_symbolic_var___4 + 1), (double )(cnt_symbolic_var___4 + 1));
  __CrownStore(231, (unsigned long )(& cnt_symbolic_var___4));
# 125 "target.c"
  cnt_symbolic_var___4 ++;
  __CrownLoad(232, (unsigned long )0, 6, (long long )((char * __restrict )"orderMatrix[0][0]=%d\n"),
              8);
  __CrownLoad(233, (unsigned long )(& orderMatrix[0][0]), 5, (long long )orderMatrix[0][0],
              (double )orderMatrix[0][0]);
  __CrownSetCallerCalleeName(234, "main", "printf");
# 125 "target.c"
  printf((char * __restrict )"orderMatrix[0][0]=%d\n", orderMatrix[0][0]);
  __CrownEnableSymbolic(236, "main");
  __CrownClearStack(235);
  __CrownLoad(237, (unsigned long )(& stdout), 6, (long long )stdout, 8);
  __CrownSetCallerCalleeName(238, "main", "fflush");
# 125 "target.c"
  fflush(stdout);
  __CrownEnableSymbolic(240, "main");
  __CrownClearStack(239);
# 126 "target.c"
  __CrownInt(& orderMatrix[0][1], cnt_symbolic_var___5, 126, (char *)"target.c", "orderMatrix[0][1]");
  __CrownLoad(243, (unsigned long )(& cnt_symbolic_var___5), 5, (long long )cnt_symbolic_var___5,
              (double )cnt_symbolic_var___5);
  __CrownLoad(242, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(241, 0, 5, (long long )(cnt_symbolic_var___5 + 1), (double )(cnt_symbolic_var___5 + 1));
  __CrownStore(244, (unsigned long )(& cnt_symbolic_var___5));
# 126 "target.c"
  cnt_symbolic_var___5 ++;
  __CrownLoad(245, (unsigned long )0, 6, (long long )((char * __restrict )"orderMatrix[0][1]=%d\n"),
              8);
  __CrownLoad(246, (unsigned long )(& orderMatrix[0][1]), 5, (long long )orderMatrix[0][1],
              (double )orderMatrix[0][1]);
  __CrownSetCallerCalleeName(247, "main", "printf");
# 126 "target.c"
  printf((char * __restrict )"orderMatrix[0][1]=%d\n", orderMatrix[0][1]);
  __CrownEnableSymbolic(249, "main");
  __CrownClearStack(248);
  __CrownLoad(250, (unsigned long )(& stdout), 6, (long long )stdout, 8);
  __CrownSetCallerCalleeName(251, "main", "fflush");
# 126 "target.c"
  fflush(stdout);
  __CrownEnableSymbolic(253, "main");
  __CrownClearStack(252);
# 127 "target.c"
  __CrownInt(& orderMatrix[0][2], cnt_symbolic_var___6, 127, (char *)"target.c", "orderMatrix[0][2]");
  __CrownLoad(256, (unsigned long )(& cnt_symbolic_var___6), 5, (long long )cnt_symbolic_var___6,
              (double )cnt_symbolic_var___6);
  __CrownLoad(255, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(254, 0, 5, (long long )(cnt_symbolic_var___6 + 1), (double )(cnt_symbolic_var___6 + 1));
  __CrownStore(257, (unsigned long )(& cnt_symbolic_var___6));
# 127 "target.c"
  cnt_symbolic_var___6 ++;
  __CrownLoad(258, (unsigned long )0, 6, (long long )((char * __restrict )"orderMatrix[0][2]=%d\n"),
              8);
  __CrownLoad(259, (unsigned long )(& orderMatrix[0][2]), 5, (long long )orderMatrix[0][2],
              (double )orderMatrix[0][2]);
  __CrownSetCallerCalleeName(260, "main", "printf");
# 127 "target.c"
  printf((char * __restrict )"orderMatrix[0][2]=%d\n", orderMatrix[0][2]);
  __CrownEnableSymbolic(262, "main");
  __CrownClearStack(261);
  __CrownLoad(263, (unsigned long )(& stdout), 6, (long long )stdout, 8);
  __CrownSetCallerCalleeName(264, "main", "fflush");
# 127 "target.c"
  fflush(stdout);
  __CrownEnableSymbolic(266, "main");
  __CrownClearStack(265);
# 128 "target.c"
  __CrownInt(& orderMatrix[0][3], cnt_symbolic_var___7, 128, (char *)"target.c", "orderMatrix[0][3]");
  __CrownLoad(269, (unsigned long )(& cnt_symbolic_var___7), 5, (long long )cnt_symbolic_var___7,
              (double )cnt_symbolic_var___7);
  __CrownLoad(268, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(267, 0, 5, (long long )(cnt_symbolic_var___7 + 1), (double )(cnt_symbolic_var___7 + 1));
  __CrownStore(270, (unsigned long )(& cnt_symbolic_var___7));
# 128 "target.c"
  cnt_symbolic_var___7 ++;
  __CrownLoad(271, (unsigned long )0, 6, (long long )((char * __restrict )"orderMatrix[0][3]=%d\n"),
              8);
  __CrownLoad(272, (unsigned long )(& orderMatrix[0][3]), 5, (long long )orderMatrix[0][3],
              (double )orderMatrix[0][3]);
  __CrownSetCallerCalleeName(273, "main", "printf");
# 128 "target.c"
  printf((char * __restrict )"orderMatrix[0][3]=%d\n", orderMatrix[0][3]);
  __CrownEnableSymbolic(275, "main");
  __CrownClearStack(274);
  __CrownLoad(276, (unsigned long )(& stdout), 6, (long long )stdout, 8);
  __CrownSetCallerCalleeName(277, "main", "fflush");
# 128 "target.c"
  fflush(stdout);
  __CrownEnableSymbolic(279, "main");
  __CrownClearStack(278);
# 129 "target.c"
  __CrownInt(& orderMatrix[1][0], cnt_symbolic_var___8, 129, (char *)"target.c", "orderMatrix[1][0]");
  __CrownLoad(282, (unsigned long )(& cnt_symbolic_var___8), 5, (long long )cnt_symbolic_var___8,
              (double )cnt_symbolic_var___8);
  __CrownLoad(281, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(280, 0, 5, (long long )(cnt_symbolic_var___8 + 1), (double )(cnt_symbolic_var___8 + 1));
  __CrownStore(283, (unsigned long )(& cnt_symbolic_var___8));
# 129 "target.c"
  cnt_symbolic_var___8 ++;
  __CrownLoad(284, (unsigned long )0, 6, (long long )((char * __restrict )"orderMatrix[1][0]=%d\n"),
              8);
  __CrownLoad(285, (unsigned long )(& orderMatrix[1][0]), 5, (long long )orderMatrix[1][0],
              (double )orderMatrix[1][0]);
  __CrownSetCallerCalleeName(286, "main", "printf");
# 129 "target.c"
  printf((char * __restrict )"orderMatrix[1][0]=%d\n", orderMatrix[1][0]);
  __CrownEnableSymbolic(288, "main");
  __CrownClearStack(287);
  __CrownLoad(289, (unsigned long )(& stdout), 6, (long long )stdout, 8);
  __CrownSetCallerCalleeName(290, "main", "fflush");
# 129 "target.c"
  fflush(stdout);
  __CrownEnableSymbolic(292, "main");
  __CrownClearStack(291);
# 130 "target.c"
  __CrownInt(& orderMatrix[1][1], cnt_symbolic_var___9, 130, (char *)"target.c", "orderMatrix[1][1]");
  __CrownLoad(295, (unsigned long )(& cnt_symbolic_var___9), 5, (long long )cnt_symbolic_var___9,
              (double )cnt_symbolic_var___9);
  __CrownLoad(294, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(293, 0, 5, (long long )(cnt_symbolic_var___9 + 1), (double )(cnt_symbolic_var___9 + 1));
  __CrownStore(296, (unsigned long )(& cnt_symbolic_var___9));
# 130 "target.c"
  cnt_symbolic_var___9 ++;
  __CrownLoad(297, (unsigned long )0, 6, (long long )((char * __restrict )"orderMatrix[1][1]=%d\n"),
              8);
  __CrownLoad(298, (unsigned long )(& orderMatrix[1][1]), 5, (long long )orderMatrix[1][1],
              (double )orderMatrix[1][1]);
  __CrownSetCallerCalleeName(299, "main", "printf");
# 130 "target.c"
  printf((char * __restrict )"orderMatrix[1][1]=%d\n", orderMatrix[1][1]);
  __CrownEnableSymbolic(301, "main");
  __CrownClearStack(300);
  __CrownLoad(302, (unsigned long )(& stdout), 6, (long long )stdout, 8);
  __CrownSetCallerCalleeName(303, "main", "fflush");
# 130 "target.c"
  fflush(stdout);
  __CrownEnableSymbolic(305, "main");
  __CrownClearStack(304);
# 131 "target.c"
  __CrownInt(& orderMatrix[1][2], cnt_symbolic_var___10, 131, (char *)"target.c",
             "orderMatrix[1][2]");
  __CrownLoad(308, (unsigned long )(& cnt_symbolic_var___10), 5, (long long )cnt_symbolic_var___10,
              (double )cnt_symbolic_var___10);
  __CrownLoad(307, (unsigned long )0, 5, (long long )1, (double )1);
  __CrownApply2(306, 0, 5, (long long )(cnt_symbolic_var___10 + 1), (double )(cnt_symbolic_var___10 + 1));
  __CrownStore(309, (unsigned long )(& cnt_symbolic_var___10));
# 131 "target.c"
  cnt_symbolic_var___10 ++;
  __CrownLoad(310, (unsigned long )0, 6, (long long )((char * __restrict )"orderMatrix[1][2]=%d\n"),
              8);
  __CrownLoad(311, (unsigned long )(& orderMatrix[1][2]), 5, (long long )orderMatrix[1][2],
              (double )orderMatrix[1][2]);
  __CrownSetCallerCalleeName(312, "main", "printf");
# 131 "target.c"
  printf((char * __restrict )"orderMatrix[1][2]=%d\n", orderMatrix[1][2]);
  __CrownEnableSymbolic(314, "main");
  __CrownClearStack(313);
  __CrownLoad(315, (unsigned long )(& stdout), 6, (long long )stdout, 8);
  __CrownSetCallerCalleeName(316, "main", "fflush");
# 131 "target.c"
  fflush(stdout);
  __CrownEnableSymbolic(318, "main");
  __CrownClearStack(317);
  __CrownLoad(319, (unsigned long )0, 6, (long long )((char * __restrict )"path:\n"),
              8);
  __CrownSetCallerCalleeName(320, "main", "printf");
# 132 "target.c"
  printf((char * __restrict )"path:\n");
  __CrownEnableSymbolic(322, "main");
  __CrownClearStack(321);
  __CrownLoad(323, (unsigned long )(& stdout), 6, (long long )stdout, 8);
  __CrownSetCallerCalleeName(324, "main", "fflush");
# 132 "target.c"
  fflush(stdout);
  __CrownEnableSymbolic(326, "main");
  __CrownClearStack(325);
  __CrownSetCallerCalleeName(327, "main", "isButtonPressed");
# 133 "target.c"
  __iv__return_expr_isButtonPressed = isButtonPressed();
  __CrownEnableSymbolic(330, "main");
  __CrownHandleReturn(329, 5, (long long )__iv__return_expr_isButtonPressed, (double )__iv__return_expr_isButtonPressed);
  __CrownStore(328, (unsigned long )(& __iv__return_expr_isButtonPressed));
# 134 "target.c"
  while (1) {
    while_continue: ;
    {
    __CrownLoad(334, (unsigned long )(& __iv__max_path), 5, (long long )__iv__max_path,
                (double )__iv__max_path);
    __CrownLoad(333, (unsigned long )0, 5, (long long )10000, (double )10000);
    __CrownApply2(332, 20, 5, (long long )(__iv__max_path < 10000), (double )(__iv__max_path < 10000));
    __CrownApply1(331, 26, 5, (long long )(! (__iv__max_path < 10000)), (double )(! (__iv__max_path < 10000)));
# 134 "target.c"
    if (! (__iv__max_path < 10000)) {
      __CrownBranch(335, 59, 1, 135, "target.c");
      __CrownLoad(338, (unsigned long )(& stderr), 6, (long long )stderr, 8);
      __CrownApply1(337, 27, 6, (long long )((FILE * __restrict )stderr), 8);
      __CrownLoad(339, (unsigned long )0, 6, (long long )((char * __restrict )"### SYM_assume(%s) is violated at Line %d (%s in %s) ###\n"),
                  8);
      __CrownLoad(340, (unsigned long )0, 6, (long long )"__iv__max_path < 10000",
                  8);
      __CrownLoad(341, (unsigned long )0, 5, (long long )134, (double )134);
      __CrownLoad(342, (unsigned long )0, 6, (long long )"main", 8);
      __CrownLoad(343, (unsigned long )0, 6, (long long )"target.c", 8);
      __CrownSetCallerCalleeName(344, "main", "fprintf");
# 134 "target.c"
      fprintf((FILE * __restrict )stderr, (char * __restrict )"### SYM_assume(%s) is violated at Line %d (%s in %s) ###\n",
              "__iv__max_path < 10000", 134, "main", "target.c");
      __CrownEnableSymbolic(346, "main");
      __CrownClearStack(345);
      __CrownLoad(347, (unsigned long )0, 6, (long long )((char * __restrict )"__SYM_assume_violated"),
                  8);
      __CrownLoad(348, (unsigned long )0, 6, (long long )((char * __restrict )"w"),
                  8);
      __CrownSetCallerCalleeName(349, "main", "fopen");
# 134 "target.c"
      tmp = fopen((char * __restrict )"__SYM_assume_violated", (char * __restrict )"w");
      __CrownEnableSymbolic(352, "main");
      __CrownHandleReturn(351, 6, (long long )tmp, 8);
      __CrownStore(350, (unsigned long )(& tmp));
      __CrownLoad(353, (unsigned long )(& tmp), 6, (long long )tmp, 8);
      __CrownStore(354, (unsigned long )(& f));
# 134 "target.c"
      f = tmp;
      {
      __CrownLoad(356, (unsigned long )(& f), 6, (long long )f, 8);
      __CrownApply1(355, 26, 5, (long long )(! f), (double )(! f));
# 134 "target.c"
      if (! f) {
        __CrownBranch(357, 61, 1, 135, "target.c");
        __CrownLoad(360, (unsigned long )(& stderr), 6, (long long )stderr, 8);
        __CrownApply1(359, 27, 6, (long long )((FILE * __restrict )stderr), 8);
        __CrownLoad(361, (unsigned long )0, 6, (long long )((char * __restrict )"### %s file cannot be created ###\n"),
                    8);
        __CrownLoad(362, (unsigned long )0, 6, (long long )"__SYM_assume_violated",
                    8);
        __CrownSetCallerCalleeName(363, "main", "fprintf");
# 134 "target.c"
        fprintf((FILE * __restrict )stderr, (char * __restrict )"### %s file cannot be created ###\n",
                "__SYM_assume_violated");
        __CrownEnableSymbolic(365, "main");
        __CrownClearStack(364);
      }
# 134 "target.c"
        else {
        __CrownBranch(358, 62, 0, 135, "target.c");
        __CrownLoad(366, (unsigned long )(& f), 6, (long long )f, 8);
        __CrownSetCallerCalleeName(367, "main", "fclose");
# 134 "target.c"
        fclose(f);
        __CrownEnableSymbolic(369, "main");
        __CrownClearStack(368);
      }
      }
      __CrownLoad(370, (unsigned long )0, 5, (long long )1, (double )1);
      __CrownSetCallerCalleeName(371, "main", "exit");
# 134 "target.c"
      exit(1);
      __CrownEnableSymbolic(373, "main");
      __CrownClearStack(372);
    }
# 134 "target.c"
      else {
      __CrownBranch(336, 64, 0, 135, "target.c");

    }
    }
# 134 "target.c"
    goto while_break;
  }
  while_break:
  __CrownLoad(374, (unsigned long )0, 6, (long long )((char * __restrict )"output:\n"),
              8);
  __CrownSetCallerCalleeName(375, "main", "printf");
# 135 "target.c"
  printf((char * __restrict )"output:\n");
  __CrownEnableSymbolic(377, "main");
  __CrownClearStack(376);
  __CrownLoad(378, (unsigned long )(& stdout), 6, (long long )stdout, 8);
  __CrownSetCallerCalleeName(379, "main", "fflush");
# 135 "target.c"
  fflush(stdout);
  __CrownEnableSymbolic(381, "main");
  __CrownClearStack(380);
  __CrownLoad(382, (unsigned long )0, 6, (long long )((char * __restrict )"__iv__return_expr_isButtonPressed=%d\n"),
              8);
  __CrownLoad(383, (unsigned long )(& __iv__return_expr_isButtonPressed), 5, (long long )__iv__return_expr_isButtonPressed,
              (double )__iv__return_expr_isButtonPressed);
  __CrownSetCallerCalleeName(384, "main", "printf");
# 136 "target.c"
  printf((char * __restrict )"__iv__return_expr_isButtonPressed=%d\n", __iv__return_expr_isButtonPressed);
  __CrownEnableSymbolic(386, "main");
  __CrownClearStack(385);
  __CrownLoad(387, (unsigned long )(& stdout), 6, (long long )stdout, 8);
  __CrownSetCallerCalleeName(388, "main", "fflush");
# 136 "target.c"
  fflush(stdout);
  __CrownEnableSymbolic(390, "main");
  __CrownClearStack(389);
  __CrownLoad(391, (unsigned long )0, 5, (long long )0, (double )0);
  __CrownStore(392, (unsigned long )(& __retres4));
# 137 "target.c"
  __retres4 = 0;
  __CrownLoad(393, (unsigned long )(& __retres4), 5, (long long )__retres4, (double )__retres4);
  __CrownReturn(394);
# 117 "target.c"
  return (__retres4);
}
}
void __globinit_target(void)
{


  {
  __CrownInit(395);
}
}

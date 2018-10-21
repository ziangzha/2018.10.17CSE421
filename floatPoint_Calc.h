#ifndef THREADS_DOUBLE_CALC_H
#define THREADS_DOUBLE_CALC_H


 typedef int double_Type;
 #define DC_DOUBLE_AMOUNT 16
 #define DC_CONVER(X) ((double_Type)(X << DC_DOUBLE_AMOUNT))
 #define DC_ADD(X,Y) (X + Y)
 #define DC_ADDWITHINT(X,Y) (X + (Y << DC_DOUBLE_AMOUNT))
 #define DC_SUB(X,Y) (X - Y)
 #define DC_SUBWITHINT(X,Y) (X - (Y << DC_DOUBLE_AMOUNT))
 #define DC_MULT(X,Y) (X * Y)
 #define DC_MULTWITHINT(X,Y) ((double_Type)(((int64_t) X) * Y >> DC_DOUBLE_AMOUNT))
 #define DC_DIV(X,Y) (X / Y)
 #define DC_DIVWITHINT(X,Y) ((double_Type)((((int64_t) A) << DC_DOUBLE_AMOUNT) / B))
 #define DC_ONLYINT(X) (X >> DC_DOUBLE_AMOUNT)
 #define DC_ROUND(X) (X >= 0 ? ((X + (1 << (DC_DOUBLE_AMOUNT - 1))) >> DC_DOUBLE_AMOUNT) \
         : ((X - (1 << (DC_DOUBLE_AMOUNT - 1))) >> DC_DOUBLE_AMOUNT))
 #endif
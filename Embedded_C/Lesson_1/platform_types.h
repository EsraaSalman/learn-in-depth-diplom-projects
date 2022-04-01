/**************************************************************************************************************
 Learn_In_Depth_Diploma                                                                                       *
 Name        : platform.h                                                                                     *
 Author      : Esraa_Salman                                                                                   *
 Description : Write a platform types                                                                         *
 **************************************************************************************************************/
#ifndef PLATFORM_TYPES_H_
#define PLATFORM_TYPES_H_
/**************************************************************************************************************
 *                                               Boolean Data Type                                            *
 **************************************************************************************************************/
typedef unsigned char bool;
/**************************************************************************************************************
 *                                               Boolean Values                                               *
 **************************************************************************************************************/
#ifndef FALSE
#define FALSE       (0u)
#endif

#ifndef TRUE
#define TRUE        (1u)
#endif

#define HIGH        (1u)
#define LOW         (0u)

#define SUCCESS     (1u)
#define FAIL        (0u)
/**************************************************************************************************************
 *                                               Null pointer                                                 *
 **************************************************************************************************************/
#define NULL_PTR    ((void*)0)
/**************************************************************************************************************
 *                                               Char Data Type                                               *
 **************************************************************************************************************/
typedef unsigned char                  uint8;
typedef signed char                    sint8;
typedef static unsigned char           s_uint8;
typedef static signed char		       s_sint8;
typedef register unsigned char         r_uint8;
typedef register signed char		   r_sint8;
typedef volatile unsigned char         v_uint8;
typedef volatile signed char		   v_uint8;
/**************************************************************************************************************
 *                                              Short Data Type                                                *
 **************************************************************************************************************/
typedef unsigned short                 uint16;
typedef signed short                   sint16;
typedef static unsigned short          s_uint16;
typedef static signed short		       s_sint16;
typedef register unsigned short        r_uint16;
typedef register signed short		   r_sint16;
typedef volatile unsigned short        v_uint16;
typedef volatile signed short		   v_uint16;
/**************************************************************************************************************
 *                                               Long Data Type                                               *
 **************************************************************************************************************/
typedef unsigned long                  uint32;
typedef signed long                    sint32;
typedef static unsigned long           s_uint32;
typedef static signed long		       s_sint32;
typedef register unsigned long         r_uint32;
typedef register signed long		   r_sint32;
typedef volatile unsigned long         v_uint32;
typedef volatile signed long		   v_uint32;
/**************************************************************************************************************
 *                                               Long Long Data Type                                          *
 **************************************************************************************************************/
typedef unsigned long long             uint64;
typedef signed long long               sint64;
typedef static unsigned long long      s_uint64;
typedef static signed long long		   s_sint64;
typedef register unsigned long long    r_uint64;
typedef register signed long long	   r_sint64;
typedef volatile unsigned long long    v_uint64;
typedef volatile signed long long	   v_uint64;
/**************************************************************************************************************
 *                                               Float Data Type                                              *
 **************************************************************************************************************/
typedef float                          float32;
typedef static float                   s_float32;
typedef register float                 r_float32;
typedef volatile float                 v_float32;
/**************************************************************************************************************
 *                                               Double Data Type                                             *
 **************************************************************************************************************/
typedef double                         float64;
typedef static double                  s_float64;
typedef register double                r_float64;
typedef volatile double		           v_float64;


#endif /* PLATFORM_TYPES_H_ */

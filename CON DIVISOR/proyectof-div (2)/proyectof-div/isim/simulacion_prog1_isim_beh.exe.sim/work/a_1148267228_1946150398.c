/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Alejandro Reyes/Desktop/uno/proyectof/extsig.vhd";
extern char *IEEE_P_2592010699;



static void work_a_1148267228_1946150398_p_0(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(22, ng0);

LAB3:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = (11 - 11);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 3176);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast(t8);

LAB2:    t13 = (t0 + 3080);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1148267228_1946150398_p_1(char *t0)
{
    char t6[16];
    char t11[16];
    char t16[16];
    char t20[16];
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    char *t12;
    char *t13;
    char *t14;
    unsigned char t15;
    char *t17;
    char *t18;
    char *t19;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned char t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;

LAB0:    xsi_set_current_line(24, ng0);

LAB3:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 1352U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t7 = ((IEEE_P_2592010699) + 4024);
    t1 = xsi_base_array_concat(t1, t6, t7, (char)99, t3, (char)99, t5, (char)101);
    t8 = (t0 + 1352U);
    t9 = *((char **)t8);
    t10 = *((unsigned char *)t9);
    t12 = ((IEEE_P_2592010699) + 4024);
    t8 = xsi_base_array_concat(t8, t11, t12, (char)97, t1, t6, (char)99, t10, (char)101);
    t13 = (t0 + 1352U);
    t14 = *((char **)t13);
    t15 = *((unsigned char *)t14);
    t17 = ((IEEE_P_2592010699) + 4024);
    t13 = xsi_base_array_concat(t13, t16, t17, (char)97, t8, t11, (char)99, t15, (char)101);
    t18 = (t0 + 1032U);
    t19 = *((char **)t18);
    t21 = ((IEEE_P_2592010699) + 4024);
    t22 = (t0 + 4936U);
    t18 = xsi_base_array_concat(t18, t20, t21, (char)97, t13, t16, (char)97, t19, t22, (char)101);
    t23 = (1U + 1U);
    t24 = (t23 + 1U);
    t25 = (t24 + 1U);
    t26 = (t25 + 12U);
    t27 = (16U != t26);
    if (t27 == 1)
        goto LAB5;

LAB6:    t28 = (t0 + 3240);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memcpy(t32, t18, 16U);
    xsi_driver_first_trans_fast_port(t28);

LAB2:    t33 = (t0 + 3096);
    *((int *)t33) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(16U, t26, 0);
    goto LAB6;

}


extern void work_a_1148267228_1946150398_init()
{
	static char *pe[] = {(void *)work_a_1148267228_1946150398_p_0,(void *)work_a_1148267228_1946150398_p_1};
	xsi_register_didat("work_a_1148267228_1946150398", "isim/simulacion_prog1_isim_beh.exe.sim/work/a_1148267228_1946150398.didat");
	xsi_register_executes(pe);
}

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
static const char *ng0 = "C:/Users/Alejandro Reyes/Desktop/uno/proyectof/bs.vhd";



static void work_a_1633651022_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    int t6;
    int t7;
    char *t8;
    char *t9;
    int t10;
    int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned char t16;
    unsigned char t17;
    char *t18;
    char *t19;
    char *t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;

LAB0:    xsi_set_current_line(17, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 1808U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    memcpy(t1, t2, 16U);
    xsi_set_current_line(19, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t5 = (t4 == (unsigned char)3);
    if (t5 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(35, ng0);
    t1 = (t0 + 5093);
    *((int *)t1) = 0;
    t2 = (t0 + 5097);
    *((int *)t2) = 3;
    t6 = 0;
    t7 = 3;

LAB21:    if (t6 <= t7)
        goto LAB22;

LAB24:
LAB3:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 1808U);
    t2 = *((char **)t1);
    t1 = (t0 + 3192);
    t3 = (t1 + 56U);
    t8 = *((char **)t3);
    t9 = (t8 + 56U);
    t15 = *((char **)t9);
    memcpy(t15, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);
    t1 = (t0 + 3112);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(20, ng0);
    t1 = (t0 + 5077);
    *((int *)t1) = 0;
    t3 = (t0 + 5081);
    *((int *)t3) = 3;
    t6 = 0;
    t7 = 3;

LAB5:    if (t6 <= t7)
        goto LAB6;

LAB8:    goto LAB3;

LAB6:    xsi_set_current_line(21, ng0);
    t8 = (t0 + 1032U);
    t9 = *((char **)t8);
    t8 = (t0 + 5077);
    t10 = *((int *)t8);
    t11 = (t10 - 3);
    t12 = (t11 * -1);
    xsi_vhdl_check_range_of_index(3, 0, -1, *((int *)t8));
    t13 = (1U * t12);
    t14 = (0 + t13);
    t15 = (t9 + t14);
    t16 = *((unsigned char *)t15);
    t17 = (t16 == (unsigned char)2);
    if (t17 != 0)
        goto LAB9;

LAB11:    xsi_set_current_line(24, ng0);
    t1 = (t0 + 5085);
    *((int *)t1) = 15;
    t2 = (t0 + 5089);
    *((int *)t2) = 0;
    t10 = 15;
    t11 = 0;

LAB12:    if (t10 >= t11)
        goto LAB13;

LAB15:
LAB10:
LAB7:    t1 = (t0 + 5077);
    t6 = *((int *)t1);
    t2 = (t0 + 5081);
    t7 = *((int *)t2);
    if (t6 == t7)
        goto LAB8;

LAB20:    t10 = (t6 + 1);
    t6 = t10;
    t3 = (t0 + 5077);
    *((int *)t3) = t6;
    goto LAB5;

LAB9:    xsi_set_current_line(22, ng0);
    t18 = (t0 + 1808U);
    t19 = *((char **)t18);
    t18 = (t0 + 1808U);
    t20 = *((char **)t18);
    t18 = (t20 + 0);
    memcpy(t18, t19, 16U);
    goto LAB10;

LAB13:    xsi_set_current_line(25, ng0);
    t3 = (t0 + 5085);
    t8 = (t0 + 5077);
    t21 = xsi_vhdl_pow(2, *((int *)t8));
    t22 = *((int *)t3);
    t4 = (t22 < t21);
    if (t4 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(28, ng0);
    t1 = (t0 + 1808U);
    t2 = *((char **)t1);
    t1 = (t0 + 5085);
    t3 = (t0 + 5077);
    t21 = xsi_vhdl_pow(2, *((int *)t3));
    t22 = *((int *)t1);
    t23 = (t22 - t21);
    t24 = (t23 - 15);
    t12 = (t24 * -1);
    xsi_vhdl_check_range_of_index(15, 0, -1, t23);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t8 = (t2 + t14);
    t4 = *((unsigned char *)t8);
    t9 = (t0 + 1808U);
    t15 = *((char **)t9);
    t9 = (t0 + 5085);
    t25 = *((int *)t9);
    t26 = (t25 - 15);
    t27 = (t26 * -1);
    xsi_vhdl_check_range_of_index(15, 0, -1, *((int *)t9));
    t28 = (1U * t27);
    t29 = (0 + t28);
    t18 = (t15 + t29);
    *((unsigned char *)t18) = t4;

LAB17:
LAB14:    t1 = (t0 + 5085);
    t10 = *((int *)t1);
    t2 = (t0 + 5089);
    t11 = *((int *)t2);
    if (t10 == t11)
        goto LAB15;

LAB19:    t21 = (t10 + -1);
    t10 = t21;
    t3 = (t0 + 5085);
    *((int *)t3) = t10;
    goto LAB12;

LAB16:    xsi_set_current_line(26, ng0);
    t9 = (t0 + 1808U);
    t15 = *((char **)t9);
    t9 = (t0 + 5085);
    t23 = *((int *)t9);
    t24 = (t23 - 15);
    t12 = (t24 * -1);
    xsi_vhdl_check_range_of_index(15, 0, -1, *((int *)t9));
    t13 = (1U * t12);
    t14 = (0 + t13);
    t18 = (t15 + t14);
    *((unsigned char *)t18) = (unsigned char)2;
    goto LAB17;

LAB22:    xsi_set_current_line(36, ng0);
    t3 = (t0 + 1032U);
    t8 = *((char **)t3);
    t3 = (t0 + 5093);
    t10 = *((int *)t3);
    t11 = (t10 - 3);
    t12 = (t11 * -1);
    xsi_vhdl_check_range_of_index(3, 0, -1, *((int *)t3));
    t13 = (1U * t12);
    t14 = (0 + t13);
    t9 = (t8 + t14);
    t4 = *((unsigned char *)t9);
    t5 = (t4 == (unsigned char)2);
    if (t5 != 0)
        goto LAB25;

LAB27:    xsi_set_current_line(39, ng0);
    t1 = (t0 + 5101);
    *((int *)t1) = 0;
    t2 = (t0 + 5105);
    *((int *)t2) = 15;
    t10 = 0;
    t11 = 15;

LAB28:    if (t10 <= t11)
        goto LAB29;

LAB31:
LAB26:
LAB23:    t1 = (t0 + 5093);
    t6 = *((int *)t1);
    t2 = (t0 + 5097);
    t7 = *((int *)t2);
    if (t6 == t7)
        goto LAB24;

LAB36:    t10 = (t6 + 1);
    t6 = t10;
    t3 = (t0 + 5093);
    *((int *)t3) = t6;
    goto LAB21;

LAB25:    xsi_set_current_line(37, ng0);
    t15 = (t0 + 1808U);
    t18 = *((char **)t15);
    t15 = (t0 + 1808U);
    t19 = *((char **)t15);
    t15 = (t19 + 0);
    memcpy(t15, t18, 16U);
    goto LAB26;

LAB29:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 5101);
    t8 = (t0 + 5093);
    t21 = xsi_vhdl_pow(2, *((int *)t8));
    t22 = (16 - t21);
    t23 = *((int *)t3);
    t4 = (t23 >= t22);
    if (t4 != 0)
        goto LAB32;

LAB34:    xsi_set_current_line(43, ng0);
    t1 = (t0 + 1808U);
    t2 = *((char **)t1);
    t1 = (t0 + 5101);
    t3 = (t0 + 5093);
    t21 = xsi_vhdl_pow(2, *((int *)t3));
    t22 = *((int *)t1);
    t23 = (t22 + t21);
    t24 = (t23 - 15);
    t12 = (t24 * -1);
    xsi_vhdl_check_range_of_index(15, 0, -1, t23);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t8 = (t2 + t14);
    t4 = *((unsigned char *)t8);
    t9 = (t0 + 1808U);
    t15 = *((char **)t9);
    t9 = (t0 + 5101);
    t25 = *((int *)t9);
    t26 = (t25 - 15);
    t27 = (t26 * -1);
    xsi_vhdl_check_range_of_index(15, 0, -1, *((int *)t9));
    t28 = (1U * t27);
    t29 = (0 + t28);
    t18 = (t15 + t29);
    *((unsigned char *)t18) = t4;

LAB33:
LAB30:    t1 = (t0 + 5101);
    t10 = *((int *)t1);
    t2 = (t0 + 5105);
    t11 = *((int *)t2);
    if (t10 == t11)
        goto LAB31;

LAB35:    t21 = (t10 + 1);
    t10 = t21;
    t3 = (t0 + 5101);
    *((int *)t3) = t10;
    goto LAB28;

LAB32:    xsi_set_current_line(41, ng0);
    t9 = (t0 + 1808U);
    t15 = *((char **)t9);
    t9 = (t0 + 5101);
    t24 = *((int *)t9);
    t25 = (t24 - 15);
    t12 = (t25 * -1);
    xsi_vhdl_check_range_of_index(15, 0, -1, *((int *)t9));
    t13 = (1U * t12);
    t14 = (0 + t13);
    t18 = (t15 + t14);
    *((unsigned char *)t18) = (unsigned char)2;
    goto LAB33;

}


extern void work_a_1633651022_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1633651022_3212880686_p_0};
	xsi_register_didat("work_a_1633651022_3212880686", "isim/sim2_isim_beh.exe.sim/work/a_1633651022_3212880686.didat");
	xsi_register_executes(pe);
}

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
static const char *ng0 = "C:/Users/Alejandro Reyes/Desktop/uno/proyectof/demux.vhd";



static void work_a_2649835155_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    int t9;
    int t10;
    char *t11;
    int t13;
    char *t14;
    int t16;
    char *t17;
    int t19;
    char *t20;
    int t22;
    char *t23;
    int t25;
    char *t26;
    int t28;
    char *t29;
    int t31;
    char *t32;
    int t34;
    char *t35;
    int t37;
    char *t38;
    int t40;
    char *t41;
    int t43;
    char *t44;
    int t46;
    char *t47;
    char *t48;
    unsigned char t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;

LAB0:    xsi_set_current_line(16, ng0);
    t1 = xsi_get_transient_memory(16U);
    memset(t1, 0, 16U);
    t2 = t1;
    memset(t2, (unsigned char)2, 16U);
    t3 = (t0 + 2912);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 16U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(18, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 4649);
    t8 = xsi_mem_cmp(t1, t2, 4U);
    if (t8 == 1)
        goto LAB3;

LAB19:    t4 = (t0 + 4653);
    t9 = xsi_mem_cmp(t4, t2, 4U);
    if (t9 == 1)
        goto LAB4;

LAB20:    t6 = (t0 + 4657);
    t10 = xsi_mem_cmp(t6, t2, 4U);
    if (t10 == 1)
        goto LAB5;

LAB21:    t11 = (t0 + 4661);
    t13 = xsi_mem_cmp(t11, t2, 4U);
    if (t13 == 1)
        goto LAB6;

LAB22:    t14 = (t0 + 4665);
    t16 = xsi_mem_cmp(t14, t2, 4U);
    if (t16 == 1)
        goto LAB7;

LAB23:    t17 = (t0 + 4669);
    t19 = xsi_mem_cmp(t17, t2, 4U);
    if (t19 == 1)
        goto LAB8;

LAB24:    t20 = (t0 + 4673);
    t22 = xsi_mem_cmp(t20, t2, 4U);
    if (t22 == 1)
        goto LAB9;

LAB25:    t23 = (t0 + 4677);
    t25 = xsi_mem_cmp(t23, t2, 4U);
    if (t25 == 1)
        goto LAB10;

LAB26:    t26 = (t0 + 4681);
    t28 = xsi_mem_cmp(t26, t2, 4U);
    if (t28 == 1)
        goto LAB11;

LAB27:    t29 = (t0 + 4685);
    t31 = xsi_mem_cmp(t29, t2, 4U);
    if (t31 == 1)
        goto LAB12;

LAB28:    t32 = (t0 + 4689);
    t34 = xsi_mem_cmp(t32, t2, 4U);
    if (t34 == 1)
        goto LAB13;

LAB29:    t35 = (t0 + 4693);
    t37 = xsi_mem_cmp(t35, t2, 4U);
    if (t37 == 1)
        goto LAB14;

LAB30:    t38 = (t0 + 4697);
    t40 = xsi_mem_cmp(t38, t2, 4U);
    if (t40 == 1)
        goto LAB15;

LAB31:    t41 = (t0 + 4701);
    t43 = xsi_mem_cmp(t41, t2, 4U);
    if (t43 == 1)
        goto LAB16;

LAB32:    t44 = (t0 + 4705);
    t46 = xsi_mem_cmp(t44, t2, 4U);
    if (t46 == 1)
        goto LAB17;

LAB33:
LAB18:    xsi_set_current_line(34, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t49 = *((unsigned char *)t2);
    t1 = (t0 + 2912);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = t49;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);

LAB2:    t1 = (t0 + 2832);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(19, ng0);
    t47 = (t0 + 1192U);
    t48 = *((char **)t47);
    t49 = *((unsigned char *)t48);
    t47 = (t0 + 2912);
    t50 = (t47 + 56U);
    t51 = *((char **)t50);
    t52 = (t51 + 56U);
    t53 = *((char **)t52);
    *((unsigned char *)t53) = t49;
    xsi_driver_first_trans_delta(t47, 15U, 1, 0LL);
    goto LAB2;

LAB4:    xsi_set_current_line(20, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t49 = *((unsigned char *)t2);
    t1 = (t0 + 2912);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = t49;
    xsi_driver_first_trans_delta(t1, 14U, 1, 0LL);
    goto LAB2;

LAB5:    xsi_set_current_line(21, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t49 = *((unsigned char *)t2);
    t1 = (t0 + 2912);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = t49;
    xsi_driver_first_trans_delta(t1, 13U, 1, 0LL);
    goto LAB2;

LAB6:    xsi_set_current_line(22, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t49 = *((unsigned char *)t2);
    t1 = (t0 + 2912);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = t49;
    xsi_driver_first_trans_delta(t1, 12U, 1, 0LL);
    goto LAB2;

LAB7:    xsi_set_current_line(23, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t49 = *((unsigned char *)t2);
    t1 = (t0 + 2912);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = t49;
    xsi_driver_first_trans_delta(t1, 11U, 1, 0LL);
    goto LAB2;

LAB8:    xsi_set_current_line(24, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t49 = *((unsigned char *)t2);
    t1 = (t0 + 2912);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = t49;
    xsi_driver_first_trans_delta(t1, 10U, 1, 0LL);
    goto LAB2;

LAB9:    xsi_set_current_line(25, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t49 = *((unsigned char *)t2);
    t1 = (t0 + 2912);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = t49;
    xsi_driver_first_trans_delta(t1, 9U, 1, 0LL);
    goto LAB2;

LAB10:    xsi_set_current_line(26, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t49 = *((unsigned char *)t2);
    t1 = (t0 + 2912);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = t49;
    xsi_driver_first_trans_delta(t1, 8U, 1, 0LL);
    goto LAB2;

LAB11:    xsi_set_current_line(27, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t49 = *((unsigned char *)t2);
    t1 = (t0 + 2912);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = t49;
    xsi_driver_first_trans_delta(t1, 7U, 1, 0LL);
    goto LAB2;

LAB12:    xsi_set_current_line(28, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t49 = *((unsigned char *)t2);
    t1 = (t0 + 2912);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = t49;
    xsi_driver_first_trans_delta(t1, 6U, 1, 0LL);
    goto LAB2;

LAB13:    xsi_set_current_line(29, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t49 = *((unsigned char *)t2);
    t1 = (t0 + 2912);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = t49;
    xsi_driver_first_trans_delta(t1, 5U, 1, 0LL);
    goto LAB2;

LAB14:    xsi_set_current_line(30, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t49 = *((unsigned char *)t2);
    t1 = (t0 + 2912);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = t49;
    xsi_driver_first_trans_delta(t1, 4U, 1, 0LL);
    goto LAB2;

LAB15:    xsi_set_current_line(31, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t49 = *((unsigned char *)t2);
    t1 = (t0 + 2912);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = t49;
    xsi_driver_first_trans_delta(t1, 3U, 1, 0LL);
    goto LAB2;

LAB16:    xsi_set_current_line(32, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t49 = *((unsigned char *)t2);
    t1 = (t0 + 2912);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = t49;
    xsi_driver_first_trans_delta(t1, 2U, 1, 0LL);
    goto LAB2;

LAB17:    xsi_set_current_line(33, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t49 = *((unsigned char *)t2);
    t1 = (t0 + 2912);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = t49;
    xsi_driver_first_trans_delta(t1, 1U, 1, 0LL);
    goto LAB2;

LAB34:;
}


extern void work_a_2649835155_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2649835155_3212880686_p_0};
	xsi_register_didat("work_a_2649835155_3212880686", "isim/sim2_isim_beh.exe.sim/work/a_2649835155_3212880686.didat");
	xsi_register_executes(pe);
}

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

#include "xsi.h"

struct XSI_INFO xsi_info;

char *STD_STANDARD;
char *IEEE_P_3499444699;
char *WORK_P_0450891074;
char *IEEE_P_3620187407;
char *WORK_P_0286164271;
char *IEEE_P_2592010699;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    work_p_0286164271_init();
    work_p_0450891074_init();
    ieee_p_3499444699_init();
    ieee_p_3620187407_init();
    work_a_2253722718_3212880686_init();
    work_a_3222946569_3212880686_init();
    work_a_3566821725_3212880686_init();
    work_a_3030143565_3212880686_init();
    work_a_2855971615_3212880686_init();
    work_a_2945137688_3212880686_init();
    work_a_0220645150_3212880686_init();
    work_a_1878588406_3212880686_init();
    work_a_3781425724_3212880686_init();
    work_a_0371666713_3212880686_init();
    work_a_0817145216_1993769338_init();
    work_a_2016291610_3212880686_init();
    work_a_0827584957_3212880686_init();
    work_a_0737135909_3212880686_init();
    work_a_1633651022_3212880686_init();
    work_a_2649835155_3212880686_init();
    work_a_3322906180_3212880686_init();
    work_a_1492497583_3212880686_init();
    work_a_3738562969_3212880686_init();
    work_a_1148267228_1946150398_init();
    work_a_1282468404_1946150398_init();
    work_a_2653701675_1946150398_init();
    work_a_2360975601_3212880686_init();
    work_a_3863512822_3212880686_init();
    work_a_3787226611_2372691052_init();


    xsi_register_tops("work_a_3787226611_2372691052");

    STD_STANDARD = xsi_get_engine_memory("std_standard");
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    WORK_P_0450891074 = xsi_get_engine_memory("work_p_0450891074");
    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");
    WORK_P_0286164271 = xsi_get_engine_memory("work_p_0286164271");
    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);

    return xsi_run_simulation(argc, argv);

}

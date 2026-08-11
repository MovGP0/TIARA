/* Ghidra address: 00db5c60 */
/* Ghidra symbol: FUN_00db5c60 */


void FUN_00db5c60(longlong param_1,longlong param_2,undefined4 param_3,char param_4,double *param_5,
                 double *param_6,char *param_7)

{
  char cVar1;
  undefined2 uVar2;
  longlong lVar3;
  int iVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  ulonglong in_stack_fffffffffffffe78;
  undefined8 local_158;
  double local_150 [4];
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  undefined8 local_100;
  double local_f8;
  double local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  double local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  undefined8 local_90;
  
  local_b0 = *param_5;
  local_a8 = param_5[1];
  local_a0 = param_5[2];
  local_98 = param_5[3];
  local_90 = param_5[4];
  pdVar5 = local_150;
  for (lVar3 = 0x14; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pdVar5 = *param_6;
    param_6 = param_6 + 1;
    pdVar5 = pdVar5 + 1;
  }
  dVar14 = local_d8 + 273.15;
  local_a8 = (double)FUN_00b90650(local_a8,0x426d1a94a2000000);
  local_a8 = (double)FUN_00b90620(local_a8,0x3d719799812dea11);
  dVar6 = (double)FUN_0040c850(local_110 - 1.0);
  if (dVar6 < 0.001) {
    local_110 = 0.999;
  }
  if (local_f8 < 0.1) {
    local_f8 = 0.1;
  }
  if (0.95 < local_108) {
    local_108 = 0.95;
  }
  FUN_0040c2f0(1.0 - local_108);
  *(double *)(param_7 + 0xd0) = local_108;
  *(double *)(param_7 + 0x98) = local_b0 * 8.61708745588933e-05;
  dVar13 = local_b0 / 300.15;
  dVar7 = local_b0 * 0.000702 * local_b0;
  dVar12 = local_b0 + 1108.0;
  dVar8 = local_b0 * 2.7612452e-23;
  dVar9 = (double)FUN_0040c2f0(dVar13);
  dVar6 = *(double *)(param_7 + 0x98);
  dVar10 = (double)FUN_0040c2f0(dVar14 / 300.15);
  dVar10 = (local_118 -
           dVar14 * 8.61708745588933e-05 * -2.0 *
           (dVar10 * 1.5 +
           (-(1.16 - (dVar14 * 0.000702 * dVar14) / (dVar14 + 1108.0)) / (dVar14 * 2.7612452e-23) +
           1.3454442398941469e+20) * 1.6021917e-19)) / (dVar14 / 300.15);
  *(double *)(param_7 + 0xb8) =
       local_120 / (local_110 * ((dVar14 - 300.15) * 0.0004 - (local_118 - dVar10) / dVar10) + 1.0);
  *(double *)(param_7 + 0xc0) =
       dVar6 * -2.0 *
       (dVar9 * 1.5 + (-(1.16 - dVar7 / dVar12) / dVar8 + 1.3454442398941469e+20) * 1.6021917e-19) +
       dVar13 * dVar10;
  *(double *)(param_7 + 0xb8) =
       *(double *)(param_7 + 0xb8) *
       (local_110 * ((local_b0 - 300.15) * 0.0004 - (*(double *)(param_7 + 0xc0) - dVar10) / dVar10)
       + 1.0);
  dVar6 = (double)FUN_0040c2f0(local_b0 / dVar14);
  uVar11 = FUN_00b90650(0x403c000000000000,
                        ((local_b0 / dVar14 - 1.0) * local_f8) /
                        (local_150[1] * *(double *)(param_7 + 0x98)) +
                        (local_f0 / local_150[1]) * dVar6);
  uVar11 = FUN_00b90620(0xc03c000000000000,uVar11);
  dVar6 = (double)FUN_0040af80(uVar11);
  *(double *)(param_7 + 0x28) = local_150[0] * dVar6;
  *(double *)(param_7 + 0xa0) = local_150[1];
  *(double *)(param_7 + 0x30) = local_150[1] * *(double *)(param_7 + 0x98);
  param_7[0x80] = '\0';
  param_7[0x81] = '\0';
  param_7[0x82] = '\0';
  param_7[0x83] = '\0';
  param_7[0x84] = '\0';
  param_7[0x85] = '\0';
  param_7[0x86] = '\0';
  param_7[0x87] = '\0';
  local_150[2] = (double)FUN_00b90620(local_150[2],0);
  *(double *)(param_7 + 0xb0) = local_150[2];
  if (*(double *)(param_7 + 0xb0) <= 1e+29 && *(double *)(param_7 + 0xb0) != 1e+29) {
    if (local_130 <
        (*(double *)(param_7 + 0x28) * *(double *)(param_7 + 0xb0)) / *(double *)(param_7 + 0x30)) {
      local_130 = (*(double *)(param_7 + 0x28) * *(double *)(param_7 + 0xb0)) /
                  *(double *)(param_7 + 0x30);
    }
    if (local_150[3] == 0.0) {
      *(undefined8 *)(param_7 + 0xa8) = *(undefined8 *)(param_7 + 0xa0);
      dVar6 = 0.0;
    }
    else {
      local_150[3] = (double)FUN_00b90620(local_150[3],local_128 + 0.01);
      local_150[3] = (double)FUN_00b90650(local_150[3],0x408f400000000000);
      *(double *)(param_7 + 0xa8) =
           ((local_150[3] - local_128) * (local_130 - *(double *)(param_7 + 0x28))) /
           *(double *)(param_7 + 0x98);
      dVar6 = local_128 * local_130;
    }
    uVar11 = FUN_00b90660(*(undefined8 *)(param_7 + 0xa8),0x4059000000000000,0x3f50624dd2f1a9fc);
    *(undefined8 *)(param_7 + 0xa8) = uVar11;
    *(double *)(param_7 + 0x80) = *(double *)(param_7 + 0xa8) * *(double *)(param_7 + 0x98);
    dVar7 = (double)FUN_0040c2f0(local_130 / *(double *)(param_7 + 0x28) + 1.0);
    dVar14 = *(double *)(param_7 + 0x98);
    dVar7 = (double)FUN_00b90620((*(double *)(param_7 + 0xb0) - *(double *)(param_7 + 0x30) * 3.0) /
                                 dVar7,dVar14 * 0.001);
    dVar8 = (double)FUN_0040c2f0(local_130 / *(double *)(param_7 + 0x28) + 1.0);
    if (*(double *)(param_7 + 0xb0) - *(double *)(param_7 + 0x80) * dVar8 <
        *(double *)(param_7 + 0x30) * 3.0) {
      *(double *)(param_7 + 0x80) = dVar7;
    }
    if ((local_130 <
         (*(double *)(param_7 + 0x28) * *(double *)(param_7 + 0xb0)) / *(double *)(param_7 + 0x80))
       && (*(double *)(param_7 + 0x80) =
                (*(double *)(param_7 + 0xb0) * *(double *)(param_7 + 0x28)) / local_130,
          dVar7 < *(double *)(param_7 + 0x80))) {
      *(double *)(param_7 + 0x80) = dVar7;
      local_130 = (*(double *)(param_7 + 0x28) * *(double *)(param_7 + 0xb0)) /
                  *(double *)(param_7 + 0x80);
    }
    uVar11 = FUN_00b90620(*(undefined8 *)(param_7 + 0x80),dVar14 * 0.001);
    *(undefined8 *)(param_7 + 0x80) = uVar11;
    *(double *)(param_7 + 0xa8) = *(double *)(param_7 + 0x80) / *(double *)(param_7 + 0x98);
    dVar7 = *(double *)(param_2 + 0x6c0) * local_130;
    dVar14 = (double)FUN_0040c2f0(local_130 / *(double *)(param_7 + 0x28) + 1.0);
    dVar14 = (*(double *)(param_7 + 0xb0) - *(double *)(param_7 + 0x80) * dVar14) - dVar6;
    iVar4 = 0;
    do {
      dVar14 = (double)FUN_0040c2f0((local_130 / *(double *)(param_7 + 0x28) -
                                    dVar14 / *(double *)(param_7 + 0x80)) + 1.0);
      dVar14 = (*(double *)(param_7 + 0xb0) - *(double *)(param_7 + 0x80) * dVar14) - dVar6;
      dVar8 = (double)FUN_00c42a20(((*(double *)(param_7 + 0xb0) - dVar14) - dVar6) /
                                   *(double *)(param_7 + 0x80));
      iVar4 = iVar4 + 1;
      if (0x19 < iVar4) break;
      dVar8 = (double)FUN_0040c850(*(double *)(param_7 + 0x28) *
                                   ((dVar8 + dVar14 / *(double *)(param_7 + 0x80)) - 1.0) -
                                   local_130);
    } while (dVar7 < dVar8);
    if (iVar4 < 0x19) {
      *(double *)(param_7 + 0xb0) = dVar14;
    }
    else {
      dVar6 = (double)FUN_0040c2f0(local_130 / *(double *)(param_7 + 0x28) + 1.0);
      *(double *)(param_7 + 0xb0) =
           *(double *)(param_7 + 0xb0) - *(double *)(param_7 + 0x80) * dVar6;
    }
  }
  *(double *)(param_7 + 0xf0) = local_b0;
  *(double *)(param_7 + 0xb8) = local_a8 * *(double *)(param_7 + 0xb8);
  param_7[0x90] = '\0';
  param_7[0x91] = '\0';
  param_7[0x92] = '\0';
  param_7[0x93] = '\0';
  param_7[0x94] = '\0';
  param_7[0x95] = '\0';
  param_7[0x96] = '\0';
  param_7[0x97] = '\0';
  *(double *)(param_7 + 200) = local_110;
  *(undefined8 *)(param_7 + 0xd8) = local_100;
  param_7[8] = '\0';
  param_7[9] = '\0';
  param_7[10] = '\0';
  param_7[0xb] = '\0';
  param_7[0xc] = '\0';
  param_7[0xd] = '\0';
  param_7[0xe] = '\0';
  param_7[0xf] = '\0';
  uVar11 = FUN_00b90620(local_e8,0);
  *(undefined8 *)(param_7 + 0xe0) = uVar11;
  *(undefined8 *)(param_7 + 0xe8) = local_e0;
  param_7[1] = local_90._1_1_;
  *(double *)(param_7 + 0x28) = local_a8 * *(double *)(param_7 + 0x28);
  if (*(double *)(param_7 + 0x80) == 0.0) {
    *(undefined8 *)(param_7 + 0x80) = *(undefined8 *)(param_7 + 0x30);
  }
  uVar11 = FUN_0040c2f0(*(double *)(param_7 + 0x30) /
                        (*(double *)(param_7 + 0x28) * 1.4142135623730951 * local_a8));
  dVar6 = (double)FUN_00b90620(0x3eb0c6f7a0b5ed8d,uVar11);
  *(double *)(param_7 + 0x38) = *(double *)(param_7 + 0x30) * dVar6;
  uVar11 = FUN_0040c2f0(*(double *)(param_7 + 0x80) /
                        (*(double *)(param_7 + 0x28) * 1.4142135623730951 * local_a8));
  dVar6 = (double)FUN_00b90620(0x3eb0c6f7a0b5ed8d,uVar11);
  *(double *)(param_7 + 0x88) = *(double *)(param_7 + 0x80) * dVar6;
  *(undefined8 *)(param_7 + 0x20) = *(undefined8 *)(param_7 + 0x38);
  param_7[0x40] = local_a0._0_1_;
  *(double *)(param_7 + 0x48) = local_98;
  param_7[0x41] = (char)local_90 == '\0';
  *(undefined8 *)(param_7 + 0x58) = local_d0;
  *(undefined8 *)(param_7 + 0x60) = local_c8;
  *(undefined8 *)(param_7 + 0x68) = local_c0;
  *(undefined8 *)(param_7 + 0x70) = local_b8;
  param_7[2] = (char)param_3;
  param_7[4] = param_4;
  local_128 = local_128 / local_a8;
  param_7[3] = param_4;
  cVar1 = FUN_016e9e80(param_1,3);
  *param_7 = cVar1;
  uVar2 = FUN_016ea1b0(param_1,6);
  *(undefined2 *)(param_7 + 0x78) = uVar2;
  uVar2 = FUN_016ea1b0(param_1,6);
  *(undefined2 *)(param_7 + 0x7a) = uVar2;
  param_7[0xf8] = -1;
  param_7[0xf9] = -1;
  param_7[0xfa] = -1;
  param_7[0xfb] = -1;
  FUN_016ebe60(param_1,*param_7 + '\x01',param_3,param_7[3],
               in_stack_fffffffffffffe78 & 0xffffffffffffff00);
  FUN_016ed1a0(param_1,*param_7 + '\x02',param_3,param_7[3]);
  FUN_016ebfa0(param_1,*param_7 + '\x03',param_3,param_7[3],1);
  FUN_016ed220(param_1,*param_7 + '\x03',*(undefined8 *)(param_7 + 0xb8),0);
  lVar3 = *(longlong *)(param_1 + 0x130);
  local_158 = FUN_00db3f10(&PTR_FUN_00db3608,1,param_1,param_2,local_150,param_7);
  FUN_00597e50(lVar3 + 8,&local_158);
  return;
}


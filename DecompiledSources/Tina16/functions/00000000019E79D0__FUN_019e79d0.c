/* Ghidra address: 019e79d0 */
/* Ghidra symbol: FUN_019e79d0 */


void FUN_019e79d0(char *param_1,undefined8 param_2,longlong param_3,char param_4)

{
  int iVar1;
  undefined8 in_RAX;
  char *pcVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double local_b0 [19];
  
  if ((byte)(param_4 - 8U) < 8) {
    bVar3 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (param_4 - 8U & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar3 = false;
  }
  if (!bVar3) {
    if ((*(byte *)(param_3 + 0x88) & 0x20) != 0) {
      return;
    }
    dVar4 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[2],param_1[1],0);
    dVar5 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[3] + '\x05',
                                 param_1[1],0);
    dVar6 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[3] + '\x0f',
                                 param_1[1],0);
    dVar7 = (double)FUN_016ee520(param_2,*(undefined8 *)(param_3 + 0x118),*param_1 + '\x01',1,0);
    uVar8 = FUN_0040c850(dVar4);
    dVar9 = (double)FUN_019e6660(0x409f400000000000,0x409f400000000000,uVar8,local_b0);
    iVar1 = FUN_00c42630(dVar4);
    local_b0[0] = (double)iVar1 * local_b0[0];
    FUN_016ed320(param_2,*param_1 + '\x05',dVar9 - local_b0[0] * dVar4,local_b0[0],0);
    dVar10 = (double)FUN_019e6660(0x3f1a36e2eb1c432d,0x4024000000000000,
                                  dVar6 / 1000.0 - *(double *)(param_1 + 8) * 1e-10,local_b0);
    dVar11 = local_b0[0] / 1000.0;
    dVar9 = (double)FUN_0040c850(dVar5);
    dVar12 = (double)FUN_019e6660(0x3f50624dd2f1a9fc,0x4024000000000000,
                                  *(double *)(param_1 + 0x18) *
                                  (dVar9 / *(double *)(param_1 + 0x10) - 0.95),local_b0);
    iVar1 = FUN_00c42630(dVar5);
    dVar18 = (local_b0[0] * (double)iVar1 * *(double *)(param_1 + 0x18)) /
             *(double *)(param_1 + 0x10);
    dVar9 = (double)FUN_0040c850(dVar5);
    dVar13 = (double)FUN_019e6660(0x3ff0000000000000,0x3ff0000000000000,
                                  1.0 - dVar9 / *(double *)(param_1 + 0x10),local_b0);
    iVar1 = FUN_00c42630(dVar5);
    dVar19 = (-local_b0[0] * (double)iVar1) / *(double *)(param_1 + 0x10);
    dVar14 = (double)FUN_019e6660(0x3f1a36e2eb1c432d,0x3ff0000000000000,
                                  (dVar7 - *(double *)(param_1 + 0x20)) +
                                  (dVar5 * 0.005) / *(double *)(param_1 + 0x10),local_b0);
    dVar22 = local_b0[0];
    dVar21 = local_b0[0] * 0.005;
    dVar9 = *(double *)(param_1 + 0x10);
    dVar15 = (double)FUN_019e6660(0x3f1a36e2eb1c432d,0x3ff0000000000000,
                                  dVar4 - (*(double *)(param_1 + 0x20) * *(double *)(param_1 + 0x28)
                                          ) / *(double *)(param_1 + 0x30),local_b0);
    dVar23 = local_b0[0] * dVar14 * 10.0;
    dVar16 = (double)FUN_019e6660(0x3ff0000000000000,0x4024000000000000,
                                  dVar4 - *(double *)(param_1 + 0x38) * 1.05 * dVar13,local_b0);
    dVar17 = local_b0[0];
    dVar24 = -local_b0[0];
    dVar20 = *(double *)(param_1 + 0x38);
    dVar14 = (double)FUN_019e6660(0x4024000000000000,0x4024000000000000,
                                  dVar16 + dVar12 + dVar14 * 10.0 * dVar15 + dVar10,local_b0);
    dVar17 = local_b0[0] * (dVar17 + dVar23);
    dVar20 = local_b0[0] * local_b0[0] *
             (dVar24 * 1.05 * dVar20 * dVar19 + dVar18 + (dVar21 / dVar9) * 10.0 * dVar15);
    dVar9 = local_b0[0] * dVar22 * 10.0 * dVar15;
    dVar22 = local_b0[0] * dVar11;
    FUN_016ed320(param_2,*param_1 + '\t',
                 (((dVar14 - dVar17 * dVar4) - dVar20 * dVar5) - dVar9 * dVar7) - dVar22 * dVar6,0,0
                );
    FUN_016ed220(param_2,*param_1 + '\n',dVar17,0);
    FUN_016ed220(param_2,*param_1 + '\v',dVar20,0);
    FUN_016ed220(param_2,*param_1 + '\f',dVar9,0);
    FUN_016ed220(param_2,*param_1 + '\r',dVar22,0);
    dVar4 = -dVar4;
    dVar7 = (double)FUN_016ee520(param_2,*(undefined8 *)(param_3 + 0x118),*param_1 + '\x02',1,0);
    dVar14 = (double)FUN_019e6660(0x3f1a36e2eb1c432d,0x3ff0000000000000,
                                  (dVar7 - *(double *)(param_1 + 0x20)) -
                                  (dVar5 * 0.005) / *(double *)(param_1 + 0x10),local_b0);
    dVar22 = local_b0[0];
    dVar16 = -local_b0[0];
    dVar9 = *(double *)(param_1 + 0x10);
    dVar15 = (double)FUN_019e6660(0x3f1a36e2eb1c432d,0x3ff0000000000000,
                                  dVar4 - (*(double *)(param_1 + 0x20) * *(double *)(param_1 + 0x28)
                                          ) / *(double *)(param_1 + 0x30),local_b0);
    dVar21 = local_b0[0] * dVar14 * 10.0;
    dVar13 = (double)FUN_019e6660(0x3ff0000000000000,0x4024000000000000,
                                  dVar4 - *(double *)(param_1 + 0x38) * 1.05 * dVar13,local_b0);
    dVar17 = local_b0[0];
    dVar23 = -local_b0[0];
    dVar20 = *(double *)(param_1 + 0x38);
    dVar10 = (double)FUN_019e6660(0x4024000000000000,0x4024000000000000,
                                  dVar13 + dVar12 + dVar14 * 10.0 * dVar15 + dVar10,local_b0);
    dVar17 = local_b0[0] * (dVar17 + dVar21);
    dVar20 = local_b0[0] * local_b0[0] *
             (dVar23 * 1.05 * dVar20 * dVar19 + dVar18 + ((dVar16 * 0.005) / dVar9) * 10.0 * dVar15)
    ;
    dVar9 = local_b0[0] * dVar22 * 10.0 * dVar15;
    dVar11 = local_b0[0] * dVar11;
    FUN_016ed320(param_2,*param_1 + '\x0e',
                 (((dVar10 - dVar17 * dVar4) - dVar20 * dVar5) - dVar9 * dVar7) - dVar11 * dVar6,0,0
                );
    FUN_016ed220(param_2,*param_1 + '\x0f',dVar17,0);
    FUN_016ed220(param_2,*param_1 + '\x10',dVar20,0);
    FUN_016ed220(param_2,*param_1 + '\x11',dVar9,0);
    FUN_016ed220(param_2,*param_1 + '\x12',dVar11,0);
  }
  iVar1 = 8;
  pcVar2 = param_1 + 0x40;
  do {
    FUN_00db23a0(pcVar2,param_2,param_3,param_4);
    pcVar2 = pcVar2 + 0x118;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 2;
  param_1 = param_1 + 0x900;
  do {
    FUN_00f560e0(param_1,param_2,param_3,param_4);
    param_1 = param_1 + 0x88;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


/* Ghidra address: 019e6750 */
/* Ghidra symbol: FUN_019e6750 */


void FUN_019e6750(char *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 in_RAX;
  byte bVar7;
  char *pcVar8;
  int iVar9;
  bool bVar10;
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
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double local_d0 [20];
  
  bVar7 = (char)param_4 - 8;
  if (bVar7 < 8) {
    bVar10 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (bVar7 & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar10 = false;
  }
  if (!bVar10) {
    if ((*(byte *)(param_3 + 0x88) & 0x20) != 0) {
      return;
    }
    dVar11 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[1],param_1[2],0);
    dVar12 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[3] + '\x01',
                                  param_1[2],0);
    dVar13 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[3] + '\x05',
                                  param_1[2],0);
    dVar14 = (double)FUN_016ee520(param_2,*(undefined8 *)(param_3 + 0x118),*param_1 + '\x04',1,0);
    dVar15 = (double)FUN_019e6660(0x409f400000000000,0x409f400000000000,dVar11,local_d0);
    FUN_016ed320(param_2,*param_1 + '\a',dVar15 - local_d0[0] * dVar11,local_d0[0],0);
    dVar16 = (double)FUN_019e6660(0x3f1a36e2eb1c432d,0x4024000000000000,
                                  dVar13 / 1000.0 - *(double *)(param_1 + 8) * 1e-10,local_d0);
    dVar28 = local_d0[0] / 1000.0;
    dVar17 = (double)FUN_019e6660(0x409f400000000000,0x409f400000000000,
                                  dVar14 + (dVar12 * 5e-05) / *(double *)(param_1 + 0x10),local_d0);
    dVar6 = local_d0[0];
    dVar30 = local_d0[0] * 5e-05;
    dVar15 = *(double *)(param_1 + 0x10);
    dVar18 = (double)FUN_019e6660(0x3ff0000000000000,0x3ff0000000000000,dVar11 * dVar17,local_d0);
    dVar17 = local_d0[0] * dVar17;
    dVar25 = local_d0[0] * dVar11;
    dVar26 = local_d0[0] * dVar11;
    dVar19 = (double)FUN_019e6660(0x4000000000000000,0x4024000000000000,
                                  (dVar18 / (*(double *)(param_1 + 0x20) *
                                            *(double *)(param_1 + 0x28)) - 1.0) * 10.0,local_d0);
    dVar20 = local_d0[0] * 10.0;
    dVar18 = *(double *)(param_1 + 0x20);
    dVar29 = *(double *)(param_1 + 0x28);
    dVar21 = local_d0[0] * 10.0;
    dVar1 = *(double *)(param_1 + 0x20);
    dVar2 = *(double *)(param_1 + 0x28);
    dVar22 = local_d0[0] * 10.0;
    dVar3 = *(double *)(param_1 + 0x20);
    dVar4 = *(double *)(param_1 + 0x28);
    dVar23 = (double)FUN_019e6660(0x3f50624dd2f1a9fc,0x4024000000000000,
                                  (dVar12 / *(double *)(param_1 + 0x10) - 0.95) *
                                  *(double *)(param_1 + 0x18),local_d0);
    dVar31 = local_d0[0] * *(double *)(param_1 + 0x18);
    dVar5 = *(double *)(param_1 + 0x10);
    dVar24 = (double)FUN_019e6660(0x4024000000000000,0x4024000000000000,dVar23 * dVar11,local_d0);
    dVar23 = local_d0[0] * dVar23;
    dVar27 = local_d0[0] * dVar11;
    dVar16 = (double)FUN_019e6660(0x4024000000000000,0x4024000000000000,dVar24 + dVar19 + dVar16,
                                  local_d0);
    dVar18 = local_d0[0] * (dVar23 + dVar17 * (dVar20 / (dVar18 * dVar29)));
    dVar15 = local_d0[0] *
             ((dVar31 / dVar5) * dVar27 + (dVar30 / dVar15) * dVar25 * (dVar21 / (dVar1 * dVar2)));
    dVar29 = local_d0[0] * dVar6 * dVar26 * (dVar22 / (dVar3 * dVar4));
    dVar28 = local_d0[0] * dVar28;
    FUN_016ed320(param_2,*param_1 + '\v',
                 (((dVar16 - dVar18 * dVar11) - dVar15 * dVar12) - dVar29 * dVar14) -
                 dVar28 * dVar13,0,0);
    FUN_016ed220(param_2,*param_1 + '\f',dVar18,0);
    FUN_016ed220(param_2,*param_1 + '\r',dVar15,0);
    FUN_016ed220(param_2,*param_1 + '\x0e',dVar29,0);
    FUN_016ed220(param_2,*param_1 + '\x0f',dVar28,0);
  }
  iVar9 = 7;
  pcVar8 = param_1 + 0x30;
  do {
    FUN_00db23a0(pcVar8,param_2,param_3,param_4);
    pcVar8 = pcVar8 + 0x118;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  FUN_00f560e0(param_1 + 0x7d8,param_2,param_3,param_4);
  return;
}


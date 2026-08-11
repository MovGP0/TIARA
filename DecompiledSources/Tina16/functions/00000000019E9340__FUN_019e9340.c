/* Ghidra address: 019e9340 */
/* Ghidra symbol: FUN_019e9340 */


void FUN_019e9340(char *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 in_RAX;
  byte bVar2;
  char *pcVar3;
  bool bVar4;
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
  double local_d0 [20];
  
  bVar2 = (char)param_4 - 8;
  if (bVar2 < 8) {
    bVar4 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (bVar2 & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar4 = false;
  }
  if (!bVar4) {
    if ((*(byte *)(param_3 + 0x88) & 0x20) != 0) {
      return;
    }
    dVar5 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[2],param_1[1],0);
    dVar6 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),param_1[3] + '\x0e',
                                 param_1[1],0);
    dVar7 = (double)FUN_016ee520(param_2,*(undefined8 *)(param_3 + 0x118),*param_1 + '\x01',1,0);
    uVar8 = FUN_0040c850(dVar5);
    dVar9 = (double)FUN_019e6660(0x409f400000000000,0x409f400000000000,uVar8,local_d0);
    iVar1 = FUN_00c42630(dVar5);
    local_d0[0] = (double)iVar1 * local_d0[0];
    FUN_016ed320(param_2,*param_1 + '\x05',dVar9 - local_d0[0] * dVar5,local_d0[0],0);
    dVar10 = (double)FUN_019e6660(0x3f1a36e2eb1c432d,0x4024000000000000,
                                  dVar6 / 1000.0 - *(double *)(param_1 + 8) * 1e-10,local_d0);
    dVar15 = local_d0[0] / 1000.0;
    dVar11 = (double)FUN_019e6660(0x3f1a36e2eb1c432d,0x3ff0000000000000,
                                  dVar7 - *(double *)(param_1 + 0x10),local_d0);
    dVar9 = local_d0[0];
    dVar12 = (double)FUN_019e6660(0x3f1a36e2eb1c432d,0x3ff0000000000000,
                                  dVar5 - (*(double *)(param_1 + 0x10) * *(double *)(param_1 + 0x18)
                                          ) / *(double *)(param_1 + 0x20),local_d0);
    dVar16 = local_d0[0] * dVar11 * 10.0;
    dVar13 = (double)FUN_019e6660(0x3ff0000000000000,0x4024000000000000,
                                  dVar5 - *(double *)(param_1 + 0x28) * 1.05,local_d0);
    dVar14 = local_d0[0];
    dVar11 = (double)FUN_019e6660(0x4024000000000000,0x4024000000000000,
                                  dVar13 + dVar11 * 10.0 * dVar12 + dVar10,local_d0);
    dVar14 = local_d0[0] * (dVar14 + dVar16);
    dVar9 = local_d0[0] * dVar9 * 10.0 * dVar12;
    dVar12 = local_d0[0] * dVar15;
    FUN_016ed320(param_2,*param_1 + '\x06',
                 ((dVar11 - dVar14 * dVar5) - dVar9 * dVar7) - dVar12 * dVar6,0,0);
    FUN_016ed220(param_2,*param_1 + '\a',dVar14,0);
    FUN_016ed220(param_2,*param_1 + '\b',dVar9,0);
    FUN_016ed220(param_2,*param_1 + '\t',dVar12,0);
    dVar5 = -dVar5;
    dVar7 = (double)FUN_016ee520(param_2,*(undefined8 *)(param_3 + 0x118),*param_1 + '\x02',1,0);
    dVar11 = (double)FUN_019e6660(0x3f1a36e2eb1c432d,0x3ff0000000000000,
                                  dVar7 - *(double *)(param_1 + 0x10),local_d0);
    dVar9 = local_d0[0];
    dVar12 = (double)FUN_019e6660(0x3f1a36e2eb1c432d,0x3ff0000000000000,
                                  dVar5 - (*(double *)(param_1 + 0x10) * *(double *)(param_1 + 0x18)
                                          ) / *(double *)(param_1 + 0x20),local_d0);
    dVar16 = local_d0[0] * dVar11 * 10.0;
    dVar13 = (double)FUN_019e6660(0x3ff0000000000000,0x4024000000000000,
                                  dVar5 - *(double *)(param_1 + 0x28) * 1.05,local_d0);
    dVar14 = local_d0[0];
    dVar10 = (double)FUN_019e6660(0x4024000000000000,0x4024000000000000,
                                  dVar13 + dVar11 * 10.0 * dVar12 + dVar10,local_d0);
    dVar14 = local_d0[0] * (dVar14 + dVar16);
    dVar9 = local_d0[0] * dVar9 * 10.0 * dVar12;
    dVar15 = local_d0[0] * dVar15;
    FUN_016ed320(param_2,*param_1 + '\n',
                 ((dVar10 - dVar14 * dVar5) - dVar9 * dVar7) - dVar15 * dVar6,0,0);
    FUN_016ed220(param_2,*param_1 + '\v',dVar14,0);
    FUN_016ed220(param_2,*param_1 + '\f',dVar9,0);
    FUN_016ed220(param_2,*param_1 + '\r',dVar15,0);
  }
  iVar1 = 6;
  pcVar3 = param_1 + 0x30;
  do {
    FUN_00db23a0(pcVar3,param_2,param_3,param_4);
    pcVar3 = pcVar3 + 0x118;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 2;
  param_1 = param_1 + 0x6c0;
  do {
    FUN_00f560e0(param_1,param_2,param_3,param_4);
    param_1 = param_1 + 0x88;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


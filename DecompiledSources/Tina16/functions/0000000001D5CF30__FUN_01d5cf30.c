/* Ghidra address: 01d5cf30 */
/* Ghidra symbol: FUN_01d5cf30 */


void FUN_01d5cf30(undefined8 param_1,longlong param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  double *pdVar7;
  double *pdVar8;
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
  undefined8 in_stack_fffffffffffffdd8;
  undefined4 uVar19;
  ulonglong in_stack_fffffffffffffde0;
  undefined1 local_1e8 [32];
  undefined8 local_1c8;
  char local_1b9;
  undefined8 local_1b8;
  double local_1b0 [5];
  undefined8 local_188;
  double local_158;
  undefined8 local_150;
  double local_118;
  double local_110;
  double local_108;
  double local_100 [6];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  
  uVar19 = (undefined4)((ulonglong)in_stack_fffffffffffffdd8 >> 0x20);
  local_1c8 = 0;
  if (*(char *)(param_2 + 0x339) != '\0') {
    FUN_016eacf0(param_1,9,3);
  }
  pdVar7 = (double *)&DAT_01ffead8;
  pdVar8 = local_100;
  for (lVar6 = 9; lVar6 != 0; lVar6 = lVar6 + -1) {
    *pdVar8 = *pdVar7;
    pdVar7 = pdVar7 + 1;
    pdVar8 = pdVar8 + 1;
  }
  pdVar7 = (double *)&DAT_01ffeb20;
  pdVar8 = local_1b0;
  for (lVar6 = 0x16; lVar6 != 0; lVar6 = lVar6 + -1) {
    *pdVar8 = *pdVar7;
    pdVar7 = pdVar7 + 1;
    pdVar8 = pdVar8 + 1;
  }
  FUN_016ea450(local_1e8,param_1,2);
  FUN_004169a0(&local_1c8,local_1e8);
  uVar5 = FUN_016ebdc0(param_1);
  local_c0 = FUN_01b08260(param_2,uVar5,local_1c8,&DAT_01ffebd0,CONCAT44(uVar19,1),
                          in_stack_fffffffffffffde0 & 0xffffffffffffff00);
  local_c8 = FUN_016eb0a0(param_1,3);
  uVar5 = FUN_00b90650(0x3ff0000000000000,local_c8);
  local_c8 = FUN_00b90620(0,uVar5);
  local_d0 = FUN_016ea920(param_1,4,5,&local_1b9);
  if (local_1b9 == '\x01') {
    local_d0 = 0x3fb999999999999a;
  }
  else if (local_1b9 == '\x02') {
    local_d0 = 0x3f847ae147ae147b;
  }
  else if (local_1b9 == '\x03') {
    local_d0 = 0x3f1a36e2eb1c432d;
  }
  else if (local_1b9 == '\x04') {
    local_d0 = 0x3e45798ee2308c3a;
  }
  uVar5 = FUN_00b90650(0x3ff0000000000000,local_d0);
  local_d0 = FUN_00b90620(0,uVar5);
  cVar1 = FUN_016eacf0(param_1,5,2);
  local_100[0] = (double)FUN_016eb0a0(param_1,6);
  local_100[0] = local_100[0] + 273.15;
  if (cVar1 == '\0') {
    dVar9 = (double)FUN_016ed770(param_2);
    local_100[0] = local_100[0] + dVar9;
  }
  sVar2 = FUN_016eaa90(param_1,7);
  iVar3 = FUN_00b905e0((longlong)sVar2,1);
  sVar2 = FUN_016eaa90(param_1,8);
  iVar4 = FUN_00b905e0((longlong)sVar2,1);
  dVar9 = (double)FUN_016eb990(param_1,1,1);
  uVar5 = FUN_00b90650(0x40f86a0000000000,dVar9 * (double)iVar3);
  dVar9 = (double)FUN_00b90620(0x3eb0c6f7a0b5ed8d,uVar5);
  dVar10 = (double)FUN_016eb990(param_1,1,2);
  uVar5 = FUN_00b90650(0x40f86a0000000000,dVar10 * (double)iVar4);
  dVar10 = (double)FUN_00b90620(0x3d719799812dea11,uVar5);
  local_118 = (double)FUN_016eb990(param_1,1,3);
  uVar5 = FUN_00b90650(0x41cdcd6500000000,local_118);
  local_118 = (double)FUN_00b90620(0,uVar5);
  uVar5 = FUN_016eb990(param_1,1,4);
  uVar5 = FUN_00b90650(0x41cdcd6500000000,uVar5);
  dVar11 = (double)FUN_00b90620(0,uVar5);
  dVar12 = (double)FUN_016eb990(param_1,1,5);
  dVar12 = dVar12 * (double)iVar3;
  if (dVar12 < 1e-30) {
    dVar12 = dVar9 * 0.8;
  }
  uVar5 = FUN_00b90650(0x40f86a0000000000,dVar12);
  dVar12 = (double)FUN_00b90620(0x3eb0c6f7a0b5ed8d,uVar5);
  dVar13 = (double)FUN_016eb990(param_1,1,6);
  dVar13 = dVar13 * (double)iVar4;
  if (dVar13 < 1e-30) {
    dVar13 = dVar10 * 0.9;
  }
  uVar5 = FUN_00b90650(0x40f86a0000000000,dVar13);
  dVar13 = (double)FUN_00b90620(0x3d719799812dea11,uVar5);
  local_100[1] = (double)FUN_016eb990(param_1,1,7);
  local_100[1] = local_100[1] + 273.15;
  dVar14 = (double)FUN_016eb990(param_1,1,8);
  dVar15 = (double)FUN_016eb990(param_1,1,9);
  dVar16 = (double)FUN_016eb990(param_1,1,10);
  dVar17 = (double)FUN_016eb990(param_1,1,0xb);
  local_108 = (dVar17 * (double)iVar3) / (double)iVar4;
  uVar5 = FUN_00b90650(0x426d1a94a2000000,local_108);
  local_108 = (double)FUN_00b90620(dVar9 / (dVar10 - dVar13),uVar5);
  local_110 = dVar10 / (dVar11 * local_118);
  local_118 = local_118 * 100.0;
  dVar18 = dVar10 - dVar9 / local_108;
  dVar17 = local_100[1] * 8.61708745588933e-05;
  local_1b0[0] = 1e-14;
  dVar11 = (double)FUN_0040c2f0(dVar18 / 1e-14 + 1.0);
  local_1b0[1] = dVar9 / (dVar17 * dVar11);
  dVar9 = (double)FUN_00b90620(local_1b0[0],(dVar10 - dVar13) - dVar9 / local_108);
  dVar9 = (double)FUN_0040c2f0(dVar9 / local_1b0[0] + 1.0);
  dVar11 = local_1b0[1] * dVar17 * dVar9;
  dVar9 = 1.0 / local_100[1];
  dVar17 = local_100[1] + 1.0;
  dVar10 = (double)FUN_0040c2f0(dVar18 / local_1b0[0]);
  local_158 = (-(dVar15 / 100.0 - dVar9) * dVar10 * local_1b0[1] * dVar17 * 8.61708745588933e-05) /
              (1.0 / local_100[1]);
  local_150 = 0;
  local_188 = FUN_00b90620(0,((dVar11 - dVar12) / dVar13) *
                             ((local_100[0] - local_100[1]) *
                              ((1.0 - ((dVar14 / 100.0 + 1.0) / (dVar15 / 100.0 + 1.0)) /
                                      (dVar16 / 100.0 + 1.0)) / dVar13) + 1.0));
  FUN_016ee260(param_1,&local_1b8,0x140,0);
  FUN_01d5be90(param_1,param_2,1,2,local_100,local_1b0,local_1b8);
  FUN_016e9f40(param_1,FUN_01d5cee0);
  FUN_016e9f60(param_1,FUN_01d5ce80);
  FUN_016e9fb0(param_1,FUN_01d5cec0);
  FUN_016e9fd0(param_1,FUN_01d5cea0);
  FUN_00414480(&local_1c8);
  return;
}


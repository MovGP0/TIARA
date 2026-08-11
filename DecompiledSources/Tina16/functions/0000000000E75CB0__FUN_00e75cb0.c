/* Ghidra address: 00e75cb0 */
/* Ghidra symbol: FUN_00e75cb0 */


void FUN_00e75cb0(undefined8 param_1,undefined2 param_2,undefined1 param_3,undefined1 param_4,
                 undefined1 param_5,double *param_6,double *param_7,undefined2 *param_8)

{
  char cVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  longlong lVar5;
  double *pdVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  ulonglong in_stack_fffffffffffffeb8;
  ulonglong uVar10;
  double local_120 [6];
  double local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  double local_78 [2];
  undefined1 local_68;
  undefined8 local_60;
  undefined8 local_58;
  char local_50;
  char local_4f;
  char local_4e;
  
  pdVar6 = local_78;
  for (lVar5 = 6; lVar5 != 0; lVar5 = lVar5 + -1) {
    *pdVar6 = *param_6;
    param_6 = param_6 + 1;
    pdVar6 = pdVar6 + 1;
  }
  pdVar6 = local_120;
  for (lVar5 = 0x15; lVar5 != 0; lVar5 = lVar5 + -1) {
    *pdVar6 = *param_7;
    param_7 = param_7 + 1;
    pdVar6 = pdVar6 + 1;
  }
  local_78[1] = (double)FUN_00b90650(local_78[1],0x426d1a94a2000000);
  local_78[1] = (double)FUN_00b90620(local_78[1],0x3d719799812dea11);
  dVar9 = (local_78[0] - 300.15) * local_c0;
  dVar7 = (double)FUN_0040c850(dVar9);
  if (500.0 < dVar7) {
    iVar4 = FUN_00c42630(dVar9);
    dVar9 = (double)(iVar4 * 500);
  }
  *param_8 = param_2;
  dVar7 = (double)FUN_00c42670(0x3ff028f5c28f5c29,dVar9);
  *(double *)(param_8 + 0x38) = local_78[1] * local_120[1] * dVar7;
  *(double *)(param_8 + 0x34) = local_120[0] + (local_78[0] - 300.15) * local_c8;
  *(double *)(param_8 + 0x3c) = local_120[2];
  *(double *)(param_8 + 0x40) = (local_78[0] * 1.3806226e-23) / 1.6021917e-19;
  dVar7 = (double)FUN_00c42670(local_78[0] / 300.15,0x4008000000000000);
  dVar9 = (double)FUN_0040af80((local_d0 / *(double *)(param_8 + 0x40)) *
                               (local_78[0] / 300.15 - 1.0));
  *(double *)(param_8 + 0x44) = local_78[1] * local_d8 * dVar7 * dVar9;
  *(double *)(param_8 + 0x48) = local_78[1] * local_120[5];
  *(double *)(param_8 + 0x4c) = local_78[1] * local_f0;
  *(undefined8 *)(param_8 + 0x54) = local_e8;
  *(undefined8 *)(param_8 + 0x50) = local_e0;
  *(undefined8 *)(param_8 + 8) = 0;
  *(undefined8 *)(param_8 + 0x1c) = 0;
  uVar8 = FUN_00b90620(local_b8,0);
  *(undefined8 *)(param_8 + 0x58) = uVar8;
  *(undefined8 *)(param_8 + 0x5c) = local_b0;
  dVar7 = (double)FUN_0040c760(0x4000000000000000);
  dVar7 = (double)FUN_0040c2f0(*(double *)(param_8 + 0x40) / (dVar7 * *(double *)(param_8 + 0x44)));
  *(double *)(param_8 + 0x60) = *(double *)(param_8 + 0x40) * dVar7;
  *(double *)(param_8 + 100) = local_78[0];
  *(undefined8 *)(param_8 + 0x2c) = 0;
  *(undefined8 *)(param_8 + 0x30) = 0;
  *(char *)((longlong)param_8 + 3) = local_4e;
  *(undefined1 *)(param_8 + 0x88) = local_68;
  *(undefined8 *)(param_8 + 0x80) = local_60;
  *(undefined8 *)(param_8 + 0x84) = local_58;
  *(bool *)((longlong)param_8 + 0x111) = local_50 == '\0';
  *(bool *)(param_8 + 0x89) = local_4f == '\0';
  *(undefined8 *)(param_8 + 0x68) = local_a8;
  *(undefined8 *)(param_8 + 0x6c) = local_a0;
  *(undefined8 *)(param_8 + 0x70) = local_98;
  *(undefined8 *)(param_8 + 0x74) = local_90;
  *(undefined8 *)(param_8 + 0x78) = local_88;
  *(undefined8 *)(param_8 + 0x7c) = local_80;
  if (local_4e == '\x01') {
    local_120[4] = 1000000000.0;
  }
  else if (local_4e == '\x02') {
    local_120[3] = 1000000000.0;
  }
  *(undefined1 *)(param_8 + 3) = param_4;
  *(undefined1 *)(param_8 + 2) = param_3;
  *(undefined1 *)((longlong)param_8 + 7) = param_5;
  if (local_120[4] == 0.0) {
    *(undefined1 *)(param_8 + 4) = param_5;
  }
  else {
    local_120[4] = local_120[4] / local_78[1];
    cVar1 = FUN_016e9d10(param_1,1);
    *(char *)(param_8 + 4) = cVar1 + '\x01';
    cVar1 = FUN_016e9e80(param_1,2);
    *(char *)(param_8 + 1) = cVar1;
    FUN_016ebe60(param_1,cVar1 + '\x01',*(undefined1 *)(param_8 + 4),
                 *(undefined1 *)((longlong)param_8 + 7),1);
    in_stack_fffffffffffffeb8 = 0;
    FUN_016ed320(param_1,*(char *)(param_8 + 1) + '\x01',0,1.0 / local_120[4],0);
    FUN_016ed1a0(param_1,*(char *)(param_8 + 1) + '\x02',*(undefined1 *)(param_8 + 4),
                 *(undefined1 *)((longlong)param_8 + 7));
    if (local_120[4] <= 0.0) {
      uVar8 = 0;
    }
    else {
      uVar8 = FUN_0040c760((local_78[0] * 5.5224904e-23) / local_120[4]);
    }
    FUN_016ed220(param_1,*(char *)(param_8 + 1) + '\x02',uVar8,0);
  }
  if (local_120[3] == 0.0) {
    *(undefined1 *)((longlong)param_8 + 5) = *(undefined1 *)(param_8 + 2);
  }
  else {
    local_120[3] = local_120[3] / local_78[1];
    cVar1 = FUN_016e9d10(param_1,1);
    *(char *)((longlong)param_8 + 5) = cVar1 + '\x01';
    cVar1 = FUN_016e9e80(param_1,2);
    *(char *)(param_8 + 1) = cVar1;
    FUN_016ebe60(param_1,cVar1 + '\x01',*(undefined1 *)((longlong)param_8 + 5),
                 *(undefined1 *)(param_8 + 2),1);
    in_stack_fffffffffffffeb8 = 0;
    FUN_016ed320(param_1,*(char *)(param_8 + 1) + '\x01',0,1.0 / local_120[3],0);
    FUN_016ed1a0(param_1,*(char *)(param_8 + 1) + '\x02',*(undefined1 *)((longlong)param_8 + 5),
                 *(undefined1 *)(param_8 + 2));
    if (local_120[3] <= 0.0) {
      uVar8 = 0;
    }
    else {
      uVar8 = FUN_0040c760((local_78[0] * 5.5224904e-23) / local_120[3]);
    }
    FUN_016ed220(param_1,*(char *)(param_8 + 1) + '\x02',uVar8,0);
  }
  uVar2 = FUN_016e9e80(param_1,7);
  *(undefined1 *)(param_8 + 1) = uVar2;
  uVar3 = FUN_016ea1b0(param_1,2);
  param_8[0x8a] = uVar3;
  uVar3 = FUN_016ea1b0(param_1,6);
  param_8[0x8b] = uVar3;
  in_stack_fffffffffffffeb8 = in_stack_fffffffffffffeb8 & 0xffffffffffffff00;
  FUN_016ebe60(param_1,*(char *)(param_8 + 1) + '\x01',*(undefined1 *)((longlong)param_8 + 5),
               *(undefined1 *)(param_8 + 4),in_stack_fffffffffffffeb8);
  uVar10 = CONCAT71((int7)(in_stack_fffffffffffffeb8 >> 8),*(char *)(param_8 + 1) + '\x01');
  FUN_016ec850(param_1,*(char *)(param_8 + 1) + '\x02',*(undefined1 *)(param_8 + 3),
               *(undefined1 *)(param_8 + 4),uVar10);
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_016ebe60(param_1,*(char *)(param_8 + 1) + '\x03',*(undefined1 *)(param_8 + 3),
               *(undefined1 *)(param_8 + 4),uVar10);
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_016ebe60(param_1,*(char *)(param_8 + 1) + '\x04',*(undefined1 *)(param_8 + 3),
               *(undefined1 *)((longlong)param_8 + 5),uVar10);
  uVar10 = uVar10 & 0xffffffffffffff00;
  FUN_016ebfa0(param_1,*(char *)(param_8 + 1) + '\x05',*(undefined1 *)(param_8 + 3),
               *(undefined1 *)(param_8 + 4),uVar10);
  FUN_016ebfa0(param_1,*(char *)(param_8 + 1) + '\x06',*(undefined1 *)(param_8 + 3),
               *(undefined1 *)((longlong)param_8 + 5),uVar10 & 0xffffffffffffff00);
  FUN_016ed1a0(param_1,*(char *)(param_8 + 1) + '\a',*(undefined1 *)((longlong)param_8 + 5),
               *(undefined1 *)(param_8 + 4));
  return;
}


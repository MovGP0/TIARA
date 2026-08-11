/* Ghidra address: 01965850 */
/* Ghidra symbol: FUN_01965850 */


void FUN_01965850(longlong param_1,double param_2,double param_3,double param_4,double param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  
  dVar11 = (double)*(int *)(param_1 + 0x2d0) * *(double *)(param_1 + 0x268);
  dVar9 = (double)*(int *)(param_1 + 0x2c8) * *(double *)(param_1 + 0x268);
  dVar5 = (double)FUN_0040c850(param_4 - param_2);
  if (dVar5 <= 8.0) {
    dVar5 = param_5 - dVar9;
    if (((param_3 < dVar5) && (param_5 < dVar5)) || ((dVar5 < param_3 && (dVar5 < param_5)))) {
      dVar5 = param_5 + dVar9;
    }
    dVar9 = param_4 - dVar11;
    dVar7 = param_4 + dVar11;
    dVar11 = dVar5;
  }
  else {
    dVar6 = (param_5 - param_3) / (param_4 - param_2);
    dVar7 = dVar6 * dVar6 + 1.0;
    dVar8 = (dVar6 * ((param_4 * param_3 - param_2 * param_5) / (param_4 - param_2) - param_5) -
            param_4) * 2.0;
    dVar5 = (param_4 * param_3 - param_2 * param_5) / (param_4 - param_2);
    dVar10 = dVar8 * dVar8 -
             dVar7 * 4.0 *
             ((((param_4 * param_4 + param_5 * param_5) - dVar9 * dVar9) + dVar5 * dVar5) -
             (param_5 * 2.0 * (param_4 * param_3 - param_2 * param_5)) / (param_4 - param_2));
    dVar5 = (double)FUN_0040c760(dVar10);
    dVar9 = (-dVar8 + dVar5) / (dVar7 * 2.0);
    if (((param_2 < dVar9) && (param_4 < dVar9)) || ((dVar9 < param_2 && (dVar9 < param_4)))) {
      dVar5 = (double)FUN_0040c760(dVar10);
      dVar9 = (-dVar8 - dVar5) / (dVar7 * 2.0);
    }
    dVar8 = dVar9 * dVar6 + (param_4 * param_3 - param_2 * param_5) / (param_4 - param_2);
    if (param_5 == param_3) {
      dVar5 = dVar8 - dVar11;
      dVar7 = dVar9;
      dVar11 = dVar8 + dVar11;
    }
    else {
      FUN_0040c660(dVar6);
      dVar10 = (double)FUN_0040bdd0();
      FUN_0040c660(dVar6);
      dVar5 = (double)FUN_0040bcd0();
      dVar5 = dVar8 - dVar11 * dVar5;
      FUN_0040c660(dVar6);
      dVar7 = (double)FUN_0040bdd0();
      dVar7 = dVar9 - dVar11 * dVar7;
      FUN_0040c660(dVar6);
      dVar6 = (double)FUN_0040bcd0();
      dVar9 = dVar9 + dVar11 * dVar10;
      dVar11 = dVar8 + dVar11 * dVar6;
    }
  }
  if (*(char *)(param_1 + 0x2cc) == '\0') {
    uVar1 = FUN_0040c770(*(double *)(*(longlong *)(param_1 + 0x1c0) + 0x40) *
                         *(double *)(param_1 + 0x268));
    FUN_005fd6d0(*(undefined8 *)(*(longlong *)(param_1 + 0x288) + 0x78),uVar1);
    uVar1 = FUN_0040c770(dVar9);
    uVar2 = FUN_0040c770(dVar5);
    local_f0 = FUN_00498310(uVar1,uVar2);
    uVar1 = FUN_0040c770(param_4);
    uVar2 = FUN_0040c770(param_5);
    local_e8 = FUN_00498310(uVar1,uVar2);
    uVar1 = FUN_0040c770(dVar7);
    uVar2 = FUN_0040c770(dVar11);
    local_e0 = FUN_00498310(uVar1,uVar2);
    (**(code **)(**(longlong **)(param_1 + 0x288) + 0xe0))
              (*(longlong **)(param_1 + 0x288),&local_f0,2);
  }
  else {
    FUN_005fdab0(*(undefined8 *)(*(longlong *)(param_1 + 0x288) + 0x80),
                 *(undefined4 *)(*(longlong *)(param_1 + 0x1c0) + 0x28));
    uVar1 = FUN_0040c770(param_4);
    uVar2 = FUN_0040c770(param_5);
    local_d8 = FUN_00498310(uVar1,uVar2);
    uVar3 = FUN_0040c770(dVar9);
    uVar4 = FUN_0040c770(dVar5);
    local_d0 = FUN_00498310(uVar3,uVar4);
    uVar3 = FUN_0040c770(dVar7);
    uVar4 = FUN_0040c770(dVar11);
    local_c8 = FUN_00498310(uVar3,uVar4);
    local_c0 = FUN_00498310(uVar1,uVar2);
    (**(code **)(**(longlong **)(param_1 + 0x288) + 0xd8))
              (*(longlong **)(param_1 + 0x288),&local_d8,3);
  }
  return;
}


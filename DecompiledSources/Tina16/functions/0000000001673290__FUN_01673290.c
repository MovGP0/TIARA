/* Ghidra address: 01673290 */
/* Ghidra symbol: FUN_01673290 */


void FUN_01673290(int *param_1,undefined8 param_2,longlong param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  if ((*(char *)((longlong)param_1 + 10) == '\0') || ((*(byte *)(param_3 + 0x88) & 8) != 0)) {
    dVar6 = (double)*param_1 *
            (*(double *)(*(longlong *)(param_3 + 0x118) + (longlong)param_1[0xc] * 8) -
            *(double *)(*(longlong *)(param_3 + 0x118) + (longlong)param_1[10] * 8));
    dVar7 = (double)*param_1 *
            (*(double *)(*(longlong *)(param_3 + 0x118) + (longlong)param_1[0xb] * 8) -
            *(double *)(*(longlong *)(param_3 + 0x118) + (longlong)param_1[10] * 8));
    dVar8 = (double)*param_1 *
            (*(double *)(*(longlong *)(param_3 + 0x118) + (longlong)param_1[9] * 8) -
            *(double *)(*(longlong *)(param_3 + 0x118) + (longlong)param_1[10] * 8));
    dVar1 = (double)FUN_016eec60(param_2,*(undefined8 *)(param_3 + 0x180),
                                 (short)param_1[0x4a] + 0x13,0);
    dVar2 = (double)FUN_016eec60(param_2,*(undefined8 *)(param_3 + 0x180),
                                 (short)param_1[0x4a] + 0x12,0);
    dVar3 = dVar6 - *(double *)(param_1 + 0x12);
    dVar6 = (dVar6 - dVar8) - *(double *)(param_1 + 0x14);
    if (param_1[1] < 0) {
      dVar7 = ((*(double *)(param_1 + 0x20) -
               (*(double *)(param_1 + 0x1e) - *(double *)(param_1 + 0x26)) * dVar6) -
              *(double *)(param_1 + 0x22) *
              ((dVar7 - dVar8) - (*(double *)(param_1 + 0xe) - *(double *)(param_1 + 0x16)))) +
              *(double *)(param_1 + 0x24) * (dVar8 - *(double *)(param_1 + 0x16));
    }
    else {
      dVar7 = (*(double *)(param_1 + 0x20) - *(double *)(param_1 + 0x1e) * dVar6) +
              *(double *)(param_1 + 0x26) * dVar3 +
              *(double *)(param_1 + 0x22) * (dVar7 - *(double *)(param_1 + 0xe)) +
              *(double *)(param_1 + 0x24) * (dVar8 - *(double *)(param_1 + 0x16));
    }
    dVar8 = *(double *)(param_1 + 0x18) + *(double *)(param_1 + 0x1c) +
            *(double *)(param_1 + 0x1e) * dVar6 + *(double *)(param_1 + 0x1a) * dVar3;
    uVar4 = FUN_0040c850(dVar7);
    uVar5 = FUN_0040c850(*(undefined8 *)(param_1 + 0x20));
    dVar6 = (double)FUN_00b90630(uVar4,uVar5,*(double *)(param_3 + 0x3c0) * dVar1);
    dVar1 = *(double *)(param_3 + 0x6c0);
    dVar3 = *(double *)(param_3 + 0x6a8);
    dVar7 = (double)FUN_0040c850(dVar7 - *(double *)(param_1 + 0x20));
    if (dVar7 < dVar1 * dVar6 + dVar3) {
      uVar4 = FUN_0040c850(dVar8);
      uVar5 = FUN_0040c850(*(double *)(param_1 + 0x18) + *(double *)(param_1 + 0x1c));
      dVar3 = (double)FUN_00b90630(uVar4,uVar5,*(double *)(param_3 + 0x3c0) * dVar2);
      dVar1 = *(double *)(param_3 + 0x6c0);
      dVar2 = *(double *)(param_3 + 0x6a8);
      dVar6 = (double)FUN_0040c850(dVar8 - (*(double *)(param_1 + 0x18) +
                                           *(double *)(param_1 + 0x1c)));
      if (dVar1 * dVar3 + dVar2 < dVar6) {
        FUN_016e9f80(param_2,param_3,1,0xb);
      }
    }
    else {
      FUN_016e9f80(param_2,param_3,1,10);
    }
  }
  return;
}


/* Ghidra address: 016728f0 */
/* Ghidra symbol: FUN_016728f0 */


void FUN_016728f0(int *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  
  if ((*(char *)((longlong)param_1 + 10) == '\0') || ((*(byte *)(param_3 + 0x88) & 8) != 0)) {
    dVar3 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                                 *(undefined1 *)((longlong)param_1 + 0x12),(char)param_1[4],0);
    iVar1 = *param_1;
    dVar4 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                                 *(undefined1 *)((longlong)param_1 + 0x11),(char)param_1[4],0);
    iVar2 = *param_1;
    dVar5 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                                 *(undefined1 *)((longlong)param_1 + 0xf),(char)param_1[4],0);
    dVar5 = (double)*param_1 * dVar5;
    dVar6 = (double)iVar1 * dVar3 - *(double *)(param_1 + 0x12);
    dVar3 = ((double)iVar1 * dVar3 - dVar5) - *(double *)(param_1 + 0x14);
    if (param_1[1] < 0) {
      dVar4 = ((*(double *)(param_1 + 0x20) -
               (*(double *)(param_1 + 0x1e) - *(double *)(param_1 + 0x26)) * dVar3) -
              *(double *)(param_1 + 0x22) *
              (((double)iVar2 * dVar4 - dVar5) -
              (*(double *)(param_1 + 0xe) - *(double *)(param_1 + 0x16)))) +
              *(double *)(param_1 + 0x24) * (dVar5 - *(double *)(param_1 + 0x16));
    }
    else {
      dVar4 = (*(double *)(param_1 + 0x20) - *(double *)(param_1 + 0x1e) * dVar3) +
              *(double *)(param_1 + 0x26) * dVar6 +
              *(double *)(param_1 + 0x22) * ((double)iVar2 * dVar4 - *(double *)(param_1 + 0xe)) +
              *(double *)(param_1 + 0x24) * (dVar5 - *(double *)(param_1 + 0x16));
    }
    dVar9 = *(double *)(param_1 + 0x18) + *(double *)(param_1 + 0x1c) +
            *(double *)(param_1 + 0x1e) * dVar3 + *(double *)(param_1 + 0x1a) * dVar6;
    uVar7 = FUN_0040c850(dVar4);
    uVar8 = FUN_0040c850(*(undefined8 *)(param_1 + 0x20));
    dVar6 = (double)FUN_00b90620(uVar7,uVar8);
    dVar3 = *(double *)(param_3 + 0x6c0);
    dVar5 = *(double *)(param_3 + 0x6a8);
    dVar4 = (double)FUN_0040c850(dVar4 - *(double *)(param_1 + 0x20));
    if (dVar4 < dVar3 * dVar6 + dVar5) {
      uVar7 = FUN_0040c850(dVar9);
      uVar8 = FUN_0040c850(*(double *)(param_1 + 0x18) + *(double *)(param_1 + 0x1c));
      dVar5 = (double)FUN_00b90620(uVar7,uVar8);
      dVar3 = *(double *)(param_3 + 0x6c0);
      dVar4 = *(double *)(param_3 + 0x6a8);
      dVar6 = (double)FUN_0040c850(dVar9 - (*(double *)(param_1 + 0x18) +
                                           *(double *)(param_1 + 0x1c)));
      if (dVar3 * dVar5 + dVar4 < dVar6) {
        FUN_016e9f80(param_2,param_3,1,0xb);
      }
    }
    else {
      FUN_016e9f80(param_2,param_3,1,10);
    }
  }
  return;
}


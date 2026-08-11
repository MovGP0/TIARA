/* Ghidra address: 00e74c90 */
/* Ghidra symbol: FUN_00e74c90 */


void FUN_00e74c90(short *param_1,undefined8 param_2,longlong param_3)

{
  short sVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  if (((char)param_1[0x88] == '\0') || ((*(byte *)(param_3 + 0x88) & 8) != 0)) {
    dVar2 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),(char)param_1[3],
                                 (char)param_1[4],0);
    sVar1 = *param_1;
    dVar3 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),(char)param_1[3],
                                 *(undefined1 *)((longlong)param_1 + 5),0);
    dVar2 = (double)(int)sVar1 * dVar2 - *(double *)(param_1 + 0x2c);
    dVar3 = (double)(int)*param_1 * dVar3 - *(double *)(param_1 + 0x30);
    dVar7 = *(double *)(param_1 + 0x10) + *(double *)(param_1 + 0x28) * dVar3 +
            *(double *)(param_1 + 0x24) * dVar2;
    dVar8 = (*(double *)(param_1 + 0xc) + *(double *)(param_1 + 0x1c) * dVar2 +
            *(double *)(param_1 + 0x20) * (dVar2 - dVar3)) - *(double *)(param_1 + 0x28) * dVar3;
    uVar4 = FUN_0040c850(dVar8);
    uVar5 = FUN_0040c850(*(undefined8 *)(param_1 + 0xc));
    dVar6 = (double)FUN_00b90620(uVar4,uVar5);
    dVar2 = *(double *)(param_3 + 0x6c0);
    dVar3 = *(double *)(param_3 + 0x6a8);
    dVar8 = (double)FUN_0040c850(dVar8 - *(double *)(param_1 + 0xc));
    if (dVar8 < dVar2 * dVar6 + dVar3) {
      uVar4 = FUN_0040c850(dVar7);
      uVar5 = FUN_0040c850(*(undefined8 *)(param_1 + 0x10));
      dVar6 = (double)FUN_00b90620(uVar4,uVar5);
      dVar2 = *(double *)(param_3 + 0x6c0);
      dVar3 = *(double *)(param_3 + 0x6a8);
      dVar8 = (double)FUN_0040c850(dVar7 - *(double *)(param_1 + 0x10));
      if (dVar2 * dVar6 + dVar3 < dVar8) {
        FUN_016e9f80(param_2,param_3,1,0);
      }
    }
    else {
      FUN_016e9f80(param_2,param_3,1,0);
    }
  }
  return;
}


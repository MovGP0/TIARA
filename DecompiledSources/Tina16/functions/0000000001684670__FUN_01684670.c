/* Ghidra address: 01684670 */
/* Ghidra symbol: FUN_01684670 */


void FUN_01684670(short *param_1,undefined8 param_2,longlong param_3)

{
  short sVar1;
  short sVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  
  if (((char)param_1[2] == '\0') || ((*(byte *)(param_3 + 0x88) & 8) != 0)) {
    dVar3 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),(char)param_1[4],
                                 (char)param_1[5],0);
    sVar1 = *param_1;
    dVar4 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),(char)param_1[4],
                                 *(undefined1 *)((longlong)param_1 + 9),0);
    sVar2 = *param_1;
    dVar5 = (double)FUN_016eec60(param_2,*(undefined8 *)(param_3 + 0x180),param_1[0x5c] + 0xd,0);
    dVar6 = (double)FUN_016eec60(param_2,*(undefined8 *)(param_3 + 0x180),param_1[0x5c] + 0xe,0);
    dVar3 = (double)(int)sVar1 * dVar3 - *(double *)(param_1 + 0x30);
    dVar4 = (double)(int)sVar2 * dVar4 - *(double *)(param_1 + 0x34);
    dVar9 = (*(double *)(param_1 + 0x14) +
            (*(double *)(param_1 + 0x28) + *(double *)(param_1 + 0x2c)) * dVar3) -
            (*(double *)(param_1 + 0x2c) + *(double *)(param_1 + 0x24)) * dVar4;
    dVar10 = *(double *)(param_1 + 8) + *(double *)(param_1 + 0x20) * dVar3 +
             *(double *)(param_1 + 0x24) * dVar4;
    uVar7 = FUN_0040c850(dVar9);
    uVar8 = FUN_0040c850(*(undefined8 *)(param_1 + 0x14));
    dVar5 = (double)FUN_00b90630(uVar7,uVar8,*(double *)(param_3 + 0x3c0) * dVar5);
    dVar3 = *(double *)(param_3 + 0x3c8);
    dVar4 = *(double *)(param_3 + 0x3d8);
    dVar9 = (double)FUN_0040c850(dVar9 - *(double *)(param_1 + 0x14));
    if (dVar9 <= dVar3 * dVar5 + dVar4) {
      uVar7 = FUN_0040c850(dVar10);
      uVar8 = FUN_0040c850(*(undefined8 *)(param_1 + 8));
      dVar5 = (double)FUN_00b90630(uVar7,uVar8,*(double *)(param_3 + 0x3c0) * dVar6);
      dVar3 = *(double *)(param_3 + 0x3c8);
      dVar4 = *(double *)(param_3 + 0x3e0);
      dVar6 = (double)FUN_0040c850(dVar10 - *(double *)(param_1 + 8));
      if (dVar3 * dVar5 + dVar4 < dVar6) {
        FUN_016e9f80(param_2,param_3,1,0);
      }
    }
    else {
      FUN_016e9f80(param_2,param_3,1,0);
    }
  }
  return;
}


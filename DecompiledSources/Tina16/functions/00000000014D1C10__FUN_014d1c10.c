/* Ghidra address: 014d1c10 */
/* Ghidra symbol: FUN_014d1c10 */


void FUN_014d1c10(longlong param_1,undefined8 param_2,longlong param_3)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  
  if ((*(byte *)(param_3 + 0x88) & 8) != 0) {
    dVar1 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                                 *(undefined1 *)(param_1 + 0xc),*(undefined1 *)(param_1 + 0xd),0);
    dVar2 = (double)FUN_016ee880(param_2,*(undefined8 *)(param_3 + 0x128),
                                 *(undefined1 *)(param_1 + 0xc),*(undefined1 *)(param_1 + 0xd));
    dVar6 = *(double *)(param_1 + 0x68) - *(double *)(param_1 + 0x90) * (dVar1 - dVar2);
    uVar3 = FUN_0040c850(dVar6);
    uVar4 = FUN_0040c850(*(undefined8 *)(param_1 + 0x68));
    dVar5 = (double)FUN_00b90620(uVar3,uVar4);
    dVar1 = *(double *)(param_3 + 0x6c0);
    dVar2 = *(double *)(param_3 + 0x6a8);
    dVar6 = (double)FUN_0040c850(dVar6 - *(double *)(param_1 + 0x68));
    if (dVar6 <= dVar1 * dVar5 + dVar2) {
      dVar1 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                                   *(undefined1 *)(param_1 + 0xe),*(undefined1 *)(param_1 + 0xf),0);
      dVar6 = *(double *)(param_1 + 0x70) -
              *(double *)(param_1 + 0x98) * (dVar1 - *(double *)(param_1 + 0x88));
      uVar3 = FUN_0040c850(dVar6);
      uVar4 = FUN_0040c850(*(undefined8 *)(param_1 + 0x70));
      dVar5 = (double)FUN_00b90620(uVar3,uVar4);
      dVar1 = *(double *)(param_3 + 0x6c0);
      dVar2 = *(double *)(param_3 + 0x6a8);
      dVar6 = (double)FUN_0040c850(dVar6 - *(double *)(param_1 + 0x70));
      if (dVar1 * dVar5 + dVar2 < dVar6) {
        FUN_016e9f80(param_2,param_3,1,8);
      }
    }
    else {
      FUN_016e9f80(param_2,param_3,1,7);
    }
  }
  return;
}


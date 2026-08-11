/* Ghidra address: 014d2c50 */
/* Ghidra symbol: FUN_014d2c50 */


void FUN_014d2c50(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  
  if ((*(byte *)(param_3 + 0x88) & 8) != 0) {
    dVar9 = *(double *)(param_1 + 0x70);
    iVar2 = 1;
    for (uVar3 = (uint)*(byte *)(param_1 + 0x18); uVar3 != 0; uVar3 = uVar3 - 1) {
      iVar1 = iVar2 * 2;
      dVar4 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                                   *(undefined1 *)
                                    (*(longlong *)(param_1 + 0x10) + -1 + (longlong)(iVar1 + -1)),
                                   *(undefined1 *)
                                    (*(longlong *)(param_1 + 0x10) + -1 + (longlong)iVar1),0);
      dVar5 = (double)FUN_016ee880(param_2,*(undefined8 *)(param_3 + 0x128),
                                   *(undefined1 *)
                                    (*(longlong *)(param_1 + 0x10) + -1 + (longlong)(iVar1 + -1)),
                                   *(undefined1 *)
                                    (*(longlong *)(param_1 + 0x10) + -1 + (longlong)iVar1));
      dVar9 = dVar9 - *(double *)(*(longlong *)(param_1 + 0xb8) + -8 + (longlong)iVar2 * 8) *
                      (dVar4 - dVar5);
      iVar2 = iVar2 + 1;
    }
    uVar6 = FUN_0040c850(dVar9);
    uVar7 = FUN_0040c850(*(undefined8 *)(param_1 + 0x70));
    dVar8 = (double)FUN_00b90620(uVar6,uVar7);
    dVar4 = *(double *)(param_3 + 0x6c0);
    dVar5 = *(double *)(param_3 + 0x6a8);
    dVar9 = (double)FUN_0040c850(dVar9 - *(double *)(param_1 + 0x70));
    if (dVar9 <= dVar4 * dVar8 + dVar5) {
      dVar9 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),
                                   *(undefined1 *)(param_1 + 0xc),*(undefined1 *)(param_1 + 0xd),0);
      dVar8 = *(double *)(param_1 + 0x78) -
              *(double *)(param_1 + 0xa0) * (dVar9 - *(double *)(param_1 + 0x90));
      uVar6 = FUN_0040c850(dVar8);
      uVar7 = FUN_0040c850(*(undefined8 *)(param_1 + 0x78));
      dVar5 = (double)FUN_00b90620(uVar6,uVar7);
      dVar9 = *(double *)(param_3 + 0x6c0);
      dVar4 = *(double *)(param_3 + 0x6a8);
      dVar8 = (double)FUN_0040c850(dVar8 - *(double *)(param_1 + 0x78));
      if (dVar9 * dVar5 + dVar4 < dVar8) {
        FUN_016e9f80(param_2,param_3,1,0xc);
      }
    }
    else {
      FUN_016e9f80(param_2,param_3,1,0xb);
    }
  }
  return;
}


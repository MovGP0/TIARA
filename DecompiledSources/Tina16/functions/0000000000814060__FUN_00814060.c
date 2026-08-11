/* Ghidra address: 00814060 */
/* Ghidra symbol: FUN_00814060 */


undefined8 FUN_00814060(longlong param_1,undefined2 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  iVar1 = FUN_00814620(param_1,param_2,1);
  if ((iVar1 != -1) && (*(int *)(param_1 + 8) == iVar1)) {
    uVar5 = 1;
    iVar2 = FUN_007e2ef0(*(undefined8 *)
                          (*(longlong *)(param_1 + 0x40) + 8 +
                          (longlong)*(int *)(param_1 + 8) * 0x20));
    if (iVar2 == 0) {
      FUN_00813fb0(param_1);
      lVar6 = (longlong)iVar1;
      lVar3 = FUN_007e3880(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 8 + lVar6 * 0x20));
      if (lVar3 != 0) {
        uVar4 = FUN_007e3880(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 8 + lVar6 * 0x20));
        FUN_007e5c50(uVar4,*(undefined2 *)
                            (*(longlong *)(*(longlong *)(param_1 + 0x40) + 8 + lVar6 * 0x20) + 0xa8)
                    );
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x1c) = 1;
      FUN_00817ea0(param_1);
    }
  }
  return uVar5;
}


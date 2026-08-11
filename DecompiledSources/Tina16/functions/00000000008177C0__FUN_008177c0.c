/* Ghidra address: 008177c0 */
/* Ghidra symbol: FUN_008177c0 */


void FUN_008177c0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_00814e80(param_1,param_2,param_3);
  *(int *)(param_1 + 8) = iVar1;
  if (iVar1 != -1) {
    FUN_00814f60(param_1);
    iVar1 = FUN_007e2ef0(*(undefined8 *)
                          (*(longlong *)(param_1 + 0x40) + 8 +
                          (longlong)*(int *)(param_1 + 8) * 0x20));
    if (iVar1 == 0) {
      uVar3 = FUN_00814f80(param_1);
      FUN_007e5c50(uVar3,*(undefined2 *)
                          (*(longlong *)
                            (*(longlong *)(param_1 + 0x40) + 8 +
                            (longlong)*(int *)(param_1 + 8) * 0x20) + 0xa8));
    }
  }
  if (*(char *)(param_1 + 0xc1) != '\0') {
    uVar2 = FUN_00814e10(param_1,param_2,param_3);
    *(undefined4 *)(param_1 + 0x48) = uVar2;
    if ((*(int *)(param_1 + 0x48) == -1) || (*(int *)(param_1 + 0xbc) != *(int *)(param_1 + 0x48)))
    {
      *(undefined4 *)(param_1 + 0xbc) = 0xffffffff;
    }
    else {
      *(undefined4 *)(param_1 + 0xbc) = 0xffffffff;
      FUN_00814f60(param_1);
      iVar1 = *(int *)(param_1 + 0x50 + (longlong)*(int *)(param_1 + 0x48) * 0x18);
      if (iVar1 == 0) {
        FUN_00814cf0(param_1);
      }
      else if (iVar1 == 1) {
        FUN_00814d50(param_1);
      }
      else if (iVar1 == 2) {
        FUN_00814db0(param_1);
      }
    }
  }
  return;
}


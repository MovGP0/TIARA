/* Ghidra address: 0041d830 */
/* Ghidra symbol: FUN_0041d830 */


longlong * FUN_0041d830(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong local_30 [2];
  
  local_30[0] = 0;
  FUN_004144d0(param_1);
  if (param_2 != 0) {
    uVar4 = 0;
    if (param_2 != 0) {
      uVar4 = *(uint *)(param_2 + -4);
    }
    FUN_00415d10(local_30,(ulonglong)uVar4 * 3,0xfde9);
    iVar1 = 0;
    if (local_30[0] != 0) {
      iVar1 = *(int *)(local_30[0] + -4);
    }
    uVar2 = FUN_00415ab0(local_30[0]);
    uVar3 = FUN_00416740(param_2);
    iVar1 = FUN_0041d670(uVar2,iVar1 + 1,uVar3,uVar4);
    if (iVar1 < 1) {
      FUN_004144d0(local_30);
    }
    else {
      FUN_00415d10(local_30,iVar1 + -1,0xfde9);
    }
    FUN_00414bf0(param_1,local_30[0]);
    if (*param_1 != 0) {
      *(undefined2 *)(*param_1 + -0xc) = 0xfde9;
    }
  }
  FUN_004144d0(local_30);
  return param_1;
}


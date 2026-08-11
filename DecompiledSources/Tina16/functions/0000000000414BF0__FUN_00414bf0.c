/* Ghidra address: 00414bf0 */
/* Ghidra symbol: FUN_00414bf0 */


void FUN_00414bf0(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_30;
  
  if (param_2 != 0) {
    if (*(int *)(param_2 + -8) < 0) {
      iVar1 = *(int *)(param_2 + -4);
      lVar2 = FUN_004143b0(iVar1,*(undefined2 *)(param_2 + -0xc));
      uVar3 = FUN_00415ab0(param_2);
      FUN_00409a70(uVar3,lVar2,(longlong)iVar1);
      param_2 = lVar2;
    }
    else {
      LOCK();
      *(int *)(param_2 + -8) = *(int *)(param_2 + -8) + 1;
      UNLOCK();
    }
  }
  local_30 = *param_1;
  *param_1 = param_2;
  FUN_004144d0(&local_30);
  return;
}


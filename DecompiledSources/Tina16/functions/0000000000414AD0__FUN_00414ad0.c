/* Ghidra address: 00414ad0 */
/* Ghidra symbol: FUN_00414ad0 */


void FUN_00414ad0(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong local_30;
  
  if (param_2 != 0) {
    if (*(int *)(param_2 + -8) < 0) {
      iVar1 = *(int *)(param_2 + -4);
      lVar2 = FUN_00414350(iVar1);
      FUN_00409a70(param_2,lVar2,(longlong)(iVar1 * 2));
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
  FUN_00414480(&local_30);
  return;
}


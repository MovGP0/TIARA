/* Ghidra address: 00414b90 */
/* Ghidra symbol: FUN_00414b90 */


void FUN_00414b90(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  if (*param_1 != param_2) {
    if (param_2 == 0) {
      FUN_00414520();
    }
    else {
      uVar1 = (longlong)*(int *)(param_2 + -4) / 2;
      if ((int)uVar1 == 0) {
        FUN_00414520(param_1,(longlong)*(int *)(param_2 + -4) % 2 & 0xffffffff);
      }
      else {
        iVar2 = thunk_FUN_0419bbc3(param_1,param_2,uVar1 & 0xffffffff);
        if (iVar2 == 0) {
          FUN_00414430();
        }
      }
    }
  }
  return;
}


/* Ghidra address: 004147a0 */
/* Ghidra symbol: FUN_004147a0 */


void FUN_004147a0(longlong *param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 < 1) {
    FUN_00414520(param_1);
  }
  else {
    lVar1 = thunk_FUN_041826a7(param_2,param_3);
    if (lVar1 == 0) {
      FUN_00414430();
    }
    if (*param_1 != 0) {
      thunk_FUN_041b9bbd(*param_1);
    }
    *param_1 = lVar1;
  }
  return;
}


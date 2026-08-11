/* Ghidra address: 005950e0 */
/* Ghidra symbol: FUN_005950e0 */


void FUN_005950e0(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (*param_1 != 0) {
    lVar1 = *(longlong *)(*param_1 + -8);
  }
  if (lVar1 < param_2) {
    FUN_00595060();
  }
  else if (param_2 < 0) {
    FUN_0044d470();
  }
  return;
}


/* Ghidra address: 0094a3b0 */
/* Ghidra symbol: FUN_0094a3b0 */


void FUN_0094a3b0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x10))(param_1,param_1[1]);
  if (lVar1 != 0) {
    param_1[1] = lVar1;
  }
  return;
}


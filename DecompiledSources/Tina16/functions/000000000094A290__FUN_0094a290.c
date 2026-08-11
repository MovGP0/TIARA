/* Ghidra address: 0094a290 */
/* Ghidra symbol: FUN_0094a290 */


void FUN_0094a290(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x20))(param_1,param_1[1]);
  if (lVar1 != 0) {
    param_1[1] = lVar1;
  }
  return;
}


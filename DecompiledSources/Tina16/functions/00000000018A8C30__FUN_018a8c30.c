/* Ghidra address: 018a8c30 */
/* Ghidra symbol: FUN_018a8c30 */


void FUN_018a8c30(longlong *param_1)

{
  longlong lVar1;
  
  FUN_0064c480(param_1);
  lVar1 = (**(code **)(*param_1 + 0x278))(param_1);
  if (lVar1 != 0) {
    FUN_018aba70(param_1);
  }
  return;
}


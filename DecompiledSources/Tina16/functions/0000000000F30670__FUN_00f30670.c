/* Ghidra address: 00f30670 */
/* Ghidra symbol: FUN_00f30670 */


void FUN_00f30670(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = *(longlong *)(param_1 + -8);
  }
  if (0xffffffff < lVar1 + 0x80000000U) {
    FUN_00410a90();
  }
  FUN_00f30220();
  return;
}


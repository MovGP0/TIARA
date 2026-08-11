/* Ghidra address: 00f313e0 */
/* Ghidra symbol: FUN_00f313e0 */


void FUN_00f313e0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = *(longlong *)(param_2 + -8);
  }
  if (0xffffffff < lVar1 + 0x80000000U) {
    FUN_00410a90();
  }
  FUN_00f31420();
  return;
}


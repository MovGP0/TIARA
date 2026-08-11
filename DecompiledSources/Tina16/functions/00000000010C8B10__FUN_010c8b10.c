/* Ghidra address: 010c8b10 */
/* Ghidra symbol: FUN_010c8b10 */


void FUN_010c8b10(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_0040c840(*(undefined8 *)(param_1 + 8));
  *(double *)(param_1 + 8) = (double)lVar1;
  return;
}


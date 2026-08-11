/* Ghidra address: 010c8ae0 */
/* Ghidra symbol: FUN_010c8ae0 */


void FUN_010c8ae0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_0040c770(*(undefined8 *)(param_1 + 8));
  *(double *)(param_1 + 8) = (double)lVar1;
  return;
}


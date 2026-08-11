/* Ghidra address: 007fb700 */
/* Ghidra symbol: FUN_007fb700 */


void FUN_007fb700(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)(param_2 + 0x60) + 0x490);
  *piVar1 = *piVar1 + -1;
  return;
}


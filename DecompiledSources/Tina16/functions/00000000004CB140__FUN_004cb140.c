/* Ghidra address: 004cb140 */
/* Ghidra symbol: FUN_004cb140 */


void FUN_004cb140(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)(param_2 + 0x150) + 0x1ec);
  *piVar1 = *piVar1 + -1;
  return;
}


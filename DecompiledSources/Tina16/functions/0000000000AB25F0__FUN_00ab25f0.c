/* Ghidra address: 00ab25f0 */
/* Ghidra symbol: FUN_00ab25f0 */


void FUN_00ab25f0(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)(*(longlong *)(param_2 + 0x50) + 0x18) + 0x2d8);
  *piVar1 = *piVar1 + -1;
  return;
}


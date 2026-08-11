/* Ghidra address: 00ad9b60 */
/* Ghidra symbol: FUN_00ad9b60 */


void FUN_00ad9b60(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)(param_2 + 0x510) + 0x78);
  *piVar1 = *piVar1 + -1;
  return;
}


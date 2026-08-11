/* Ghidra address: 005a1c60 */
/* Ghidra symbol: FUN_005a1c60 */


void FUN_005a1c60(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)(param_2 + 0x40) + 0x50);
  *piVar1 = *piVar1 + -1;
  return;
}


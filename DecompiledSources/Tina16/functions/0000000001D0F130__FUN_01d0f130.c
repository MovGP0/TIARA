/* Ghidra address: 01d0f130 */
/* Ghidra symbol: FUN_01d0f130 */


void FUN_01d0f130(longlong param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x10);
  *(int *)(param_1 + 0x10) = iVar1;
  FUN_00409a70(*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_1 + 8),(longlong)(iVar1 * 8));
  return;
}


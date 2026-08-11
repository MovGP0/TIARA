/* Ghidra address: 004afeb0 */
/* Ghidra symbol: FUN_004afeb0 */


bool FUN_004afeb0(longlong param_1)

{
  int iVar1;
  
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  iVar1 = FUN_004b0420(*(undefined8 *)(param_1 + 0x10));
  return *(int *)(param_1 + 8) < iVar1;
}


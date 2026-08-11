/* Ghidra address: 018ab3e0 */
/* Ghidra symbol: FUN_018ab3e0 */


bool FUN_018ab3e0(longlong param_1)

{
  bool bVar1;
  
  *(int *)(param_1 + 0x4d8) = *(int *)(param_1 + 0x4d8) + 1;
  bVar1 = *(int *)(param_1 + 0x4d8) < 2;
  if (bVar1) {
    FUN_018a7200(*(undefined8 *)(param_1 + 0x550),1);
    FUN_018a7200(*(undefined8 *)(param_1 + 0x540),1);
  }
  return bVar1;
}


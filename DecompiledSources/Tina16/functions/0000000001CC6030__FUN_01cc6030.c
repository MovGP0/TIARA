/* Ghidra address: 01cc6030 */
/* Ghidra symbol: FUN_01cc6030 */


bool FUN_01cc6030(longlong param_1)

{
  bool bVar1;
  
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
  bVar1 = *(int *)(param_1 + 0x48) == 0;
  if (bVar1) {
    FUN_00410f20();
  }
  return bVar1;
}


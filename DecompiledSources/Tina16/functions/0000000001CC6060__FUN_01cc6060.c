/* Ghidra address: 01cc6060 */
/* Ghidra symbol: FUN_01cc6060 */


bool FUN_01cc6060(longlong param_1)

{
  bool bVar1;
  
  bVar1 = *(int *)(param_1 + 0x48) == 0;
  if (bVar1) {
    FUN_00410f20();
  }
  return bVar1;
}


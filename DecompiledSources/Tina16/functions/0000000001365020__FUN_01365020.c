/* Ghidra address: 01365020 */
/* Ghidra symbol: FUN_01365020 */


void FUN_01365020(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  FUN_00410f20();
  if (lVar1 != 0) {
    FUN_01c6d030(lVar1);
  }
  return;
}


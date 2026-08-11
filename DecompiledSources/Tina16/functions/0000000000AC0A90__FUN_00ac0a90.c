/* Ghidra address: 00ac0a90 */
/* Ghidra symbol: FUN_00ac0a90 */


void FUN_00ac0a90(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10) + -1;
  if (0 < iVar1) {
    FUN_004ae870(param_1,iVar1);
  }
  return;
}


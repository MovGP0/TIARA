/* Ghidra address: 014b1c30 */
/* Ghidra symbol: FUN_014b1c30 */


bool FUN_014b1c30(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x128) + 1;
  if (SCARRY4(*(int *)(param_1 + 0x128),1)) {
    iVar1 = FUN_00410ab0();
  }
  return *(int *)(param_1 + 0x150) == iVar1;
}


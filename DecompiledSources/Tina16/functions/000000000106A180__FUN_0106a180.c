/* Ghidra address: 0106a180 */
/* Ghidra symbol: FUN_0106a180 */


bool FUN_0106a180(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x128) + 1;
  if (SCARRY4(*(int *)(param_1 + 0x128),1)) {
    iVar1 = FUN_00410ab0();
  }
  return *(int *)(param_1 + 0x150) == iVar1;
}


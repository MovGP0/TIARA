/* Ghidra address: 013c1d70 */
/* Ghidra symbol: FUN_013c1d70 */


void FUN_013c1d70(longlong param_1)

{
  int iVar1;
  
  FUN_00414480(param_1 + 0x20);
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 4;
  iVar1 = *(int *)(param_1 + 0x30);
  if (0 < iVar1) {
    do {
      FUN_00416ad0(param_1 + 0x20,&LAB_013c1dc8);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}


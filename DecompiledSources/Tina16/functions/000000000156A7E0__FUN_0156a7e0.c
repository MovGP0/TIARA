/* Ghidra address: 0156a7e0 */
/* Ghidra symbol: FUN_0156a7e0 */


void FUN_0156a7e0(longlong param_1)

{
  int iVar1;
  
  FUN_00414480();
  iVar1 = *(int *)(param_1 + 0xac);
  if (-1 < iVar1 + -1) {
    do {
      FUN_00416ad0(param_1 + 0x90,&DAT_0156a83c);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}


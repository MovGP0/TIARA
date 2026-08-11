/* Ghidra address: 00787c60 */
/* Ghidra symbol: FUN_00787c60 */


bool FUN_00787c60(longlong param_1)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    iVar1 = thunk_FUN_03986dbd();
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}


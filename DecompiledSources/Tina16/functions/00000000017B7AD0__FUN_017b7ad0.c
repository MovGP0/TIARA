/* Ghidra address: 017b7ad0 */
/* Ghidra symbol: FUN_017b7ad0 */


void FUN_017b7ad0(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(byte *)(param_1 + 0x78) - 1;
  if (iVar1 < 0) {
    iVar1 = 3;
  }
  *(char *)(param_1 + 0x78) = (char)iVar1;
  FUN_017b8090(param_1,1);
  return;
}


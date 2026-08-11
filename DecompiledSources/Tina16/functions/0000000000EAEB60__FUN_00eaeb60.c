/* Ghidra address: 00eaeb60 */
/* Ghidra symbol: FUN_00eaeb60 */


void FUN_00eaeb60(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*DAT_0202ea68 + 0x28))();
  iVar2 = 0;
  if (-1 < iVar1 + -1) {
    do {
      FUN_00eae880(iVar2);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}


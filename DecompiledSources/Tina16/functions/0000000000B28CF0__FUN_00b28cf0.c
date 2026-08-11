/* Ghidra address: 00b28cf0 */
/* Ghidra symbol: FUN_00b28cf0 */


int FUN_00b28cf0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar1 = FUN_00b28de0();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar2 = FUN_00b28dc0(param_1,iVar3);
      if (lVar2 == *(longlong *)(param_1 + 0x18)) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return -1;
}


/* Ghidra address: 006605d0 */
/* Ghidra symbol: FUN_006605d0 */


int FUN_006605d0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = 0;
  for (lVar1 = *(longlong *)(param_1 + 0x10); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x18)) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}


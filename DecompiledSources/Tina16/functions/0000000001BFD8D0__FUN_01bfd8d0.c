/* Ghidra address: 01bfd8d0 */
/* Ghidra symbol: FUN_01bfd8d0 */


void FUN_01bfd8d0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x80);
  if (lVar2 != 0) {
    iVar1 = *(int *)(param_1 + 0x48);
    if (iVar1 == 0x1fffffff) {
      FUN_01c060c0(lVar2,1);
    }
    else if (iVar1 == 0x20000000) {
      FUN_0064e0c0(lVar2,1);
    }
    else {
      FUN_0064e030(lVar2,iVar1);
    }
  }
  return;
}


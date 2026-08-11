/* Ghidra address: 006f74d0 */
/* Ghidra symbol: FUN_006f74d0 */


void FUN_006f74d0(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  cVar1 = FUN_0065be20();
  if ((cVar1 != '\0') && (*(char *)(param_1 + 0x5a1) == '\0')) {
    iVar3 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x500) + 0x10) + 0x10);
    iVar2 = 0;
    if (-1 < iVar3 + -1) {
      do {
        FUN_006f7c40(param_1,iVar2);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}


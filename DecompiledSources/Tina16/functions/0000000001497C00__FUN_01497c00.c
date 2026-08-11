/* Ghidra address: 01497c00 */
/* Ghidra symbol: FUN_01497c00 */


int FUN_01497c00(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x700) + 0x4e0);
  iVar2 = 0;
  if (-1 < iVar4 + -1) {
    do {
      cVar1 = FUN_014937c0(param_1,iVar2);
      if (cVar1 == '\0') {
        iVar3 = iVar3 + 1;
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return iVar3;
}


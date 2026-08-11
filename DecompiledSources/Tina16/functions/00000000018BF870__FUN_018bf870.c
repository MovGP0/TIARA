/* Ghidra address: 018bf870 */
/* Ghidra symbol: FUN_018bf870 */


void FUN_018bf870(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x78) = 0;
  if (*(char *)(*(longlong *)
                 (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0xd0) + 0x20) + 0x228)
               + 0x31) == '\0') {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x70) + 0x9c);
    iVar3 = 0;
    if (-1 < iVar2 + -1) {
      do {
        cVar1 = FUN_018be290(param_1,iVar3);
        if (cVar1 == '\0') {
          return;
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  else {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x70) + 0x9c) + -1;
    if (-1 < iVar2) {
      do {
        cVar1 = FUN_018be290(param_1,iVar2);
        if (cVar1 == '\0') {
          return;
        }
        iVar2 = iVar2 + -1;
      } while (iVar2 != -1);
    }
  }
  return;
}


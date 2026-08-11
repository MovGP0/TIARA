/* Ghidra address: 00f63290 */
/* Ghidra symbol: FUN_00f63290 */


void FUN_00f63290(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x48) + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x48),iVar3);
      cVar1 = FUN_00f6f960(lVar2);
      if (cVar1 != '\0') {
        if (*(char *)(lVar2 + 0x40) == '\0') {
          FUN_00f63210(param_1,lVar2,lVar2 + 0x20,0xf);
        }
        FUN_00f63210(param_1,lVar2,lVar2 + 0x28,0xf);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}


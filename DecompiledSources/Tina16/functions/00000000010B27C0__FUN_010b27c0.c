/* Ghidra address: 010b27c0 */
/* Ghidra symbol: FUN_010b27c0 */


char FUN_010b27c0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  
  cVar3 = *(char *)(param_1 + 0xc);
  iVar4 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10);
  iVar2 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),iVar2);
      if ((cVar3 == '\0') && (*(char *)(lVar1 + 0x28) == '\0')) {
        cVar3 = '\0';
      }
      else {
        cVar3 = '\x01';
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return cVar3;
}


/* Ghidra address: 00d25360 */
/* Ghidra symbol: FUN_00d25360 */


void FUN_00d25360(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  
  cVar4 = '\x01';
  lVar1 = param_1 + 0x40;
  FUN_00409a70(*(undefined8 *)(param_1 + 0xa8),lVar1,(longlong)*(int *)(param_1 + 0xb0));
  iVar2 = *(int *)(param_1 + 0xb0);
  if (iVar2 < 0x30) {
    do {
      iVar3 = iVar2 - *(int *)(param_1 + 0xb0);
      *(char *)(lVar1 + iVar2) = *(char *)(lVar1 + iVar3) + *(char *)(lVar1 + (iVar3 + 1));
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0x30);
  }
  iVar2 = 0;
  do {
    if (*(char *)(lVar1 + iVar2) == '\0') {
      *(char *)(lVar1 + iVar2) = cVar4;
      cVar4 = cVar4 + '\x01';
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x20);
  return;
}


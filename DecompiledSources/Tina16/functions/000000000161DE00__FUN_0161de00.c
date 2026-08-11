/* Ghidra address: 0161de00 */
/* Ghidra symbol: FUN_0161de00 */


undefined8 FUN_0161de00(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x10) + -1;
  if (-1 < iVar3) {
    do {
      lVar2 = FUN_004aeac0(param_1,iVar3);
      cVar1 = FUN_0161dda0(*(undefined8 *)(lVar2 + 8));
      if (cVar1 != '\0') {
        return 1;
      }
      cVar1 = FUN_0161dda0(*(undefined8 *)(lVar2 + 0x10));
      if (cVar1 != '\0') {
        return 1;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != -1);
  }
  return 0;
}


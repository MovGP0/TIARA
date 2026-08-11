/* Ghidra address: 01648550 */
/* Ghidra symbol: FUN_01648550 */


ulonglong FUN_01648550(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  iVar5 = *(int *)(param_2 + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar2 = FUN_004aeac0(param_2,iVar4);
      cVar1 = FUN_01645040(*(undefined1 *)(lVar2 + 0x90));
      if ((cVar1 == '\0') && (cVar1 = FUN_01645060(lVar2), cVar1 == '\0')) {
        uVar3 = 0;
        break;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return uVar3 & 0xffffffff;
}


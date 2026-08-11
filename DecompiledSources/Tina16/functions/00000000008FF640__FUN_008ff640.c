/* Ghidra address: 008ff640 */
/* Ghidra symbol: FUN_008ff640 */


ulonglong FUN_008ff640(longlong param_1)

{
  char cVar1;
  uint uVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  int iVar4;
  
  uVar2 = 0;
  if (param_1 != 0) {
    uVar2 = *(uint *)(param_1 + -4) >> 1;
  }
  if (uVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    uVar2 = 0;
    if (param_1 != 0) {
      uVar2 = *(uint *)(param_1 + -4) >> 1;
    }
    iVar4 = 1;
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      cVar1 = FUN_008ff300(*(undefined2 *)(param_1 + -2 + (longlong)iVar4 * 2));
      if (cVar1 == '\0') {
        uVar3 = 0;
        break;
      }
      iVar4 = iVar4 + 1;
    }
  }
  return uVar3 & 0xffffffff;
}


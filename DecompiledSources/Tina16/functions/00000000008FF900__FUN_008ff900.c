/* Ghidra address: 008ff900 */
/* Ghidra symbol: FUN_008ff900 */


ulonglong FUN_008ff900(longlong param_1)

{
  undefined2 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 unaff_RSI;
  ulonglong uVar6;
  
  uVar3 = 0;
  if (param_1 != 0) {
    uVar3 = *(uint *)(param_1 + -4) >> 1;
  }
  if (uVar3 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    uVar3 = 0;
    do {
      while( true ) {
        uVar5 = 0;
        if (param_1 != 0) {
          uVar5 = *(uint *)(param_1 + -4) >> 1;
        }
        if ((int)uVar5 <= (int)uVar3) goto LAB_008ff9b9;
        uVar5 = uVar3 + 1;
        uVar1 = *(undefined2 *)(param_1 + -2 + (longlong)(int)uVar5 * 2);
        cVar2 = FUN_008f7640(uVar1);
        if (cVar2 != '\0') {
          uVar6 = 0;
          goto LAB_008ff9b9;
        }
        cVar2 = FUN_008f7620(uVar1);
        if (cVar2 == '\0') break;
        uVar4 = 0;
        if (param_1 != 0) {
          uVar4 = *(uint *)(param_1 + -4) >> 1;
        }
        if (uVar5 == uVar4) {
          uVar6 = 0;
          goto LAB_008ff9b9;
        }
        cVar2 = FUN_008f7640(*(undefined2 *)(param_1 + -2 + (longlong)(int)(uVar3 + 2) * 2));
        uVar3 = uVar3 + 2;
        if (cVar2 == '\0') {
          uVar6 = 0;
          goto LAB_008ff9b9;
        }
      }
      cVar2 = FUN_008ff340(uVar1);
      uVar3 = uVar5;
    } while (cVar2 != '\0');
    uVar6 = 0;
  }
LAB_008ff9b9:
  return uVar6 & 0xffffffff;
}


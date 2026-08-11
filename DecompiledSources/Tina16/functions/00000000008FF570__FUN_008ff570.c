/* Ghidra address: 008ff570 */
/* Ghidra symbol: FUN_008ff570 */


ulonglong FUN_008ff570(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  uVar4 = 0;
  uVar6 = 0;
  if (param_1 != 0) {
    uVar6 = *(uint *)(param_1 + -4) >> 1;
  }
  if (uVar6 != 0) {
    do {
      uVar5 = uVar4 + 1;
      uVar2 = (ulonglong)*(ushort *)(param_1 + -2 + (longlong)(int)uVar5 * 2);
      if (uVar2 < 0x20) {
        if ((1 < uVar2 - 9) && (uVar2 - 9 != 4)) {
LAB_008ff61d:
          uVar3 = 0;
          break;
        }
      }
      else if (0xd7df < uVar2 - 0x20) {
        if (uVar2 - 0xd800 < 0x400) {
          if (uVar5 == uVar6) {
            uVar3 = 0;
            break;
          }
          cVar1 = FUN_008f7640(*(undefined2 *)(param_1 + -2 + (longlong)(int)(uVar4 + 2) * 2));
          uVar5 = uVar4 + 2;
          if (cVar1 == '\0') {
            uVar3 = 0;
            break;
          }
        }
        else if (0x1ffd < uVar2 - 0xe000) goto LAB_008ff61d;
      }
      uVar4 = uVar5;
    } while ((int)uVar4 < (int)uVar6);
  }
  return uVar3 & 0xffffffff;
}


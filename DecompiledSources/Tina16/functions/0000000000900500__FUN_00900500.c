/* Ghidra address: 00900500 */
/* Ghidra symbol: FUN_00900500 */


ulonglong FUN_00900500(longlong param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  undefined2 uVar6;
  uint uVar7;
  
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  iVar2 = FUN_00417170(&LAB_009005d4,param_1,1);
  if (iVar2 < 1) {
    uVar7 = 0;
    do {
      uVar4 = 0;
      if (param_1 != 0) {
        uVar4 = *(uint *)(param_1 + -4) >> 1;
      }
      if ((int)uVar4 <= (int)uVar7) goto LAB_009005be;
      uVar4 = uVar7 + 1;
      uVar6 = *(undefined2 *)(param_1 + -2 + (longlong)(int)uVar4 * 2);
      cVar1 = FUN_008f7640(uVar6);
      if (cVar1 != '\0') {
        uVar5 = 0;
        goto LAB_009005be;
      }
      cVar1 = FUN_008f7620(uVar6);
      if (cVar1 != '\0') {
        uVar3 = 0;
        if (param_1 != 0) {
          uVar3 = *(uint *)(param_1 + -4) >> 1;
        }
        if (uVar4 == uVar3) {
          uVar5 = 0;
          goto LAB_009005be;
        }
        uVar6 = *(undefined2 *)(param_1 + -2 + (longlong)(int)(uVar7 + 2) * 2);
        cVar1 = FUN_008f7640(uVar6);
        uVar4 = uVar7 + 2;
        if (cVar1 == '\0') {
          uVar5 = 0;
          goto LAB_009005be;
        }
      }
      uVar7 = uVar4;
      cVar1 = FUN_008ff2d0(uVar6);
    } while (cVar1 != '\0');
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
  }
LAB_009005be:
  return uVar5 & 0xffffffff;
}


/* Ghidra address: 008ff6c0 */
/* Ghidra symbol: FUN_008ff6c0 */


ulonglong FUN_008ff6c0(longlong param_1)

{
  undefined2 uVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 unaff_RBX;
  ulonglong uVar7;
  
  uVar4 = 0;
  if (param_1 != 0) {
    uVar4 = *(uint *)(param_1 + -4) >> 1;
  }
  if (uVar4 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    bVar2 = true;
    uVar4 = 0;
    do {
      while( true ) {
        while( true ) {
          uVar6 = 0;
          if (param_1 != 0) {
            uVar6 = *(uint *)(param_1 + -4) >> 1;
          }
          if ((int)uVar6 <= (int)uVar4) goto LAB_008ff7a5;
          uVar6 = uVar4 + 1;
          uVar1 = *(undefined2 *)(param_1 + -2 + (longlong)(int)uVar6 * 2);
          cVar3 = FUN_008f7640(uVar1);
          if (cVar3 != '\0') {
            uVar7 = 0;
            goto LAB_008ff7a5;
          }
          cVar3 = FUN_008f7620(uVar1);
          if (cVar3 == '\0') break;
          uVar5 = 0;
          if (param_1 != 0) {
            uVar5 = *(uint *)(param_1 + -4) >> 1;
          }
          if (uVar6 == uVar5) {
            uVar7 = 0;
            goto LAB_008ff7a5;
          }
          cVar3 = FUN_008f7640(*(undefined2 *)(param_1 + -2 + (longlong)(int)(uVar4 + 2) * 2));
          if (cVar3 == '\0') {
            uVar7 = 0;
            goto LAB_008ff7a5;
          }
          bVar2 = false;
          uVar4 = uVar4 + 2;
        }
        uVar4 = uVar6;
        if (!bVar2) break;
        cVar3 = FUN_008ff3a0(uVar1);
        if (cVar3 == '\0') {
          uVar7 = 0;
          goto LAB_008ff7a5;
        }
        bVar2 = false;
      }
      cVar3 = FUN_008ff340(uVar1);
    } while (cVar3 != '\0');
    uVar7 = 0;
  }
LAB_008ff7a5:
  return uVar7 & 0xffffffff;
}


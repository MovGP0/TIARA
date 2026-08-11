/* Ghidra address: 008ff7c0 */
/* Ghidra symbol: FUN_008ff7c0 */


undefined1 FUN_008ff7c0(longlong param_1)

{
  undefined2 uVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = 0;
  if (param_1 != 0) {
    uVar4 = *(uint *)(param_1 + -4) >> 1;
  }
  if (uVar4 != 0) {
    bVar2 = true;
    uVar4 = 0;
    do {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar6 = 0;
            if (param_1 != 0) {
              uVar6 = *(uint *)(param_1 + -4) >> 1;
            }
            if ((int)uVar6 <= (int)uVar4) {
              if (bVar2) {
                return 0;
              }
              return 1;
            }
            uVar6 = uVar4 + 1;
            uVar1 = *(undefined2 *)(param_1 + -2 + (longlong)(int)uVar6 * 2);
            cVar3 = FUN_008f7640(uVar1);
            if (cVar3 != '\0') {
              return 0;
            }
            cVar3 = FUN_008f7620(uVar1);
            if (cVar3 == '\0') break;
            uVar5 = 0;
            if (param_1 != 0) {
              uVar5 = *(uint *)(param_1 + -4) >> 1;
            }
            if (uVar6 == uVar5) {
              return 0;
            }
            cVar3 = FUN_008f7640(*(undefined2 *)(param_1 + -2 + (longlong)(int)(uVar4 + 2) * 2));
            if (cVar3 == '\0') {
              return 0;
            }
            bVar2 = false;
            uVar4 = uVar4 + 2;
          }
          uVar4 = uVar6;
          if (!bVar2) break;
          cVar3 = FUN_008ff3a0(uVar1);
          if (cVar3 == '\0') {
            return 0;
          }
          bVar2 = false;
        }
        if (*(short *)(param_1 + -2 + (longlong)(int)uVar6 * 2) != DAT_01e32698) break;
        bVar2 = true;
      }
      cVar3 = FUN_008ff340(uVar1);
    } while (cVar3 != '\0');
  }
  return 0;
}


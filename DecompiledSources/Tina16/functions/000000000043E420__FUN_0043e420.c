/* Ghidra address: 0043e420 */
/* Ghidra symbol: FUN_0043e420 */


int FUN_0043e420(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = 0;
  if (param_1 != 0) {
    iVar6 = *(int *)(param_1 + -4);
  }
  iVar7 = 0;
  if (param_2 != 0) {
    iVar7 = *(int *)(param_2 + -4);
  }
  iVar1 = iVar6 - iVar7;
  if ((0 < iVar6) && (0 < iVar7)) {
    if (iVar1 < 0) {
      iVar7 = iVar6;
    }
    iVar6 = 0;
    if (0 < iVar7 * 2) {
      do {
        uVar3 = *(uint *)(param_1 + iVar6);
        uVar5 = *(uint *)(param_2 + iVar6);
        if (uVar3 != uVar5) {
          uVar2 = uVar3 & 0xffff;
          uVar4 = uVar5 & 0xffff;
          if (uVar2 != uVar4) {
            if ((0x60 < uVar2) && (uVar2 < 0x7b)) {
              uVar2 = uVar2 ^ 0x20;
            }
            if ((0x60 < uVar4) && (uVar4 < 0x7b)) {
              uVar4 = uVar4 ^ 0x20;
            }
            if (uVar2 != uVar4) {
              return uVar2 - uVar4;
            }
          }
          uVar3 = uVar3 >> 0x10;
          uVar5 = uVar5 >> 0x10;
          if (uVar3 != uVar5) {
            if ((0x60 < uVar3) && (uVar3 < 0x7b)) {
              uVar3 = uVar3 ^ 0x20;
            }
            if ((0x60 < uVar5) && (uVar5 < 0x7b)) {
              uVar5 = uVar5 ^ 0x20;
            }
            if (uVar3 != uVar5) {
              return uVar3 - uVar5;
            }
          }
        }
        iVar6 = iVar6 + 4;
      } while (iVar6 < iVar7 * 2);
    }
  }
  return iVar1;
}


/* Ghidra address: 00900140 */
/* Ghidra symbol: FUN_00900140 */


ulonglong FUN_00900140(longlong param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  undefined8 unaff_RBX;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  bVar2 = false;
  bVar1 = false;
  uVar6 = 0;
  uVar8 = 0;
  if (param_1 != 0) {
    uVar8 = *(uint *)(param_1 + -4) >> 1;
  }
  if (uVar8 != 0) {
    do {
      uVar7 = uVar6 + 1;
      uVar4 = (ulonglong)*(ushort *)(param_1 + -2 + (longlong)(int)uVar7 * 2);
      if (uVar4 < 0x23) {
        if (((1 < uVar4 - 9) && (uVar4 != 0xd)) && (1 < uVar4 - 0x20)) {
          if (uVar4 - 0x20 != 2) {
LAB_00900259:
            uVar5 = 0;
            break;
          }
          if (bVar1) {
            uVar5 = 0;
            break;
          }
          bVar2 = true;
        }
      }
      else if (uVar4 < 0x28) {
        if (3 < uVar4 - 0x23) {
          if (uVar4 - 0x23 != 4) goto LAB_00900259;
          if (bVar2) {
            uVar5 = 0;
            break;
          }
          bVar1 = true;
        }
      }
      else if (0xd7d7 < uVar4 - 0x28) {
        if (uVar4 - 0xd800 < 0x400) {
          if (uVar7 == uVar8) {
            uVar5 = 0;
            break;
          }
          cVar3 = FUN_008f7640(*(undefined2 *)(param_1 + -2 + (longlong)(int)(uVar6 + 2) * 2));
          uVar7 = uVar6 + 2;
          if (cVar3 == '\0') {
            uVar5 = 0;
            break;
          }
        }
        else if (0x1ffd < uVar4 - 0xe000) goto LAB_00900259;
      }
      uVar6 = uVar7;
    } while ((int)uVar6 < (int)uVar8);
  }
  return uVar5 & 0xffffffff;
}


/* Ghidra address: 00535150 */
/* Ghidra symbol: FUN_00535150 */


undefined1 FUN_00535150(byte *param_1,undefined8 param_2)

{
  undefined1 uVar1;
  int iVar2;
  ulonglong uVar3;
  int *piVar4;
  uint *puVar5;
  bool bVar6;
  
  if (param_1 == (byte *)0x0) {
    return false;
  }
  uVar3 = (ulonglong)*param_1;
  if (uVar3 < 0xe) {
    if (uVar3 == 0xd) {
      puVar5 = (uint *)FUN_00589390(param_1);
      if (*puVar5 < 0x10) {
        bVar6 = ((int)CONCAT62((int6)((ulonglong)param_2 >> 0x10),1) << ((byte)*puVar5 & 0x1f) &
                0x116U) != 0;
      }
      else {
        bVar6 = false;
      }
      return !bVar6;
    }
    if (uVar3 != 5) {
      if (uVar3 == 6) {
        iVar2 = FUN_0058c240(param_1);
        return 8 < iVar2;
      }
      if (uVar3 == 8) {
        return true;
      }
      if (2 < uVar3 - 10) {
        return false;
      }
    }
LAB_005351d6:
    uVar1 = 1;
  }
  else {
    if (uVar3 != 0xe) {
      if ((uVar3 == 0xf) || (uVar3 - 0x11 < 2)) goto LAB_005351d6;
      if (uVar3 - 0x11 != 5) {
        return false;
      }
    }
    piVar4 = (int *)FUN_00589390(param_1);
    iVar2 = *piVar4;
    if ((iVar2 - 1U < 2) || (iVar2 == 4)) {
      uVar1 = 0;
    }
    else if (iVar2 == 8) {
      uVar1 = FUN_00534e60(param_1);
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}


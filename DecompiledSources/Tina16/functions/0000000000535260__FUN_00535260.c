/* Ghidra address: 00535260 */
/* Ghidra symbol: FUN_00535260 */


bool FUN_00535260(byte *param_1,ulonglong param_2)

{
  byte bVar1;
  byte bVar2;
  uint *puVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined7 uVar6;
  bool bVar7;
  
  bVar2 = (byte)param_2;
  if (param_1 == (byte *)0x0) {
    return false;
  }
  bVar1 = *param_1;
  if (bVar1 < 0xd) {
    if (bVar1 != 0xc) {
      if (bVar1 == 5) {
        return true;
      }
      if (bVar1 == 6) {
        uVar4 = FUN_0058c240(param_1);
        if (8 < (int)uVar4) {
          return true;
        }
        if (4 < (int)uVar4) {
          if (bVar2 < 8) {
            bVar7 = ((int)CONCAT71((int7)((ulonglong)uVar4 >> 8),1) << (bVar2 & 0x1f) & 5U) != 0;
          }
          else {
            bVar7 = false;
          }
          if (bVar7) {
            return true;
          }
        }
        return false;
      }
      if (bVar1 != 8) {
        return false;
      }
    }
    return true;
  }
  uVar6 = (undefined7)(param_2 >> 8);
  if (bVar1 == 0xd) {
    if (bVar2 < 8) {
      uVar5 = (int)CONCAT71(uVar6,1) << (bVar2 & 0x1f);
      param_2 = (ulonglong)uVar5;
      bVar7 = (uVar5 & 0x1a) != 0;
    }
    else {
      bVar7 = false;
    }
    if (!bVar7) {
      puVar3 = (uint *)FUN_00589390(param_1);
      if (*puVar3 < 8) {
        bVar7 = ((int)CONCAT71((int7)(param_2 >> 8),1) << ((byte)*puVar3 & 0x1f) & 0x16U) != 0;
      }
      else {
        bVar7 = false;
      }
      return !bVar7;
    }
    puVar3 = (uint *)FUN_00589390(param_1);
    if (*puVar3 < 0x10) {
      bVar7 = ((int)CONCAT62((int6)(param_2 >> 0x10),1) << ((byte)*puVar3 & 0x1f) & 0x116U) != 0;
    }
    else {
      bVar7 = false;
    }
    return !bVar7;
  }
  if ((bVar1 != 0xe) && (bVar1 != 0x16)) {
    return false;
  }
  if (bVar2 < 8) {
    uVar5 = (int)CONCAT71(uVar6,1) << (bVar2 & 0x1f);
    param_2 = (ulonglong)uVar5;
    bVar7 = (uVar5 & 0x1a) != 0;
  }
  else {
    bVar7 = false;
  }
  if (!bVar7) {
    puVar3 = (uint *)FUN_00589390(param_1);
    if (*puVar3 < 8) {
      bVar7 = ((int)CONCAT71((int7)(param_2 >> 8),1) << ((byte)*puVar3 & 0x1f) & 0x16U) != 0;
    }
    else {
      bVar7 = false;
    }
    return !bVar7;
  }
  puVar3 = (uint *)FUN_00589390(param_1);
  if (*puVar3 < 0x10) {
    bVar7 = ((int)CONCAT62((int6)(param_2 >> 0x10),1) << ((byte)*puVar3 & 0x1f) & 0x116U) != 0;
  }
  else {
    bVar7 = false;
  }
  return !bVar7;
}


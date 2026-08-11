/* Ghidra address: 01abbfb0 */
/* Ghidra symbol: FUN_01abbfb0 */


undefined8 FUN_01abbfb0(ulonglong param_1,byte param_2,ulonglong param_3)

{
  byte bVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint uVar4;
  bool bVar5;
  
  uVar2 = param_1 & 0xffffffff;
  bVar1 = (byte)param_1;
  if (bVar1 < 8) {
    uVar4 = (int)CONCAT71((int7)(param_3 >> 8),1) << (bVar1 & 0x1f);
    param_3 = (ulonglong)uVar4;
    bVar5 = (uVar4 & 0x81) != 0;
  }
  else {
    bVar5 = false;
  }
  if (bVar5) {
    if (param_2 < 0x10) {
      uVar4 = (int)CONCAT62((int6)(param_3 >> 0x10),1) << (param_2 & 0x1f);
      param_3 = (ulonglong)uVar4;
      bVar5 = (uVar4 & 0x69bf) != 0;
    }
    else {
      bVar5 = false;
    }
    if (!bVar5) goto LAB_01abc007;
LAB_01abc0ea:
    uVar3 = CONCAT71((int7)(uVar2 >> 8),1);
  }
  else {
LAB_01abc007:
    if (bVar1 < 8) {
      uVar4 = (int)CONCAT71((int7)(param_3 >> 8),1) << (bVar1 & 0x1f);
      param_3 = (ulonglong)uVar4;
      bVar5 = (uVar4 & 2) != 0;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) {
      if ((byte)(param_2 - 8) < 8) {
        uVar4 = (int)CONCAT71((int7)(param_3 >> 8),1) << (param_2 - 8 & 0x1f);
        param_3 = (ulonglong)uVar4;
        bVar5 = (uVar4 & 0xc) != 0;
      }
      else {
        bVar5 = false;
      }
      if (bVar5) goto LAB_01abc0ea;
    }
    if (bVar1 < 8) {
      uVar4 = (int)CONCAT71((int7)(param_3 >> 8),1) << (bVar1 & 0x1f);
      param_3 = (ulonglong)uVar4;
      bVar5 = (uVar4 & 0x14) != 0;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) {
      if ((byte)(param_2 - 8) < 8) {
        bVar5 = ((int)CONCAT71((int7)(param_3 >> 8),1) << (param_2 - 8 & 0x1f) & 10U) != 0;
      }
      else {
        bVar5 = false;
      }
      if (bVar5) goto LAB_01abc0ea;
    }
    if (bVar1 < 8) {
      uVar4 = (int)CONCAT71((int7)(uVar2 >> 8),1) << (bVar1 & 0x1f);
      bVar5 = (uVar4 & 0x60) != 0;
      uVar2 = (ulonglong)CONCAT31((int3)(uVar4 >> 8),bVar5);
    }
    else {
      uVar2 = 0;
      bVar5 = false;
    }
    if (bVar5) {
      if (param_2 < 0x10) {
        uVar4 = (int)CONCAT62((int6)(uVar2 >> 0x10),1) << (param_2 & 0x1f);
        uVar2 = (ulonglong)CONCAT31((int3)(uVar4 >> 8),(uVar4 & 0x840) != 0);
      }
      else {
        uVar2 = 0;
      }
      if ((char)uVar2 != '\0') goto LAB_01abc0ea;
    }
    uVar3 = 0;
  }
  return uVar3;
}


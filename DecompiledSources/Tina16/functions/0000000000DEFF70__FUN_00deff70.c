/* Ghidra address: 00deff70 */
/* Ghidra symbol: FUN_00deff70 */


void FUN_00deff70(longlong param_1,longlong param_2)

{
  byte bVar1;
  uint uVar2;
  undefined7 uVar4;
  bool bVar5;
  byte *local_20;
  ulonglong uVar3;
  
  local_20 = *(byte **)(param_1 + 0x48);
  uVar3 = 0;
  FUN_00b909d0(&local_20,0x10);
  bVar1 = *local_20;
  if (bVar1 < 8) {
    uVar2 = (int)CONCAT71((int7)(uVar3 >> 8),1) << (bVar1 & 0x1f);
    uVar3 = (ulonglong)uVar2;
    bVar5 = (uVar2 & 0xfe) != 0;
  }
  else {
    bVar5 = false;
  }
  if (!bVar5) {
    if ((byte)(bVar1 - 8) < 8) {
      uVar2 = (int)CONCAT71((int7)(uVar3 >> 8),1) << (bVar1 - 8 & 0x1f);
      uVar3 = (ulonglong)uVar2;
      bVar5 = (uVar2 & 0x70) != 0;
    }
    else {
      bVar5 = false;
    }
    if (!bVar5) {
      uVar4 = (undefined7)(uVar3 >> 8);
      if (bVar1 == 9) {
        (**(code **)(PTR_PTR_02002658 + 0x88))
                  (param_2,CONCAT71(uVar4,6),*(undefined8 *)(param_2 + 0x390),local_20 + 1);
        return;
      }
      if ((byte)(bVar1 - 8) < 8) {
        bVar5 = ((int)CONCAT71(uVar4,1) << (bVar1 - 8 & 0x1f) & 0xcU) != 0;
      }
      else {
        bVar5 = false;
      }
      if (bVar5) {
        (**(code **)(PTR_PTR_02002658 + (ulonglong)bVar1 * 0x10 + -8))
                  (param_2,6,*(undefined8 *)(param_2 + 0x390),local_20);
        return;
      }
      if (bVar1 == 0xf) {
        (**(code **)(PTR_PTR_02002658 + 0xe8))
                  (param_2,6,*(undefined8 *)(param_2 + 0x390),*(undefined8 *)(local_20 + 1));
        return;
      }
      (**(code **)(PTR_PTR_02002658 + (ulonglong)bVar1 * 0x10 + -8))
                (param_2,6,*(undefined8 *)(param_2 + 0x390),local_20 + 0x11);
      return;
    }
  }
  (**(code **)(PTR_PTR_02002658 + (ulonglong)bVar1 * 0x10 + -8))
            (param_2,6,*(undefined8 *)(param_2 + 0x390),*(undefined8 *)(local_20 + 1));
  return;
}


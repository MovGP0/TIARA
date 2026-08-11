/* Ghidra address: 0110d010 */
/* Ghidra symbol: FUN_0110d010 */


undefined8 FUN_0110d010(byte *param_1,undefined8 param_2,ulonglong param_3)

{
  byte bVar1;
  uint uVar2;
  undefined7 uVar3;
  bool bVar4;
  undefined8 uVar5;
  
  bVar1 = *param_1;
  if (bVar1 < 8) {
    uVar2 = (int)CONCAT71((int7)(param_3 >> 8),1) << (bVar1 & 0x1f);
    param_3 = (ulonglong)uVar2;
    bVar4 = (uVar2 & 0xfe) != 0;
  }
  else {
    bVar4 = false;
  }
  uVar3 = (undefined7)(param_3 >> 8);
  if (bVar4) {
    uVar5 = (**(code **)(PTR_PTR_02002658 + (ulonglong)bVar1 * 0x10 + -0x10))
                      (0,CONCAT71(uVar3,6) & 0xffffffff,param_2,*(undefined8 *)(param_1 + 1),0);
  }
  else if (bVar1 == 9) {
    uVar5 = (**(code **)(PTR_PTR_02002658 + 0x80))
                      (0,CONCAT71(uVar3,6) & 0xffffffff,param_2,param_1 + 1,0);
  }
  else if (bVar1 == 8) {
    uVar5 = (**(code **)(PTR_PTR_02002658 + 0x70))
                      (0,CONCAT71(uVar3,6) & 0xffffffff,param_2,*(undefined8 *)(param_1 + 1),0);
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}


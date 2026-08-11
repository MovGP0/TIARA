/* Ghidra address: 008ff340 */
/* Ghidra symbol: FUN_008ff340 */


undefined8 FUN_008ff340(ushort param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  uVar1 = (ulonglong)param_1;
  if (uVar1 < 0xb8) {
    uVar2 = uVar1;
    if ((uVar1 != 0xb7) && ((uVar2 = uVar1 - 0x2d, 1 < uVar2 && (uVar2 = uVar1 - 0x30, 9 < uVar2))))
    {
LAB_008ff38e:
      uVar3 = FUN_008ff3a0();
      return uVar3;
    }
  }
  else {
    uVar2 = uVar1 - 0x300;
    if ((0x6f < uVar2) && (uVar2 = uVar1 - 0x203f, 1 < uVar2)) goto LAB_008ff38e;
  }
  return CONCAT71((int7)(uVar2 >> 8),1);
}


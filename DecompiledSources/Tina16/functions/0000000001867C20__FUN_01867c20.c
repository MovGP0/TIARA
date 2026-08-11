/* Ghidra address: 01867c20 */
/* Ghidra symbol: FUN_01867c20 */


undefined8 FUN_01867c20(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  bool bVar3;
  
  uVar2 = FUN_00609f90(param_2);
  if ((char)uVar2 == '\a') {
    if (*(byte *)(param_2 + 0xd) < 8) {
      bVar3 = ((int)CONCAT71((int7)((ulonglong)uVar2 >> 8),1) << (*(byte *)(param_2 + 0xd) & 0x1f) &
              6U) != 0;
    }
    else {
      bVar3 = false;
    }
    if (!bVar3) {
      cVar1 = (**(code **)(*param_2 + 0x58))(param_2);
      if (cVar1 == '\0') goto LAB_01867c65;
    }
    uVar2 = 1;
  }
  else {
LAB_01867c65:
    uVar2 = 0;
  }
  return uVar2;
}


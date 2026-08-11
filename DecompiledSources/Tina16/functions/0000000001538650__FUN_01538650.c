/* Ghidra address: 01538650 */
/* Ghidra symbol: FUN_01538650 */


undefined8 FUN_01538650(longlong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  uVar1 = (**(code **)(*param_1 + 0xf8))(param_1);
  uVar1 = uVar1 & 0xffff;
  if (uVar1 < 0xd9) {
    if (uVar1 < 0x3f) {
      uVar2 = uVar1;
      if (uVar1 != 0x3e) {
        if (uVar1 == 0xf) {
          return 2;
        }
        if (uVar1 != 0x10) {
          return 0;
        }
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
      if (uVar1 != 100) {
        if (uVar1 != 0x66) {
          return 0;
        }
        uVar2 = 0;
      }
    }
LAB_015386e9:
    uVar3 = CONCAT71((int7)(uVar2 >> 8),1);
  }
  else {
    if (uVar1 < 0x3ff) {
      if (uVar1 != 0x3fe) {
        uVar2 = uVar1 - 0xd9;
        if (1 < uVar2) {
          if (uVar1 == 0x3ec) {
            return 3;
          }
          return 0;
        }
        goto LAB_015386e9;
      }
    }
    else {
      if (uVar1 == 0x4b0) {
        return 3;
      }
      if (uVar1 != 0x4b1) {
        return 0;
      }
      uVar1 = 0;
    }
    uVar3 = CONCAT71((int7)(uVar1 >> 8),4);
  }
  return uVar3;
}


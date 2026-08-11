/* Ghidra address: 01aa0b10 */
/* Ghidra symbol: FUN_01aa0b10 */


undefined8 FUN_01aa0b10(ulonglong param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 & 0xff;
  if (param_1 < 3) {
    if (param_1 == 0) {
      return 2;
    }
    if (param_1 != 1) {
      if (param_1 != 2) {
        return 4;
      }
      return 3;
    }
    return 4;
  }
  if (param_1 - 3 < 2) {
LAB_01aa0b5f:
    uVar1 = 1;
  }
  else {
    if (param_1 != 5) {
      if (param_1 == 6) goto LAB_01aa0b5f;
      if (param_1 != 7) {
        return 4;
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}


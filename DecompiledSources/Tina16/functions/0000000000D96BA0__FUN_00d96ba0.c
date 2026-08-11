/* Ghidra address: 00d96ba0 */
/* Ghidra symbol: FUN_00d96ba0 */


void FUN_00d96ba0(undefined8 param_1,undefined1 *param_2,byte param_3)

{
  ulonglong uVar1;
  
  *param_2 = 0x10;
  uVar1 = (ulonglong)param_3;
  if (uVar1 < 5) {
    if (uVar1 == 4) {
      *(undefined4 *)(param_2 + 4) = 0x13;
      *(undefined4 *)(param_2 + 8) = 0;
      return;
    }
    if (uVar1 == 2) {
      *(undefined4 *)(param_2 + 4) = 0x11;
      *(undefined4 *)(param_2 + 8) = 0;
      return;
    }
    if (uVar1 == 3) {
      *(undefined4 *)(param_2 + 4) = 0x12;
      *(undefined4 *)(param_2 + 8) = 0;
      return;
    }
  }
  else {
    if (uVar1 - 5 < 3) {
      *(undefined4 *)(param_2 + 4) = 0x14;
      if (param_3 == 5) {
        *(undefined4 *)(param_2 + 8) = 0;
        return;
      }
      if (param_3 != 6) {
        if (param_3 != 7) {
          return;
        }
        *(undefined4 *)(param_2 + 8) = 1;
        return;
      }
      *(undefined4 *)(param_2 + 8) = 1;
      return;
    }
    if (uVar1 - 8 < 3) {
      *(undefined4 *)(param_2 + 4) = 0x15;
      if (param_3 == 8) {
        *(undefined4 *)(param_2 + 8) = 0;
        return;
      }
      if (param_3 != 9) {
        if (param_3 != 10) {
          return;
        }
        *(undefined4 *)(param_2 + 8) = 1;
        return;
      }
      *(undefined4 *)(param_2 + 8) = 1;
      return;
    }
  }
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  return;
}


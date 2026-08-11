/* Ghidra address: 00d968c0 */
/* Ghidra symbol: FUN_00d968c0 */


void FUN_00d968c0(undefined8 param_1,undefined1 *param_2,byte param_3)

{
  ulonglong uVar1;
  
  *param_2 = 2;
  if ((3 < (byte)(param_3 - 2)) && (7 < (byte)(param_3 - 0x13))) {
    *(undefined4 *)(param_2 + 4) = 0xdb;
    uVar1 = (ulonglong)param_3;
    if (uVar1 < 0xf) {
      if (uVar1 == 0xe) goto LAB_00d96a36;
      if (uVar1 != 6) {
        if (uVar1 == 0xb) {
          *(undefined4 *)(param_2 + 8) = 0;
          return;
        }
        if (uVar1 == 0xc) {
          *(undefined4 *)(param_2 + 8) = 1;
          return;
        }
        if (uVar1 == 0xd) {
          *(undefined4 *)(param_2 + 8) = 1;
          return;
        }
LAB_00d96a3f:
        *(undefined4 *)(param_2 + 4) = 0;
        *(undefined4 *)(param_2 + 8) = 0;
        return;
      }
    }
    else if (2 < uVar1 - 0xf) {
      if (uVar1 != 0x12) {
        if (uVar1 - 0x1b < 3) goto LAB_00d96a2d;
        if (uVar1 - 0x1b != 3) goto LAB_00d96a3f;
      }
LAB_00d96a36:
      *(undefined4 *)(param_2 + 8) = 4;
      return;
    }
LAB_00d96a2d:
    *(undefined4 *)(param_2 + 8) = 0;
    return;
  }
  *(undefined4 *)(param_2 + 4) = 5;
  if (param_3 < 0x16) {
    if (param_3 != 0x15) {
      if (5 < param_3) {
        if (param_3 != 0x13) {
          if (param_3 != 0x14) {
            return;
          }
LAB_00d96989:
          *(undefined4 *)(param_2 + 8) = 1;
          return;
        }
LAB_00d9697d:
        *(undefined4 *)(param_2 + 8) = 0;
        return;
      }
      if (param_3 == 5) goto LAB_00d969a1;
      if (param_3 == 2) goto LAB_00d9697d;
      if (param_3 == 3) goto LAB_00d96989;
      if (param_3 != 4) {
        return;
      }
    }
LAB_00d96995:
    *(undefined4 *)(param_2 + 8) = 2;
  }
  else {
    if (param_3 < 0x19) {
      if (param_3 == 0x18) goto LAB_00d96989;
      if (param_3 != 0x16) {
        if (param_3 != 0x17) {
          return;
        }
        goto LAB_00d9697d;
      }
    }
    else {
      if (param_3 == 0x19) goto LAB_00d96995;
      if (param_3 != 0x1a) {
        return;
      }
    }
LAB_00d969a1:
    *(undefined4 *)(param_2 + 8) = 4;
  }
  return;
}


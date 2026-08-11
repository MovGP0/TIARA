/* Ghidra address: 00d96a50 */
/* Ghidra symbol: FUN_00d96a50 */


void FUN_00d96a50(undefined8 param_1,undefined1 *param_2,byte param_3)

{
  *param_2 = 4;
  if ((byte)(param_3 - 2) < 7) {
    *(undefined4 *)(param_2 + 4) = 0xb;
    if (param_3 < 6) {
      if (param_3 == 5) {
        *(undefined4 *)(param_2 + 8) = 4;
      }
      else if (param_3 == 2) {
        *(undefined4 *)(param_2 + 8) = 0;
      }
      else if (param_3 == 3) {
        *(undefined4 *)(param_2 + 8) = 0;
      }
      else if (param_3 == 4) {
        *(undefined4 *)(param_2 + 8) = 0;
      }
    }
    else if (param_3 == 6) {
      *(undefined4 *)(param_2 + 8) = 2;
    }
    else if (param_3 == 7) {
      *(undefined4 *)(param_2 + 8) = 0;
    }
    else if (param_3 == 8) {
      *(undefined4 *)(param_2 + 8) = 0;
    }
  }
  else if (param_3 == 9) {
    *(undefined4 *)(param_2 + 4) = 0xc;
    *(undefined4 *)(param_2 + 8) = 0;
  }
  else if ((byte)(param_3 - 0x15) < 4) {
    *(undefined4 *)(param_2 + 4) = 0xdb;
    if (param_3 == 0x15) {
      *(undefined4 *)(param_2 + 8) = 0;
    }
    else if (param_3 == 0x16) {
      *(undefined4 *)(param_2 + 8) = 1;
    }
    else if (param_3 == 0x17) {
      *(undefined4 *)(param_2 + 8) = 1;
    }
    else if (param_3 == 0x18) {
      *(undefined4 *)(param_2 + 8) = 0;
    }
  }
  else {
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined4 *)(param_2 + 8) = 0;
  }
  return;
}


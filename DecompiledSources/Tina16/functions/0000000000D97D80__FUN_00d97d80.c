/* Ghidra address: 00d97d80 */
/* Ghidra symbol: FUN_00d97d80 */


void FUN_00d97d80(undefined8 param_1,undefined1 *param_2,char param_3)

{
  *param_2 = 0x12;
  if ((byte)(param_3 - 2U) < 4) {
    *(undefined4 *)(param_2 + 4) = 0x19;
    if (param_3 == '\x02') {
      *(undefined4 *)(param_2 + 8) = 0;
    }
    else if (param_3 == '\x03') {
      *(undefined4 *)(param_2 + 8) = 1;
    }
    else if (param_3 == '\x04') {
      *(undefined4 *)(param_2 + 8) = 2;
    }
    else if (param_3 == '\x05') {
      *(undefined4 *)(param_2 + 8) = 3;
    }
  }
  else if ((byte)(param_3 - 6U) < 4) {
    *(undefined4 *)(param_2 + 4) = 0x1a;
    if (param_3 == '\x06') {
      *(undefined4 *)(param_2 + 8) = 0;
    }
    else if (param_3 == '\a') {
      *(undefined4 *)(param_2 + 8) = 1;
    }
    else if (param_3 == '\b') {
      *(undefined4 *)(param_2 + 8) = 2;
    }
    else if (param_3 == '\t') {
      *(undefined4 *)(param_2 + 8) = 3;
    }
  }
  else if ((byte)(param_3 - 10U) < 4) {
    *(undefined4 *)(param_2 + 4) = 0x1b;
    if (param_3 == '\n') {
      *(undefined4 *)(param_2 + 8) = 0;
    }
    else if (param_3 == '\v') {
      *(undefined4 *)(param_2 + 8) = 1;
    }
    else if (param_3 == '\f') {
      *(undefined4 *)(param_2 + 8) = 2;
    }
    else if (param_3 == '\r') {
      *(undefined4 *)(param_2 + 8) = 3;
    }
  }
  else if ((byte)(param_3 - 0xeU) < 4) {
    *(undefined4 *)(param_2 + 4) = 0x1c;
    if (param_3 == '\x0e') {
      *(undefined4 *)(param_2 + 8) = 0;
    }
    else if (param_3 == '\x0f') {
      *(undefined4 *)(param_2 + 8) = 1;
    }
    else if (param_3 == '\x10') {
      *(undefined4 *)(param_2 + 8) = 2;
    }
    else if (param_3 == '\x11') {
      *(undefined4 *)(param_2 + 8) = 3;
    }
  }
  else {
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined4 *)(param_2 + 8) = 0;
  }
  return;
}


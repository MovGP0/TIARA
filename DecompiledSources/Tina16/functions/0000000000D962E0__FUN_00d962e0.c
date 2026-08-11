/* Ghidra address: 00d962e0 */
/* Ghidra symbol: FUN_00d962e0 */


void FUN_00d962e0(undefined8 param_1,undefined1 *param_2,char param_3)

{
  *param_2 = 7;
  if ((byte)(param_3 - 2U) < 3) {
    *(undefined4 *)(param_2 + 4) = 0xd;
    if (param_3 == '\x02') {
      *(undefined4 *)(param_2 + 8) = 0;
    }
    else if (param_3 == '\x03') {
      *(undefined4 *)(param_2 + 8) = 4;
    }
    else if (param_3 == '\x04') {
      *(undefined4 *)(param_2 + 8) = 1;
    }
  }
  else if ((byte)(param_3 - 5U) < 3) {
    *(undefined4 *)(param_2 + 4) = 0xe;
    if (param_3 == '\x05') {
      *(undefined4 *)(param_2 + 8) = 0;
    }
    else if (param_3 == '\x06') {
      *(undefined4 *)(param_2 + 8) = 4;
    }
    else if (param_3 == '\a') {
      *(undefined4 *)(param_2 + 8) = 1;
    }
  }
  else if ((byte)(param_3 - 8U) < 3) {
    *(undefined4 *)(param_2 + 4) = 0xf;
    if (param_3 == '\b') {
      *(undefined4 *)(param_2 + 8) = 0;
    }
    else if (param_3 == '\t') {
      *(undefined4 *)(param_2 + 8) = 4;
    }
    else if (param_3 == '\n') {
      *(undefined4 *)(param_2 + 8) = 1;
    }
  }
  else if ((byte)(param_3 - 0xbU) < 2) {
    *(undefined4 *)(param_2 + 4) = 0x10;
    if (param_3 == '\v') {
      *(undefined4 *)(param_2 + 8) = 0;
    }
    else if (param_3 == '\f') {
      *(undefined4 *)(param_2 + 8) = 1;
    }
  }
  else {
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined4 *)(param_2 + 8) = 0;
  }
  return;
}


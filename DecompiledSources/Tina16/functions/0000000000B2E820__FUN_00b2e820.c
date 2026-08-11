/* Ghidra address: 00b2e820 */
/* Ghidra symbol: FUN_00b2e820 */


void FUN_00b2e820(undefined8 param_1,char *param_2)

{
  ulonglong uVar1;
  
  if (*param_2 == '\0') {
    uVar1 = (ulonglong)**(byte **)(param_2 + 5);
    if (uVar1 < 0x2c) {
      if ((uVar1 != 0x2b) && (uVar1 != 0x26)) {
        if (uVar1 == 0x28) {
          param_2[0xd] = '\x14';
          param_2[0xe] = '\0';
          param_2[0xf] = '\0';
          param_2[0x10] = '\0';
          return;
        }
        if (uVar1 != 0x29) {
          if (uVar1 != 0x2a) {
            return;
          }
          param_2[0xd] = '-';
          param_2[0xe] = '\0';
          param_2[0xf] = '\0';
          param_2[0x10] = '\0';
          return;
        }
        param_2[0xd] = '\x1e';
        param_2[0xe] = '\0';
        param_2[0xf] = '\0';
        param_2[0x10] = '\0';
        return;
      }
    }
    else if (uVar1 != 0x2d) {
      if (uVar1 == 0x2f) {
        param_2[0xd] = '2';
        param_2[0xe] = '\0';
        param_2[0xf] = '\0';
        param_2[0x10] = '\0';
        return;
      }
      if (uVar1 != 0x3a) {
        if (2 < uVar1 - 0x3c) {
          return;
        }
        param_2[0xd] = '#';
        param_2[0xe] = '\0';
        param_2[0xf] = '\0';
        param_2[0x10] = '\0';
        return;
      }
      param_2[0xd] = '$';
      param_2[0xe] = '\0';
      param_2[0xf] = '\0';
      param_2[0x10] = '\0';
      return;
    }
    param_2[0xd] = '(';
    param_2[0xe] = '\0';
    param_2[0xf] = '\0';
    param_2[0x10] = '\0';
  }
  return;
}


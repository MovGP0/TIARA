/* Ghidra address: 00b24b00 */
/* Ghidra symbol: FUN_00b24b00 */


undefined8 FUN_00b24b00(longlong param_1)

{
  undefined8 uVar1;
  
  if ((((((*(short *)(param_1 + 2) == 0) && (*(char *)(param_1 + 7) == '\0')) &&
        (*(char *)(param_1 + 8) == '\0')) &&
       ((*(char *)(param_1 + 0xb) == '\0' && (*(char *)(param_1 + 0xc) == '\0')))) &&
      ((*(char *)(param_1 + 0x16) == '\x01' &&
       ((*(char *)(param_1 + 0x11) == '\0' && (*(char *)(param_1 + 0x12) == '\0')))))) &&
     ((*(char *)(param_1 + 0x13) == '\0' && (*(char *)(param_1 + 0x14) == '\0')))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


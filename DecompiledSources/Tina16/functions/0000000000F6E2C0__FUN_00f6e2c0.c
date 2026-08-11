/* Ghidra address: 00f6e2c0 */
/* Ghidra symbol: FUN_00f6e2c0 */


undefined8 FUN_00f6e2c0(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(char *)(param_1 + 0x93) == '\0') || (*(char *)(param_1 + 0x93) == '\x01')) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


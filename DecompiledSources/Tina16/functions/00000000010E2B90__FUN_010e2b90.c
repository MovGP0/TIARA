/* Ghidra address: 010e2b90 */
/* Ghidra symbol: FUN_010e2b90 */


undefined8 FUN_010e2b90(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(char *)(param_1 + 0x7ec) == '\0') && (*(char *)(param_1 + 0x8d1) == '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


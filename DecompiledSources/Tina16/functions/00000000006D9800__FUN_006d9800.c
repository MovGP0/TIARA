/* Ghidra address: 006d9800 */
/* Ghidra symbol: FUN_006d9800 */


undefined8 FUN_006d9800(longlong param_1)

{
  undefined8 uVar1;
  
  if (((*(char *)(param_1 + 0x4ab) == '\0') && (*(char *)(param_1 + 0xab) == '\0')) &&
     (*(char *)(param_1 + 0xa8) == '\0')) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


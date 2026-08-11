/* Ghidra address: 01bbba20 */
/* Ghidra symbol: FUN_01bbba20 */


undefined8 FUN_01bbba20(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(char *)(param_1 + 0x6a) == '\0') && (*(char *)(param_1 + 0x6b) == '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


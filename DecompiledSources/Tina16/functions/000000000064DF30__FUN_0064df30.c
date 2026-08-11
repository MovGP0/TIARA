/* Ghidra address: 0064df30 */
/* Ghidra symbol: FUN_0064df30 */


undefined8 FUN_0064df30(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(char *)(param_1 + 0xab) == '\0') && (*(char *)(param_1 + 0xa8) == '\0')) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


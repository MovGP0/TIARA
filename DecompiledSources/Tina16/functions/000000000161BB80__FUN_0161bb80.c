/* Ghidra address: 0161bb80 */
/* Ghidra symbol: FUN_0161bb80 */


undefined8 FUN_0161bb80(longlong param_1)

{
  undefined8 uVar1;
  
  if ((((*(char *)(param_1 + 10) == '\0') || (*(char *)(param_1 + 8) != '\0')) ||
      (*(char *)(param_1 + 9) != '\0')) || (*(char *)(param_1 + 0xb) != '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


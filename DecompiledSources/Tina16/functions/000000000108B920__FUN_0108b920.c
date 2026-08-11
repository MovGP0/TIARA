/* Ghidra address: 0108b920 */
/* Ghidra symbol: FUN_0108b920 */


undefined8 FUN_0108b920(longlong param_1)

{
  undefined8 uVar1;
  
  if (((*(char *)(param_1 + 0x4c34) == '\0') ||
      ((*(char *)(param_1 + 0x4c34) != '\0' && (*(int *)(param_1 + 0x6c0) != 0)))) &&
     ((*(char *)(param_1 + 0xbd3) != '\0' || (*(int *)(param_1 + 0x4c9c) == 1)))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


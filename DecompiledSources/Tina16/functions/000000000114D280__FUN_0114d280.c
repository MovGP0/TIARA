/* Ghidra address: 0114d280 */
/* Ghidra symbol: FUN_0114d280 */


void FUN_0114d280(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x7d1) = param_3;
  if (*(char *)(param_1 + 0x100811) != '\0') {
    DAT_020301f0 = param_3;
  }
  FUN_0113f590(DAT_020301e8,DAT_020301f0,param_1 + 0x7c8,1);
  return;
}


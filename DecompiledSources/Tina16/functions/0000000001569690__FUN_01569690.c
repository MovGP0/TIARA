/* Ghidra address: 01569690 */
/* Ghidra symbol: FUN_01569690 */


undefined8 FUN_01569690(longlong param_1)

{
  undefined8 uVar1;
  
  if (((*(char *)(param_1 + 0x950) == '\0') || (*(int *)(param_1 + 0x95c) == 3)) ||
     ((*(char *)(param_1 + 0x952) != '\0' && (*(char *)(param_1 + 0x953) == '\0')))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


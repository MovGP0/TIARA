/* Ghidra address: 017705e0 */
/* Ghidra symbol: FUN_017705e0 */


undefined8 FUN_017705e0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x111) == '\0') {
    uVar1 = 0;
  }
  else if ((*(char *)(param_1 + 0x113) == '\0') && (*(char *)(param_1 + 0x114) != '\0')) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* Ghidra address: 01628c30 */
/* Ghidra symbol: FUN_01628c30 */


undefined8 FUN_01628c30(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(char *)(param_1 + 0x90) == -0x3a) || (*(char *)(param_1 + 0x90) == -0x3b)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


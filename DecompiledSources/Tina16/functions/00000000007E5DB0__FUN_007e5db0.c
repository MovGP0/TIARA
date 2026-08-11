/* Ghidra address: 007e5db0 */
/* Ghidra symbol: FUN_007e5db0 */


undefined8 FUN_007e5db0(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(char *)(param_1 + 0x90) == '\0') && (*(longlong *)(param_1 + 0xa0) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


/* Ghidra address: 00a0b5e0 */
/* Ghidra symbol: FUN_00a0b5e0 */


undefined8 FUN_00a0b5e0(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(char *)(param_1 + 0x69) == '\0') &&
     (*(char *)(*(longlong *)(param_1 + 0x48) + 0x20) == '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


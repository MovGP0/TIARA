/* Ghidra address: 01d04d90 */
/* Ghidra symbol: FUN_01d04d90 */


undefined8 FUN_01d04d90(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(longlong *)(param_1 + 0x1a8) == 0) || (*(char *)(param_1 + 0x1a0) != '\x03')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


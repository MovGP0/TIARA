/* Ghidra address: 01d04d50 */
/* Ghidra symbol: FUN_01d04d50 */


undefined8 FUN_01d04d50(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(longlong *)(param_1 + 0x1a8) == 0) || (*(char *)(param_1 + 0x1a0) != '\x01')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


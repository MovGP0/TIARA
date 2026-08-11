/* Ghidra address: 01d32740 */
/* Ghidra symbol: FUN_01d32740 */


undefined8 FUN_01d32740(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = FUN_004b6da0(*(longlong *)(param_1 + 0x10));
  }
  return uVar1;
}


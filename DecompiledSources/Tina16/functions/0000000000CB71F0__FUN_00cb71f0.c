/* Ghidra address: 00cb71f0 */
/* Ghidra symbol: FUN_00cb71f0 */


undefined8 FUN_00cb71f0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((byte)(*(char *)(param_1 + 0x119) - 1U) < 2) {
    uVar1 = FUN_00cb7790();
  }
  else if (*(char *)(param_1 + 0x119) == '\x03') {
    uVar1 = FUN_00cb7230();
  }
  return uVar1;
}


/* Ghidra address: 008f9bb0 */
/* Ghidra symbol: FUN_008f9bb0 */


undefined8 FUN_008f9bb0(short param_1)

{
  undefined8 uVar1;
  
  if (((ushort)(param_1 - 0x41U) < 0x1a) || ((ushort)(param_1 - 0x61U) < 0x1a)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


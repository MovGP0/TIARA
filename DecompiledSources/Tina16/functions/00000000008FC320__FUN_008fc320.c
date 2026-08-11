/* Ghidra address: 008fc320 */
/* Ghidra symbol: FUN_008fc320 */


undefined8 FUN_008fc320(short param_1)

{
  undefined8 uVar1;
  
  if ((((ushort)(param_1 - 0x30U) < 10) || ((ushort)(param_1 - 0x41U) < 6)) ||
     ((ushort)(param_1 - 0x61U) < 6)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


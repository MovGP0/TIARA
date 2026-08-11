/* Ghidra address: 008fc350 */
/* Ghidra symbol: FUN_008fc350 */


undefined8 FUN_008fc350(short param_1)

{
  undefined8 uVar1;
  
  if ((((ushort)(param_1 - 0x30U) < 10) || ((ushort)(param_1 - 0x41U) < 0x1a)) ||
     ((ushort)(param_1 - 0x61U) < 0x1a)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* Ghidra address: 00ea3230 */
/* Ghidra symbol: FUN_00ea3230 */


undefined8 FUN_00ea3230(short param_1)

{
  undefined8 uVar1;
  
  if (((((ushort)(param_1 - 0x30U) < 10) || ((ushort)(param_1 - 0x41U) < 0x1a)) || (param_1 == 0x5f)
      ) || ((ushort)(param_1 - 0x61U) < 0x1a)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


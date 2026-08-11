/* Ghidra address: 014b1eb0 */
/* Ghidra symbol: FUN_014b1eb0 */


undefined8 FUN_014b1eb0(undefined8 param_1,short param_2)

{
  undefined8 uVar1;
  
  if (((((ushort)(param_2 - 0x30U) < 10) || ((ushort)(param_2 - 0x41U) < 0x1a)) || (param_2 == 0x5f)
      ) || ((ushort)(param_2 - 0x61U) < 0x1a)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


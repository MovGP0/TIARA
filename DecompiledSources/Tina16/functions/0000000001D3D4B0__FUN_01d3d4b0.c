/* Ghidra address: 01d3d4b0 */
/* Ghidra symbol: FUN_01d3d4b0 */


undefined8 FUN_01d3d4b0(ushort param_1)

{
  undefined8 uVar1;
  
  if ((((param_1 < 0x17) || (0x1a < param_1)) || (param_1 == 0x18)) &&
     ((((param_1 < 0xf || (0x12 < param_1)) || (param_1 == 0x10)) &&
      ((param_1 < 0x14 || (0x16 < param_1)))))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


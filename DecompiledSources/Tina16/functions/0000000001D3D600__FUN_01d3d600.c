/* Ghidra address: 01d3d600 */
/* Ghidra symbol: FUN_01d3d600 */


undefined8 FUN_01d3d600(ushort param_1)

{
  undefined8 uVar1;
  
  if ((param_1 < 0x28fd) || (0x28ff < param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


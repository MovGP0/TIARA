/* Ghidra address: 00c53600 */
/* Ghidra symbol: FUN_00c53600 */


undefined8 FUN_00c53600(ushort param_1)

{
  undefined8 uVar1;
  
  if ((param_1 < 0x30) || (0x39 < param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


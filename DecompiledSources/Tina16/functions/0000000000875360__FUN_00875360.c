/* Ghidra address: 00875360 */
/* Ghidra symbol: FUN_00875360 */


undefined8 FUN_00875360(ushort param_1)

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


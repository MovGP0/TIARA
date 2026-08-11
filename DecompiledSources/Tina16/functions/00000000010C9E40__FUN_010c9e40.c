/* Ghidra address: 010c9e40 */
/* Ghidra symbol: FUN_010c9e40 */


undefined8 FUN_010c9e40(undefined8 param_1,ushort param_2)

{
  undefined8 uVar1;
  
  if ((param_2 < 0x30) || (0x39 < param_2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


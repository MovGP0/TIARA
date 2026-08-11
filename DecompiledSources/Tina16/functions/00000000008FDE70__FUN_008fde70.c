/* Ghidra address: 008fde70 */
/* Ghidra symbol: FUN_008fde70 */


undefined8 FUN_008fde70(char param_1)

{
  undefined8 uVar1;
  
  if ((((byte)(param_1 - 0x30U) < 10) || ((byte)(param_1 + 0xbfU) < 0x1a)) ||
     ((byte)(param_1 + 0x9fU) < 0x1a)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


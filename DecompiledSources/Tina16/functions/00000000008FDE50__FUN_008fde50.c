/* Ghidra address: 008fde50 */
/* Ghidra symbol: FUN_008fde50 */


undefined8 FUN_008fde50(char param_1)

{
  undefined8 uVar1;
  
  if ((((byte)(param_1 - 0x30U) < 10) || ((byte)(param_1 + 0xbfU) < 6)) ||
     ((byte)(param_1 + 0x9fU) < 6)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


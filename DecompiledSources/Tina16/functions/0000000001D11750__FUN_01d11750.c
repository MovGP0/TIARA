/* Ghidra address: 01d11750 */
/* Ghidra symbol: FUN_01d11750 */


undefined8 FUN_01d11750(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    uVar1 = 0x3ff0000000000000;
  }
  else {
    uVar1 = 0x3fe8000000000000;
  }
  return uVar1;
}


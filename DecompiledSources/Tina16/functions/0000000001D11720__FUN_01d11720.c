/* Ghidra address: 01d11720 */
/* Ghidra symbol: FUN_01d11720 */


undefined8 FUN_01d11720(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    uVar1 = 0x3ff0666666666666;
  }
  else {
    uVar1 = 0x3fe4cccccccccccd;
  }
  return uVar1;
}


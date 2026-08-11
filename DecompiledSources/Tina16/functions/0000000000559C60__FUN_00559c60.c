/* Ghidra address: 00559c60 */
/* Ghidra symbol: FUN_00559c60 */


undefined8 FUN_00559c60(longlong param_1)

{
  undefined8 uVar1;
  
  if (**(char **)(param_1 + 0x38) == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT71((int7)((ulonglong)*(char **)(param_1 + 0x38) >> 8),1);
  }
  return uVar1;
}


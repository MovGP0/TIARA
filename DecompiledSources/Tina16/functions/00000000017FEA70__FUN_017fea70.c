/* Ghidra address: 017fea70 */
/* Ghidra symbol: FUN_017fea70 */


undefined8 FUN_017fea70(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(char *)(param_1 + 0x708) == '\0') && (*(char *)(param_1 + 0x709) == '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}


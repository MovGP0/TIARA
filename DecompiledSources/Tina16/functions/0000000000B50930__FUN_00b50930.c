/* Ghidra address: 00b50930 */
/* Ghidra symbol: FUN_00b50930 */


undefined8 FUN_00b50930(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x3c) == '\0') {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


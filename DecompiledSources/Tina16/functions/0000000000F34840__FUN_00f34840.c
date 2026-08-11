/* Ghidra address: 00f34840 */
/* Ghidra symbol: FUN_00f34840 */


undefined8 FUN_00f34840(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    uVar1 = 5;
  }
  else {
    uVar1 = 4;
  }
  return uVar1;
}


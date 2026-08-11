/* Ghidra address: 00f74890 */
/* Ghidra symbol: FUN_00f74890 */


undefined8 FUN_00f74890(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x30) == '\b') {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


/* Ghidra address: 00f6f8c0 */
/* Ghidra symbol: FUN_00f6f8c0 */


undefined8 FUN_00f6f8c0(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(char *)(param_1 + 0x30) == '\x01') || (*(char *)(param_1 + 0x30) == '\x02')) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


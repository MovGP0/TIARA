/* Ghidra address: 00a9d880 */
/* Ghidra symbol: FUN_00a9d880 */


undefined8 FUN_00a9d880(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x40) == '\x11') {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = FUN_00a9bf40(*(undefined8 *)(param_1 + 0xa8));
  }
  return uVar1;
}


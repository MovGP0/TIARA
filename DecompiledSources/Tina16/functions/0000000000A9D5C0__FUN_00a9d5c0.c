/* Ghidra address: 00a9d5c0 */
/* Ghidra symbol: FUN_00a9d5c0 */


undefined8 FUN_00a9d5c0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x40) == '\x11') {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = FUN_00a9bee0(*(undefined8 *)(param_1 + 0xa8));
  }
  return uVar1;
}


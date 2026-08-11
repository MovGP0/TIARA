/* Ghidra address: 00a9d590 */
/* Ghidra symbol: FUN_00a9d590 */


undefined8 FUN_00a9d590(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x40) == '\x11') {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = FUN_00a9be60(*(undefined8 *)(param_1 + 0xa8));
  }
  return uVar1;
}


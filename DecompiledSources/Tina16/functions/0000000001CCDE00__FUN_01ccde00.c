/* Ghidra address: 01ccde00 */
/* Ghidra symbol: FUN_01ccde00 */


undefined8 FUN_01ccde00(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(*(longlong *)(param_1 + 0x68) + 0x58) == '\x02') {
    uVar1 = 0x40;
  }
  else {
    uVar1 = 9;
  }
  return uVar1;
}


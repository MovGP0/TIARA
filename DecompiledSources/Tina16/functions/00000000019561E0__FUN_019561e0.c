/* Ghidra address: 019561e0 */
/* Ghidra symbol: FUN_019561e0 */


undefined8 FUN_019561e0(longlong param_1)

{
  undefined8 uVar1;
  
  if (((*(char *)(param_1 + 8) == '\x03') && (*(longlong *)(param_1 + 0x10) == 0)) ||
     ((*(char *)(param_1 + 8) == '\x04' && (*(longlong *)(param_1 + 0x18) == 0)))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


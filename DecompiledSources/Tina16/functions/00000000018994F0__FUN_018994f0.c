/* Ghidra address: 018994f0 */
/* Ghidra symbol: FUN_018994f0 */


undefined8 FUN_018994f0(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(char *)(*(longlong *)(param_1 + 0x4c0) + 0xa9) == '\0') ||
     (*(char *)(*(longlong *)(param_1 + 0x4c8) + 0xa9) == '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x4c8) >> 8),1);
  }
  return uVar1;
}


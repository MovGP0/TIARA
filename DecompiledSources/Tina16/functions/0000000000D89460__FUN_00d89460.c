/* Ghidra address: 00d89460 */
/* Ghidra symbol: FUN_00d89460 */


undefined8 FUN_00d89460(longlong param_1,char param_2)

{
  undefined8 uVar1;
  
  if (param_2 == '\0') {
    uVar1 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x58) >> 8),
                     *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x58) != 0);
  }
  else if ((byte)(param_2 - 5U) < 2) {
    uVar1 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x58) >> 8),
                     *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x60) != 0);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


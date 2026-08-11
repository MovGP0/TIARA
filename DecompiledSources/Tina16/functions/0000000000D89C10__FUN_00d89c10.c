/* Ghidra address: 00d89c10 */
/* Ghidra symbol: FUN_00d89c10 */


undefined8 FUN_00d89c10(longlong param_1,char param_2)

{
  undefined8 uVar1;
  
  if (param_2 == '\0') {
    uVar1 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x58) >> 8),
                     *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x70) != 0);
  }
  else if (param_2 == '\x01') {
    uVar1 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x58) >> 8),
                     *(longlong *)(*(longlong *)(param_1 + 0x58) + 0x78) != 0);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


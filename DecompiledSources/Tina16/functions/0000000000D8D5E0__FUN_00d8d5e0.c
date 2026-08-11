/* Ghidra address: 00d8d5e0 */
/* Ghidra symbol: FUN_00d8d5e0 */


undefined8 FUN_00d8d5e0(longlong param_1,char param_2)

{
  undefined8 uVar1;
  
  if (param_2 == '\0') {
    uVar1 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x58) >> 8),
                     *(longlong *)(*(longlong *)(param_1 + 0x58) + 200) != 0);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


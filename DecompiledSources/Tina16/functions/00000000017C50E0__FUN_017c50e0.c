/* Ghidra address: 017c50e0 */
/* Ghidra symbol: FUN_017c50e0 */


undefined8 FUN_017c50e0(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  if (*(short *)(param_1 + 8) == param_2) {
    uVar1 = CONCAT71((int7)(char)((ushort)*(short *)(param_1 + 8) >> 8),1);
  }
  else if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_017c50e0(*(longlong *)(param_1 + 0x10));
  }
  return uVar1;
}


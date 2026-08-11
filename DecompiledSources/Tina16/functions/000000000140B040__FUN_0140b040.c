/* Ghidra address: 0140b040 */
/* Ghidra symbol: FUN_0140b040 */


uint FUN_0140b040(longlong param_1,int param_2)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 0xb8) == '\0') {
    uVar1 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x98) + (longlong)param_2 * 2);
  }
  else {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x98) + (longlong)param_2 * 4);
  }
  return uVar1;
}


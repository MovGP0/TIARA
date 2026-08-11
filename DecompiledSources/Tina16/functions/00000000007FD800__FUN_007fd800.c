/* Ghidra address: 007fd800 */
/* Ghidra symbol: FUN_007fd800 */


ulonglong FUN_007fd800(longlong param_1)

{
  ulonglong uVar1;
  
  if (((*(ushort *)(param_1 + 0x34) & 0x10) == 0) || (*(longlong *)(param_1 + 0x78) == 0)) {
    uVar1 = (ulonglong)*(uint *)(param_1 + 0x94);
  }
  else {
    uVar1 = (ulonglong)*(short *)(param_1 + 0x30);
  }
  return uVar1;
}


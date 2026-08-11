/* Ghidra address: 007fd7d0 */
/* Ghidra symbol: FUN_007fd7d0 */


ulonglong FUN_007fd7d0(longlong param_1)

{
  ulonglong uVar1;
  
  if (((*(ushort *)(param_1 + 0x34) & 0x10) == 0) || (*(longlong *)(param_1 + 0x78) == 0)) {
    uVar1 = (ulonglong)*(uint *)(param_1 + 0x90);
  }
  else {
    uVar1 = (ulonglong)(short)((uint)*(undefined4 *)(param_1 + 0x30) >> 0x10);
  }
  return uVar1;
}


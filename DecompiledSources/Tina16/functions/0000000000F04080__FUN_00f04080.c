/* Ghidra address: 00f04080 */
/* Ghidra symbol: FUN_00f04080 */


ulonglong FUN_00f04080(longlong param_1)

{
  ulonglong uVar1;
  
  if ((*(ushort *)(*(longlong *)(param_1 + 8) + 0x4f) & 0x20) == 0) {
    uVar1 = FUN_00f03fc0();
  }
  else {
    uVar1 = (ulonglong)*(uint *)(param_1 + 0x20);
  }
  return uVar1;
}


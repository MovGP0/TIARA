/* Ghidra address: 00cb3920 */
/* Ghidra symbol: FUN_00cb3920 */


ulonglong FUN_00cb3920(longlong param_1)

{
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 0x128) == 0) {
    uVar1 = (ulonglong)*(byte *)(param_1 + 0x191);
  }
  else {
    uVar1 = FUN_00cb9d50(*(longlong *)(param_1 + 0x128));
  }
  return uVar1;
}


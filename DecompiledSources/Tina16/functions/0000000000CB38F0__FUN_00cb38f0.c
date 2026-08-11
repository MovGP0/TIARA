/* Ghidra address: 00cb38f0 */
/* Ghidra symbol: FUN_00cb38f0 */


ulonglong FUN_00cb38f0(longlong param_1)

{
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 0x128) == 0) {
    uVar1 = (ulonglong)*(byte *)(param_1 + 400);
  }
  else {
    uVar1 = FUN_00cb9b40(*(longlong *)(param_1 + 0x128));
  }
  return uVar1;
}


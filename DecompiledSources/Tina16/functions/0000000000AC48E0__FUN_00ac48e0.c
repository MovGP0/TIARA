/* Ghidra address: 00ac48e0 */
/* Ghidra symbol: FUN_00ac48e0 */


ulonglong FUN_00ac48e0(longlong param_1)

{
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 0x1a0) == 0) {
    uVar1 = FUN_00ac40c0();
  }
  else {
    uVar1 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x1a0) + 0x490);
  }
  return uVar1;
}


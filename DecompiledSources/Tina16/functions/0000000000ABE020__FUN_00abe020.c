/* Ghidra address: 00abe020 */
/* Ghidra symbol: FUN_00abe020 */


ulonglong FUN_00abe020(longlong param_1)

{
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 0x1a0) == 0) {
    uVar1 = FUN_00ac40c0();
  }
  else {
    uVar1 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x1a0) + 200);
  }
  return uVar1;
}


/* Ghidra address: 00aa8a50 */
/* Ghidra symbol: FUN_00aa8a50 */


ulonglong FUN_00aa8a50(longlong param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_00ac3860(param_1);
  if ((int)uVar1 < 0) {
    uVar1 = (ulonglong)*(uint *)(param_1 + 0x34);
  }
  return uVar1;
}


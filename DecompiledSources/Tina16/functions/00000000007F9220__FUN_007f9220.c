/* Ghidra address: 007f9220 */
/* Ghidra symbol: FUN_007f9220 */


ulonglong FUN_007f9220(longlong param_1)

{
  ulonglong uVar1;
  
  if (param_1 == *(longlong *)(DAT_02012668 + 0x2d0)) {
    uVar1 = (ulonglong)-(uint)(*(char *)(DAT_02012668 + 0x78) != '\0');
  }
  else {
    uVar1 = thunk_FUN_03d44949();
  }
  return uVar1;
}


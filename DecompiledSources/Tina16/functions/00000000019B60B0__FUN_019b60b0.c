/* Ghidra address: 019b60b0 */
/* Ghidra symbol: FUN_019b60b0 */


ulonglong FUN_019b60b0(longlong param_1,int param_2,undefined8 param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  if (-1 < param_2) {
    FUN_019b5ce0(param_1,param_3);
  }
  iVar2 = 1;
  for (; (iVar2 <= (int)((longlong)param_2 / 500) && (param_1 != 0));
      param_1 = *(longlong *)(param_1 + 0x3f0)) {
    iVar2 = iVar2 + 1;
  }
  if (param_1 == 0) {
    uVar1 = CONCAT62((uint6)((ulonglong)((longlong)param_2 / 500) >> 0x10) & 0xffff,0x20);
  }
  else {
    uVar1 = (ulonglong)*(ushort *)(param_1 + 2 + (longlong)(param_2 % 500) * 2);
  }
  return uVar1;
}


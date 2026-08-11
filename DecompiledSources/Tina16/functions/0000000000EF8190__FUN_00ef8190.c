/* Ghidra address: 00ef8190 */
/* Ghidra symbol: FUN_00ef8190 */


ulonglong FUN_00ef8190(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  iVar2 = 1;
  for (; (iVar2 <= (int)((longlong)param_2 / 500) && (param_1 != 0));
      param_1 = *(longlong *)(param_1 + 0x3f0)) {
    iVar2 = iVar2 + 1;
  }
  if ((param_1 == 0) || (param_2 < 0)) {
    uVar1 = CONCAT62((uint6)((ulonglong)((longlong)param_2 / 500) >> 0x10) & 0xffff,9);
  }
  else {
    uVar1 = (ulonglong)*(ushort *)(param_1 + 2 + (longlong)(param_2 % 500) * 2);
  }
  return uVar1;
}


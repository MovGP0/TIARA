/* Ghidra address: 0040f630 */
/* Ghidra symbol: FUN_0040f630 */


ulonglong FUN_0040f630(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = param_3;
  if (-1 < param_3 + -1) {
    do {
      *(undefined1 *)(param_1 + (int)uVar1) = 0;
      uVar1 = (ulonglong)((int)uVar1 + 1);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if ((-1 < param_2) &&
     (uVar1 = (longlong)param_2 / 8 & 0xffffffff, (int)((longlong)param_2 / 8) < param_3)) {
    uVar1 = (longlong)param_2 / 8 & 0xffffffff;
    *(char *)(param_1 + param_2 / 8) = (char)(1 << ((byte)(param_2 % 8) & 0x1f));
  }
  return uVar1;
}


/* Ghidra address: 0119a520 */
/* Ghidra symbol: FUN_0119a520 */


ulonglong FUN_0119a520(int param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = 1;
  iVar2 = 0;
  iVar3 = param_2;
  if (param_2 - 1U < 0x80000000) {
    do {
      uVar1 = (ulonglong)(uint)((int)uVar1 * (param_1 - iVar2));
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = 0;
  if (-1 < param_2 + -1) {
    do {
      uVar1 = (longlong)(int)uVar1 / (longlong)(iVar3 + 1) & 0xffffffff;
      iVar3 = iVar3 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return uVar1;
}


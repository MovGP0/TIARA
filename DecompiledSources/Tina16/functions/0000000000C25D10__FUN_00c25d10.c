/* Ghidra address: 00c25d10 */
/* Ghidra symbol: FUN_00c25d10 */


int FUN_00c25d10(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined1 *)(param_1 + 0x134) = 1;
  iVar2 = param_3;
  while (0 < iVar2) {
    for (; (iVar1 = *(int *)(param_1 + 0x130), iVar1 < 0x100 && (0 < iVar2)); iVar2 = iVar2 - iVar3)
    {
      iVar3 = 0x100 - iVar1;
      if (iVar2 < 0x100 - iVar1) {
        iVar3 = iVar2;
      }
      FUN_00409a70(param_2,param_1 + 0x30 + (longlong)iVar1,(longlong)iVar3);
      param_2 = param_2 + iVar3;
      *(int *)(param_1 + 0x130) = *(int *)(param_1 + 0x130) + iVar3;
    }
    if (0xff < *(int *)(param_1 + 0x130)) {
      FUN_00c25cc0(param_1);
    }
  }
  return param_3;
}


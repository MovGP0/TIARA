/* Ghidra address: 00ea0bf0 */
/* Ghidra symbol: FUN_00ea0bf0 */


ulonglong FUN_00ea0bf0(longlong param_1,longlong param_2,int param_3,int param_4,longlong *param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  
  uVar2 = 0xfffffff9;
  if ((-1 < param_4) && (param_4 < param_3)) {
    uVar2 = (longlong)*(int *)(param_2 + (longlong)(param_4 * 2 + 1) * 4) -
            (longlong)*(int *)(param_2 + (longlong)(param_4 * 2) * 4);
    lVar1 = (*(code *)PTR_FUN_01edf908)((longlong)((int)uVar2 * 2 + 2));
    if (lVar1 == 0) {
      uVar2 = 0xfffffffa;
    }
    else {
      FUN_00626670(lVar1,param_1 + (longlong)*(int *)(param_2 + (longlong)(param_4 * 2) * 4) * 2,
                   (longlong)((int)uVar2 * 2));
      *(undefined2 *)(lVar1 + uVar2 * 2) = 0;
      *param_5 = lVar1;
    }
  }
  return uVar2 & 0xffffffff;
}


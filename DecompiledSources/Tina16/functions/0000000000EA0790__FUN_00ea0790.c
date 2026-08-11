/* Ghidra address: 00ea0790 */
/* Ghidra symbol: FUN_00ea0790 */


ulonglong FUN_00ea0790(longlong param_1,longlong param_2,int param_3,int param_4,longlong param_5,
                      int param_6)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar1 = 0xfffffff9;
  if ((-1 < param_4) && (param_4 < param_3)) {
    lVar2 = (longlong)*(int *)(param_2 + (longlong)(param_4 * 2) * 4);
    uVar3 = *(int *)(param_2 + (longlong)(param_4 * 2 + 1) * 4) - lVar2;
    uVar1 = 0xfffffffa;
    if ((int)uVar3 < param_6) {
      FUN_00626670(param_5,param_1 + lVar2 * 2,uVar3 * 2);
      *(undefined2 *)(param_5 + (longlong)(int)uVar3 * 2) = 0;
      uVar1 = uVar3 & 0xffffffff;
    }
  }
  return uVar1;
}


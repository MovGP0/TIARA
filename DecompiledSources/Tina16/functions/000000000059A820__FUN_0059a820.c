/* Ghidra address: 0059a820 */
/* Ghidra symbol: FUN_0059a820 */


void FUN_0059a820(longlong *param_1,uint param_2,longlong param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  
  if (*(uint *)(param_1 + 1) < param_2) {
    FUN_00594f90();
  }
  FUN_005950e0(param_1,(int)param_1[1] + param_4);
  lVar2 = (longlong)*(int *)(param_1[2] + 2 + (ulonglong)*(byte *)(param_1[2] + 1));
  if (param_2 != *(uint *)(param_1 + 1)) {
    FUN_00409a70(*param_1 + (int)param_2 * lVar2,*param_1 + (int)(param_2 + param_4) * lVar2,
                 (int)(*(uint *)(param_1 + 1) - param_2) * lVar2);
  }
  FUN_00409a70(param_3,*param_1 + (int)param_2 * lVar2,param_4 * lVar2);
  *(int *)(param_1 + 1) = (int)param_1[1] + param_4;
  if ((param_1[4] != 0) && (iVar1 = 0, -1 < param_4 + -1)) {
    do {
      (*(code *)param_1[4])(param_1[3],param_3 + iVar1 * lVar2,1);
      iVar1 = iVar1 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}


/* Ghidra address: 0059a6a0 */
/* Ghidra symbol: FUN_0059a6a0 */


void FUN_0059a6a0(longlong *param_1,uint param_2,longlong param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  
  if (*(uint *)(param_1 + 1) < param_2) {
    FUN_00594f90();
  }
  FUN_005950e0(param_1,(int)param_1[1] + param_4);
  iVar1 = *(int *)(param_1[2] + 2 + (ulonglong)*(byte *)(param_1[2] + 1));
  lVar2 = (longlong)iVar1;
  if (param_2 != *(uint *)(param_1 + 1)) {
    FUN_00409a70(*param_1 + (int)param_2 * lVar2,*param_1 + (int)(param_2 + param_4) * lVar2,
                 lVar2 * (int)(*(uint *)(param_1 + 1) - param_2));
    FUN_0040d200(*param_1 + (int)param_2 * lVar2,param_4 * lVar2,0);
  }
  FUN_00594fc0(*param_1 + (int)param_2 * lVar2,param_3,
               **(undefined8 **)(param_1[2] + 6 + (ulonglong)*(byte *)(param_1[2] + 1)),iVar1,
               (longlong)param_4);
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


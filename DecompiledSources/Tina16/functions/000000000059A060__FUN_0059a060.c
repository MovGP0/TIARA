/* Ghidra address: 0059a060 */
/* Ghidra symbol: FUN_0059a060 */


void FUN_0059a060(longlong *param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  
  if (*(uint *)(param_1 + 1) < param_2) {
    FUN_00594f90();
  }
  lVar1 = 0;
  if (*param_1 != 0) {
    lVar1 = *(longlong *)(*param_1 + -8);
  }
  if ((int)param_1[1] == lVar1) {
    FUN_00595060(param_1,(int)param_1[1] + 1);
  }
  lVar1 = (longlong)*(int *)(param_1[2] + 2 + (ulonglong)*(byte *)(param_1[2] + 1));
  if (param_2 != *(uint *)(param_1 + 1)) {
    FUN_00409a70(*param_1 + (int)param_2 * lVar1,*param_1 + (int)(param_2 + 1) * lVar1,
                 (int)(*(uint *)(param_1 + 1) - param_2) * lVar1);
    FUN_0040d200(*param_1 + (int)param_2 * lVar1,lVar1,0);
  }
  FUN_004185b0(*param_1 + (int)param_2 * lVar1,param_3,
               **(undefined8 **)(param_1[2] + 6 + (ulonglong)*(byte *)(param_1[2] + 1)),1);
  *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  if (param_1[4] != 0) {
    (*(code *)param_1[4])(param_1[3],param_3,1);
  }
  return;
}


/* Ghidra address: 01103390 */
/* Ghidra symbol: FUN_01103390 */


void FUN_01103390(longlong param_1,double param_2,undefined8 *param_3,undefined8 *param_4)

{
  double *pdVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x80) != 0) {
    if ((*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x188) == 0) ||
       (pdVar1 = (double *)(*(longlong *)(param_1 + 0x80) + 0x168),
       param_2 < *pdVar1 || param_2 == *pdVar1)) {
      if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0xe0) + 0x2c) < 2) {
        *param_3 = 0;
        *param_4 = 0;
      }
      else {
        FUN_01cc9480(param_1,param_2,param_3,param_4);
      }
    }
    else {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x188);
      (**(code **)(**(longlong **)(lVar2 + 200) + 0x10))
                (*(longlong **)(lVar2 + 200),*(undefined8 *)(lVar2 + 0xe0),1);
      plVar3 = (longlong *)FUN_004113f0(*(undefined8 *)(lVar2 + 200),&PTR_FUN_010ff630);
      (**(code **)(*plVar3 + 0x90))(plVar3,param_2,param_3,param_4);
      FUN_01cc9480(param_1,param_2,param_3,param_4);
    }
  }
  return;
}


/* Ghidra address: 017bd630 */
/* Ghidra symbol: FUN_017bd630 */


void FUN_017bd630(longlong *param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong lVar1;
  
  if (*(char *)((longlong)param_1 + 0xaa) == '\0') {
    lVar1 = param_1[1];
    if ((char)lVar1 != '\0') {
      (**(code **)(*param_1 + 0xa8))(param_1,param_2);
    }
    *(int *)(param_1 + 0x17) = ((int)param_1[0x17] - *(int *)((longlong)param_1 + 0xc)) + param_3;
    *(int *)((longlong)param_1 + 0xbc) =
         (*(int *)((longlong)param_1 + 0xbc) - (int)param_1[2]) + param_4;
    *(int *)((longlong)param_1 + 0xc) = param_3;
    *(int *)(param_1 + 2) = param_4;
    if ((char)lVar1 != '\0') {
      (**(code **)(*param_1 + 0xa0))(param_1,param_2);
    }
  }
  else {
    FUN_017be070(param_1,param_2,param_3,param_4);
  }
  return;
}


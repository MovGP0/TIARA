/* Ghidra address: 00c56f60 */
/* Ghidra symbol: FUN_00c56f60 */


void FUN_00c56f60(longlong *param_1,char param_2)

{
  undefined1 local_28 [16];
  
  FUN_00498370(local_28,(int)param_1[0x12],*(undefined4 *)((longlong)param_1 + 0x94),
               ((int)param_1[0x13] / *(int *)((longlong)param_1 + 0x504)) *
               *(int *)((longlong)param_1 + 0x504),
               (*(int *)((longlong)param_1 + 0x9c) / (int)param_1[0xa1]) * (int)param_1[0xa1]);
  FUN_0064d040(param_1,local_28);
  *(int *)((longlong)param_1 + 0x4fc) = (int)param_1[0x13] / *(int *)((longlong)param_1 + 0x504);
  *(int *)(param_1 + 0xa0) = *(int *)((longlong)param_1 + 0x9c) / (int)param_1[0xa1];
  if (param_2 != '\0') {
    (**(code **)(*param_1 + 0x180))
              (param_1,(longlong)*(int *)((longlong)param_1 + 0x9c) % (longlong)(int)param_1[0xa1] &
                       0xffffffff);
  }
  return;
}


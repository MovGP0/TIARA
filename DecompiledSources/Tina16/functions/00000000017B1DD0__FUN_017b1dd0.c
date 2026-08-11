/* Ghidra address: 017b1dd0 */
/* Ghidra symbol: FUN_017b1dd0 */


void FUN_017b1dd0(longlong *param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_40 [2];
  
  (**(code **)(*param_1 + 0x70))(param_1,param_2,0xf);
  iVar1 = *(int *)((longlong)param_1 + 0x24);
  if (iVar1 == -1) {
    *(int *)(param_1 + 9) = (int)param_1[9] - (int)param_1[3];
    *(int *)((longlong)param_1 + 0x4c) =
         *(int *)((longlong)param_1 + 0x4c) - *(int *)((longlong)param_1 + 0x1c);
    local_40[0] = FUN_00498310((int)param_1[2] + param_3,
                               *(int *)((longlong)param_1 + 0x14) + param_4);
    (**(code **)*param_1)(param_1,local_40);
    *(int *)(param_1 + 9) = (int)param_1[9] + (int)param_1[3];
    *(int *)((longlong)param_1 + 0x4c) =
         *(int *)((longlong)param_1 + 0x4c) + *(int *)((longlong)param_1 + 0x1c);
  }
  else if (iVar1 == 0) {
    local_40[0] = FUN_00498310((int)param_1[2] + param_3,
                               *(int *)((longlong)param_1 + 0x14) + param_4);
    (**(code **)*param_1)(param_1,local_40);
  }
  else if (iVar1 == 1) {
    lVar2 = FUN_00498310((int)param_1[2] + param_3,*(int *)((longlong)param_1 + 0x14) + param_4);
    param_1[9] = lVar2;
  }
  (**(code **)(*param_1 + 0x70))(param_1,param_2,0xf);
  return;
}


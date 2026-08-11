/* Ghidra address: 017b4b10 */
/* Ghidra symbol: FUN_017b4b10 */


void FUN_017b4b10(longlong *param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined8 local_40 [2];
  
  (**(code **)(*param_1 + 0x70))(param_1,param_2,0xf);
  if (*(int *)((longlong)param_1 + 0x24) == -1) {
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
  else {
    *(int *)(param_1[0xb] + (longlong)*(int *)((longlong)param_1 + 0x24) * 8) =
         (int)param_1[0xe] + param_3 + ((int)param_1[2] - (int)param_1[3]);
    *(int *)(param_1[0xb] + 4 + (longlong)*(int *)((longlong)param_1 + 0x24) * 8) =
         *(int *)((longlong)param_1 + 0x74) + param_4 +
         (*(int *)((longlong)param_1 + 0x14) - *(int *)((longlong)param_1 + 0x1c));
  }
  (**(code **)(*param_1 + 0x70))(param_1,param_2,0xf);
  return;
}


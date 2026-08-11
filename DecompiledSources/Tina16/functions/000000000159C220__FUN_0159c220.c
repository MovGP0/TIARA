/* Ghidra address: 0159c220 */
/* Ghidra symbol: FUN_0159c220 */


uint FUN_0159c220(longlong *param_1,undefined8 param_2,uint param_3)

{
  undefined4 uVar1;
  uint local_18;
  
  local_18 = *(uint *)(param_1 + 1);
  if (param_3 < local_18) {
    local_18 = param_3;
  }
  if (local_18 == 0) {
    local_18 = 0;
  }
  else {
    *(uint *)(param_1 + 1) = (int)param_1[1] - local_18;
    FUN_01596930(param_2,*param_1,local_18);
    if (*(int *)(param_1[5] + 0x24) == 1) {
      uVar1 = FUN_015a5730(*(undefined4 *)((longlong)param_1 + 0x4c),param_2,local_18);
      *(undefined4 *)((longlong)param_1 + 0x4c) = uVar1;
    }
    else if (*(int *)(param_1[5] + 0x24) == 2) {
      uVar1 = FUN_015a60c0(*(undefined4 *)((longlong)param_1 + 0x4c),param_2,local_18);
      *(undefined4 *)((longlong)param_1 + 0x4c) = uVar1;
    }
    *param_1 = (ulonglong)local_18 + *param_1;
    *(uint *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + local_18;
  }
  return local_18;
}


/* Ghidra address: 00844b60 */
/* Ghidra symbol: FUN_00844b60 */


void FUN_00844b60(longlong *param_1,int param_2,int param_3,char param_4,char param_5)

{
  char cVar1;
  undefined8 local_40 [2];
  undefined8 local_30;
  undefined1 local_28 [24];
  
  local_40[0] = 0;
  if ((((param_2 < 0) || (param_3 < 0)) || (*(int *)((longlong)param_1 + 0x4a4) <= param_2)) ||
     ((int)param_1[0x9c] <= param_3)) {
    FUN_0041ddd0(local_40,PTR_PTR_02004318);
    FUN_0083d530(local_40[0]);
  }
  cVar1 = (**(code **)(*param_1 + 0x2a8))(param_1,param_2,param_3);
  if (cVar1 != '\0') {
    FUN_008482c0(param_1,local_28);
    local_30 = param_1[0x95];
    *(int *)(param_1 + 0x95) = param_2;
    *(int *)((longlong)param_1 + 0x4ac) = param_3;
    if ((*(uint *)((longlong)param_1 + 0x4d4) & 0x2000) == 0) {
      FUN_0083f790(param_1);
    }
    if (((param_4 != '\0') || ((*(uint *)((longlong)param_1 + 0x4d4) & 0x10) == 0)) &&
       (param_1[0x93] = param_1[0x95], (*(uint *)((longlong)param_1 + 0x4d4) & 0x1000) != 0)) {
      *(int *)(param_1 + 0x93) = *(int *)((longlong)param_1 + 0x4a4) + -1;
    }
    if ((*(uint *)((longlong)param_1 + 0x4d4) & 0x1000) != 0) {
      *(undefined4 *)(param_1 + 0x95) = *(undefined4 *)((longlong)param_1 + 0x4bc);
    }
    if (param_5 != '\0') {
      FUN_00842a20(param_1,param_1 + 0x95);
    }
    (**(code **)(*param_1 + 0x288))(param_1,local_28);
    FUN_008441f0(param_1,local_30 & 0xffffffff,local_30._4_4_);
    FUN_008441f0(param_1,param_2,param_3);
  }
  FUN_00414480(local_40);
  return;
}


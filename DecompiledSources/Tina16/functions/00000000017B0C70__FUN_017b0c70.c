/* Ghidra address: 017b0c70 */
/* Ghidra symbol: FUN_017b0c70 */


void FUN_017b0c70(undefined8 *param_1,int *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_20 = FUN_00498310(*(int *)(param_1 + 3) - *(int *)(param_1 + 2),
                          *(int *)((longlong)param_1 + 0x1c) - *(int *)((longlong)param_1 + 0x14));
  uVar1 = *(byte *)((longlong)param_1 + 0x147) + 1;
  if (3 < uVar1) {
    uVar1 = 0;
  }
  *(char *)((longlong)param_1 + 0x147) = (char)uVar1;
  if (*param_2 < 0x7fffffff) {
    local_30[0] = FUN_017ad6c0(param_1 + 3,param_2);
    (**(code **)*param_1)(param_1,local_30);
  }
  else {
    *(undefined8 *)param_2 = param_1[3];
  }
  uVar2 = FUN_00498310(*(int *)(param_1 + 3) - (int)local_20,
                       *(int *)((longlong)param_1 + 0x1c) - local_20._4_4_);
  param_1[2] = uVar2;
  return;
}


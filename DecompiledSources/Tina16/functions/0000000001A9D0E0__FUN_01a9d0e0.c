/* Ghidra address: 01a9d0e0 */
/* Ghidra symbol: FUN_01a9d0e0 */


void FUN_01a9d0e0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = FUN_00498310(param_2,param_3);
  local_20 = FUN_01a9cdf0(param_1,&local_30);
  local_30 = FUN_00498310(param_4,param_5);
  local_28 = FUN_01a9cdf0(param_1,&local_30);
  if ((int)local_28 < (int)local_20) {
    FUN_01cefdf0(&local_20,&local_28);
  }
  if (local_28._4_4_ < local_20._4_4_) {
    FUN_01cefdf0((longlong)&local_20 + 4,(longlong)&local_28 + 4);
  }
  FUN_01a98380(param_1,local_20 & 0xffffffff,local_20._4_4_,&local_20,(longlong)&local_20 + 4);
  FUN_01a98380(param_1,local_28 & 0xffffffff,local_28._4_4_,&local_28,(longlong)&local_28 + 4);
  if (*(char *)(param_1 + 0x12d) == '\0') {
    thunk_FUN_041d615e(*(undefined8 *)(param_1 + 0x148),(int)local_20 - *(int *)(param_1 + 0x188),
                       local_20._4_4_ - *(int *)(param_1 + 0x18c),
                       (int)local_28 - *(int *)(param_1 + 0x188),
                       local_28._4_4_ - *(int *)(param_1 + 0x18c));
  }
  return;
}


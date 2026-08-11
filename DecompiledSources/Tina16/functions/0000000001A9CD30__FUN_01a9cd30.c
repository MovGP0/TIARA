/* Ghidra address: 01a9cd30 */
/* Ghidra symbol: FUN_01a9cd30 */


void FUN_01a9cd30(longlong param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  int local_res10 [2];
  int local_res18 [4];
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  local_30[0] = FUN_00498310(param_2,param_3);
  uVar2 = FUN_01a9cdf0(param_1,local_30);
  local_20._4_4_ = (undefined4)(uVar2 >> 0x20);
  uVar1 = local_20._4_4_;
  local_20 = uVar2;
  FUN_01a98380(param_1,uVar2 & 0xffffffff,uVar1,local_res10,local_res18);
  if (*(char *)(param_1 + 0x12d) == '\0') {
    thunk_FUN_04151b0d(*(undefined8 *)(param_1 + 0x148),local_res10[0] - *(int *)(param_1 + 0x188),
                       local_res18[0] - *(int *)(param_1 + 0x18c));
    thunk_FUN_04124c0c(*(undefined8 *)(param_1 + 0x148),local_res10[0] - *(int *)(param_1 + 0x188),
                       local_res18[0] - *(int *)(param_1 + 0x18c),*(undefined4 *)(param_1 + 0x88));
  }
  return;
}


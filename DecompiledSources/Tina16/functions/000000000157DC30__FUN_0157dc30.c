/* Ghidra address: 0157dc30 */
/* Ghidra symbol: FUN_0157dc30 */


undefined8 FUN_0157dc30(longlong *param_1,undefined8 param_2,uint param_3)

{
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined1 *local_e0;
  longlong local_d0;
  longlong local_c8;
  undefined8 local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined1 local_a4 [66];
  undefined1 local_62 [42];
  longlong local_38;
  undefined8 local_20;
  
  local_e0 = auStack_118;
  local_20 = 0;
  FUN_00417580(local_a4,&DAT_015764a8);
  FUN_00417580(local_62,&DAT_015764a8);
  FUN_00417740(local_a4,&DAT_015764a8);
  local_b0 = param_1[6];
  if (*(uint *)(local_b0 + 0x10) <= param_3) {
    FUN_00594f90();
  }
  FUN_00417c40(local_a4,*(longlong *)(local_b0 + 8) + (longlong)(int)param_3 * 0x42,&DAT_015764a8);
  local_c0 = (**(code **)(*param_1 + 0x28))(param_1,local_a4);
  FUN_00417740(local_62,&DAT_015764a8);
  local_b8 = param_1[6];
  if (*(uint *)(local_b8 + 0x10) <= param_3) {
    FUN_00594f90();
  }
  FUN_00417c40(local_62,*(longlong *)(local_b8 + 8) + (longlong)(int)param_3 * 0x42,&DAT_015764a8);
  FUN_00414480(&local_20);
  local_c8 = local_38;
  local_d0 = local_38;
  if (local_38 != 0) {
    local_d0 = *(longlong *)(local_38 + -8);
  }
  local_f8 = (undefined4)local_d0;
  FUN_0045aba0(local_c0,&local_20,local_38,0);
  FUN_00414ad0(param_2,local_20);
  FUN_00414480(&local_20);
  FUN_00417740(local_62,&DAT_015764a8);
  FUN_00417740(local_a4,&DAT_015764a8);
  FUN_00417840(local_a4,&DAT_015764a8,2);
  FUN_00414480(&local_20);
  return param_2;
}


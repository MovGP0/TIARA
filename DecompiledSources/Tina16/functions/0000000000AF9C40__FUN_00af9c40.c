/* Ghidra address: 00af9c40 */
/* Ghidra symbol: FUN_00af9c40 */


void FUN_00af9c40(longlong param_1,char param_2,undefined8 *param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined1 auStack_b8 [32];
  int local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 *local_80;
  undefined1 *local_70;
  int local_68;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  int local_54;
  int local_50;
  undefined1 local_4c [16];
  int local_3c;
  int local_38;
  int local_34;
  code *local_30;
  undefined8 local_28;
  longlong *local_20;
  
  local_70 = auStack_b8;
  local_30 = (code *)*param_3;
  local_28 = param_3[1];
  if (local_30 != (code *)0x0) {
    local_54 = *(int *)(param_1 + 0x1dc);
    local_58 = *(int *)(param_1 + 0x1dc) + *(int *)(param_1 + 0x1d8);
    local_98 = CONCAT31(local_98._1_3_,
                        *(int *)(param_1 + 0x1a4) < *(int *)(*(longlong *)(param_1 + 0x1a8) + 0x218)
                       );
    local_90 = &local_54;
    local_88 = &local_58;
    local_80 = (undefined4 *)(param_1 + 0x1ff);
    (*local_30)(local_28,*(undefined8 *)(param_1 + 0x230),param_4,
                *(undefined4 *)(*(longlong *)(param_1 + 0x230) + 0x9b8));
    local_20 = (longlong *)FUN_00aa5de0(&PTR_FUN_00a90568,1,*(undefined8 *)(param_4 + 0x8b0));
    *(undefined1 *)((longlong)local_20 + 0x92) = 1;
    *(bool *)((longlong)local_20 + 0x2bd) = *(char *)(param_1 + 0x250) == '\x01';
    *(undefined4 *)(local_20 + 0x60) = *(undefined4 *)(param_1 + 0x1a0);
    *(undefined4 *)((longlong)local_20 + 0x304) = *(undefined4 *)(param_1 + 0x19c);
    local_5c = 0;
    local_60 = 0;
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x238) + 0x88))(*(longlong **)(param_1 + 0x238));
    local_98 = 300;
    local_90 = (int *)((ulonglong)local_90 & 0xffffffff00000000);
    local_88 = &local_5c;
    local_80 = &local_60;
    local_50 = (**(code **)(*local_20 + 0x30))(local_20,uVar1,0,local_58 - local_54);
    if (param_2 == '\0') {
      local_34 = 0;
      local_3c = *(int *)(param_1 + 0x1d4);
      local_38 = local_50 - *(int *)(param_1 + 0x1d4);
    }
    else {
      local_64 = *(int *)(param_1 + 0x1d4) + *(int *)(param_1 + 0x1d0);
      local_34 = -local_64;
      local_64 = *(int *)(param_1 + 0x198) - local_64;
      local_68 = local_50;
      if (local_64 < local_50) {
        local_68 = local_64;
      }
      local_3c = local_68;
      local_38 = 0;
    }
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x238) + 0x88))(*(longlong **)(param_1 + 0x238));
    uVar1 = FUN_005ffa40(uVar1);
    thunk_FUN_0418c361(uVar1,0,local_34,0);
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x238) + 0x88))(*(longlong **)(param_1 + 0x238));
    local_98 = local_58 - local_54;
    local_90._0_4_ = local_50;
    local_88._0_4_ = *(undefined4 *)(*(longlong *)(param_4 + 0x740) + 200);
    FUN_00af75c0(param_4,uVar1,local_54,-local_38);
    FUN_00aa66b0(local_20,local_38);
    local_98 = local_3c;
    FUN_004238d0(local_4c,local_54,0,local_58);
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x238) + 0x88))(*(longlong **)(param_1 + 0x238));
    local_98 = local_54;
    local_90 = (int *)((ulonglong)local_90._4_4_ << 0x20);
    local_88 = (int *)((ulonglong)local_88._4_4_ << 0x20);
    local_80 = (undefined4 *)((ulonglong)local_80 & 0xffffffff00000000);
    (**(code **)(*local_20 + 0x38))(local_20,uVar1,local_4c,local_58 - local_54);
    FUN_00410f20(local_20);
  }
  return;
}


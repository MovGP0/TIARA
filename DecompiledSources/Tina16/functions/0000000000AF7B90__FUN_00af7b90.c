/* Ghidra address: 00af7b90 */
/* Ghidra symbol: FUN_00af7b90 */


void FUN_00af7b90(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_138 [32];
  int local_118;
  int local_110;
  longlong *local_108;
  int local_100;
  int *local_f8;
  int *local_f0;
  int *local_e8;
  int *local_e0;
  undefined1 local_d0 [8];
  undefined4 local_c8;
  int local_c4;
  undefined1 *local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  longlong local_a0;
  int local_94;
  int local_90;
  int local_8c;
  undefined4 local_88;
  undefined4 local_84;
  int local_80;
  undefined4 local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong *local_30;
  
  local_c0 = auStack_138;
  if (*(char *)(*(longlong *)(param_1 + 0x8b0) + 0x92) == '\0') {
    local_48 = *(longlong **)(*(longlong *)(param_1 + 0x8b0) + 0x188);
    if ((*(char *)(*(longlong *)(param_1 + 0x8b0) + 0x91) == '\0') || (local_48 == (longlong *)0x0))
    {
      *(ushort *)(param_1 + 0x8a0) = *(ushort *)(param_1 + 0x8a0) & 0xfffe;
      local_b8 = *(longlong *)(param_2 + 0x80);
      local_118 = 0;
      local_110 = 0;
      local_108 = (longlong *)0x0;
      local_100 = 0;
      local_f8 = (int *)((ulonglong)local_f8 & 0xffffffff00000000);
      local_f0 = (int *)CONCAT44(local_f0._4_4_,
                                 *(undefined4 *)(*(longlong *)(local_b8 + 0x18) + 0x28));
      FUN_00a45f10(param_2,param_3,0,0);
    }
    else {
      local_c0 = auStack_138;
      local_64 = (**(code **)(*local_48 + 0x18))(local_48);
      local_68 = (**(code **)(*local_48 + 0x10))(local_48);
      lVar3 = *(longlong *)(param_1 + 0x8b0);
      local_60 = *(undefined8 *)(lVar3 + 400);
      uStack_50 = *(undefined8 *)(lVar3 + 0x1a0);
      uStack_58._1_1_ = (undefined1)((ulonglong)*(undefined8 *)(lVar3 + 0x198) >> 8);
      uVar1 = uStack_58._1_1_;
      uStack_58 = *(undefined8 *)(lVar3 + 0x198);
      FUN_00af52f0(param_1,0,uVar1);
      if ((*(ushort *)(param_1 + 0x8a0) & 1) == 0) {
        local_84 = *(undefined4 *)(*(longlong *)(param_1 + 0x750) + 0x494);
        local_88 = *(undefined4 *)(*(longlong *)(param_1 + 0x8b0) + 0x94);
        local_7c = *(undefined4 *)(*(longlong *)(param_1 + 0x750) + 0x49c);
        local_8c = *(int *)(param_1 + 0x908);
        (**(code **)(**(longlong **)(param_1 + 0x740) + 0xe0))
                  (*(longlong **)(param_1 + 0x740),local_d0);
        local_90 = local_c4;
        if (local_c4 < local_8c) {
          local_94 = local_8c;
        }
        else {
          local_94 = local_c4;
        }
        local_80 = local_94;
      }
      else {
        local_84 = 0;
        local_88 = 0;
        (**(code **)(**(longlong **)(param_1 + 0x740) + 0xe0))
                  (*(longlong **)(param_1 + 0x740),local_d0);
        local_7c = local_c8;
        (**(code **)(**(longlong **)(param_1 + 0x740) + 0xe0))
                  (*(longlong **)(param_1 + 0x740),local_d0);
        local_80 = local_c4;
      }
      local_118 = local_7c;
      local_110 = local_80;
      local_108 = (longlong *)CONCAT44(local_108._4_4_,local_64);
      local_100 = local_68;
      local_f8 = &local_6c;
      local_f0 = &local_70;
      local_e8 = &local_74;
      local_e0 = &local_78;
      FUN_00a2c580(&local_60,param_3,local_84,local_88);
      if ((local_64 == 1) || (local_68 == 1)) {
        local_38 = 0;
        uVar2 = (**(code **)*local_48)(local_48);
        local_40 = FUN_00a46150(uVar2,local_74 - local_6c,local_78 - local_70);
        lVar3 = (**(code **)(*local_48 + 0x20))(local_48);
        if (lVar3 != 0) {
          uVar2 = (**(code **)(*local_48 + 0x20))(local_48);
          local_38 = FUN_00a46150(uVar2,local_74 - local_6c,local_78 - local_70);
        }
        local_118 = CONCAT31(local_118._1_3_,2);
        local_110 = CONCAT31(local_110._1_3_,1);
        local_108 = (longlong *)CONCAT71(local_108._1_7_,1);
        local_30 = (longlong *)FUN_00a47ee0(&PTR_FUN_00a432a0,1,local_40,local_38);
        local_38 = 0;
        local_40 = 0;
        local_a8 = (**(code **)(*local_30 + 0x18))(local_30);
        local_a4 = (**(code **)(*local_30 + 0x10))(local_30);
        local_a0 = *(longlong *)(param_2 + 0x80);
        local_118 = local_74;
        local_110 = local_78;
        local_108 = local_30;
        local_100 = local_a8;
        local_f8 = (int *)CONCAT44(local_f8._4_4_,local_a4);
        local_f0 = (int *)CONCAT44(local_f0._4_4_,
                                   *(undefined4 *)(*(longlong *)(local_a0 + 0x18) + 0x28));
        FUN_00a45f10(param_2,param_3,local_6c,local_70);
        FUN_00410f20(local_30);
        FUN_00410f20(local_38);
        FUN_00410f20(local_40);
      }
      else {
        local_b0 = *(longlong *)(param_2 + 0x80);
        local_118 = local_74;
        local_110 = local_78;
        local_108 = local_48;
        local_100 = local_64;
        local_f8 = (int *)CONCAT44(local_f8._4_4_,local_68);
        local_f0 = (int *)CONCAT44(local_f0._4_4_,
                                   *(undefined4 *)(*(longlong *)(local_b0 + 0x18) + 0x28));
        FUN_00a45f10(param_2,param_3,local_6c,local_70);
      }
    }
    local_118 = -*(int *)(*(longlong *)(param_1 + 0x750) + 0x494);
    local_110 = 0;
    local_108 = (longlong *)((ulonglong)local_108 & 0xffffffff00000000);
    local_100 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x8b0) + 0x38))
              (*(longlong **)(param_1 + 0x8b0),param_2,param_3,100000);
  }
  return;
}


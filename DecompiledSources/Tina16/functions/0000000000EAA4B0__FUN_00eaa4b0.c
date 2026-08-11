/* Ghidra address: 00eaa4b0 */
/* Ghidra symbol: FUN_00eaa4b0 */


void FUN_00eaa4b0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_128 [40];
  int local_100;
  int local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 *local_a0;
  int local_90;
  undefined4 local_8c;
  longlong local_88;
  int local_80;
  undefined4 local_7c;
  longlong local_78;
  undefined4 local_68;
  undefined4 local_64;
  int local_60;
  int local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong *local_40;
  longlong *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_a0 = auStack_128;
  local_f0 = 0;
  local_f8 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_a8 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_20[0] = 0;
  local_30 = 0;
  local_28 = 0;
  local_38 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_40 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  (**(code **)(*local_38 + 0x10))(local_38,param_1);
  iVar1 = (**(code **)(*param_2 + 0x28))();
  local_100 = iVar1 + -1;
  local_5c = 0;
  if (-1 < local_100) {
    do {
      local_100 = iVar1;
      (**(code **)(*local_40 + 0x90))(local_40);
      (**(code **)(*param_2 + 0x18))(param_2,&local_48,local_5c);
      while (iVar1 = FUN_004170c0(&DAT_00eaab60,local_48,1), 0 < iVar1) {
        iVar1 = FUN_004170c0(&DAT_00eaab60,local_48,1);
        FUN_00416dc0(&local_a8,local_48,1,iVar1 + -1);
        (**(code **)(*local_40 + 0x78))(local_40,local_a8);
        uVar2 = FUN_004170c0(&DAT_00eaab60,local_48,1);
        FUN_00416e20(&local_48,1,uVar2);
      }
      iVar1 = (**(code **)(*local_40 + 0x28))();
      local_fc = iVar1 + -1;
      local_60 = 0;
      if (-1 < local_fc) {
        do {
          local_fc = iVar1;
          (**(code **)(*local_40 + 0x18))(local_40,&local_b0,local_60);
          (**(code **)(*local_40 + 0x18))(local_40,&local_b8,local_60);
          iVar1 = FUN_004170c0(&DAT_00eaab70,local_b8,1);
          FUN_00416dc0(&local_50,local_b0,1,iVar1 + -1);
          local_20[0] = 0;
          (**(code **)(*local_40 + 0x18))(local_40,local_20,local_60);
          (**(code **)(*local_40 + 0x18))(local_40,&local_c0,local_60);
          local_80 = FUN_004170c0(&DAT_00eaab70,local_c0,1);
          local_80 = local_80 + 1;
          (**(code **)(*local_40 + 0x18))(local_40,&local_c8,local_60);
          local_78 = local_c8;
          local_7c = 0;
          if (local_c8 != 0) {
            local_7c = *(undefined4 *)(local_c8 + -4);
          }
          FUN_00416dc0(&local_58,local_20[0],local_80,local_7c);
          FUN_00414480(local_20);
          iVar1 = FUN_00416db0(local_50,local_58);
          if (iVar1 != 0) {
            local_64 = FUN_00eaa2e0(auStack_128,local_50);
            local_68 = FUN_00eaa2e0(auStack_128,local_58);
            local_28 = 0;
            (**(code **)(*local_38 + 0x18))(local_38,&local_d0,local_64);
            (**(code **)(*local_38 + 0x18))(local_38,&local_d8,local_64);
            uVar2 = FUN_004170c0(&LAB_00eaab80,local_d8,1);
            FUN_00416dc0(&local_28,local_d0,1,uVar2);
            local_30 = 0;
            (**(code **)(*param_1 + 0x18))(param_1,&local_30,local_68);
            (**(code **)(*param_1 + 0x18))(param_1,&local_e0,local_68);
            local_90 = FUN_004170c0(&LAB_00eaab80,local_e0,1);
            local_90 = local_90 + 1;
            (**(code **)(*param_1 + 0x18))(param_1,&local_e8,local_68);
            local_88 = local_e8;
            local_8c = 0;
            if (local_e8 != 0) {
              local_8c = *(undefined4 *)(local_e8 + -4);
            }
            FUN_00416dc0(&local_f8,local_30,local_90,local_8c);
            FUN_00416ba0(&local_f0,local_28,local_f8);
            (**(code **)(*local_38 + 0x40))(local_38,local_64,local_f0);
            FUN_00414480(&local_28);
            FUN_00414480(&local_30);
          }
          local_60 = local_60 + 1;
          local_fc = local_fc + -1;
          iVar1 = local_fc;
        } while (local_fc != 0);
      }
      (**(code **)(*param_1 + 0x10))(param_1,local_38);
      local_5c = local_5c + 1;
      local_100 = local_100 + -1;
      iVar1 = local_100;
    } while (local_100 != 0);
  }
  FUN_00410f20(local_38);
  FUN_00410f20(local_40);
  FUN_00414560(&local_f8,0xb);
  FUN_00414560(&local_58,3);
  return;
}


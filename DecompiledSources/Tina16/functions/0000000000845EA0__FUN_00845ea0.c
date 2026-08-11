/* Ghidra address: 00845ea0 */
/* Ghidra symbol: FUN_00845ea0 */


void FUN_00845ea0(longlong *param_1,ushort *param_2,ushort param_3)

{
  ushort uVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined8 uVar6;
  ushort local_res18;
  undefined1 auStack_138 [32];
  int local_118;
  int local_110;
  undefined8 local_108;
  longlong *local_100;
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_e8;
  undefined1 *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  char local_b6;
  char local_b5;
  int local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  int local_90;
  int local_8c;
  undefined1 local_88 [72];
  undefined4 local_40;
  
  local_e0 = auStack_138;
  local_108 = 0;
  local_100 = (longlong *)0x0;
  local_f8 = (longlong *)0x0;
  local_f0 = (longlong *)0x0;
  local_e8 = (longlong *)0x0;
  FUN_00659710(param_1,param_2,param_3);
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x48))(param_1);
  cVar2 = (**(code **)(*plVar4 + 0x28))(plVar4,2);
  if ((cVar2 != '\0') && ((*param_2 == 0x2e || ((*param_2 == 0x2d && ((param_3 & 1) != 0)))))) {
    local_c0 = (**(code **)(*param_1 + 0x48))(param_1);
    FUN_004db070(&local_e8,local_c0);
    cVar2 = (**(code **)(*local_e8 + 0x48))(local_e8);
    if (cVar2 != '\0') {
      local_c8 = (**(code **)(*param_1 + 0x48))(param_1);
      FUN_004db070(&local_f0,local_c8);
      (**(code **)(*local_f0 + 0x58))(local_f0);
    }
  }
  local_b5 = '\0';
  pcVar5 = (code *)FUN_00411550(param_1,0xffaa);
  cVar2 = (*pcVar5)(param_1,*param_2,param_3);
  if (cVar2 == '\0') {
    *param_2 = 0;
  }
  pcVar5 = (code *)FUN_00411550(param_1,0xffc5);
  cVar2 = (*pcVar5)(param_1);
  if (cVar2 == '\0') {
    local_b4 = 1;
  }
  else {
    local_b4 = -1;
  }
  local_a8 = param_1[0x95];
  local_a0 = param_1[0x9d];
  FUN_00845de0(auStack_138);
  local_res18 = param_3;
  if ((param_3 & 4) == 0) {
    uVar1 = *param_2;
    if (uVar1 < 0x26) {
      if (uVar1 == 0x25) {
        if ((*(uint *)((longlong)param_1 + 0x4d4) & 0x1000) == 0) {
          local_a8 = CONCAT44(local_a8._4_4_,(int)local_a8 - local_b4);
        }
        else {
          local_a8 = CONCAT44(local_a8._4_4_ - local_b4,(int)local_a8);
        }
      }
      else if (uVar1 < 0x23) {
        if (uVar1 == 0x22) {
          local_a8 = CONCAT44(local_a8._4_4_ + local_90,(int)local_a8);
          local_a0 = CONCAT44(local_a0._4_4_ + local_90,(int)local_a0);
        }
        else if (uVar1 == 9) {
          if ((param_3 & 2) == 0) {
            do {
              if ((local_res18 & 1) == 0) {
                local_a8._0_4_ = (int)local_a8 + 1;
                if (*(int *)((longlong)param_1 + 0x4a4) <= (int)local_a8) {
                  local_a8._4_4_ = local_a8._4_4_ + 1;
                  local_a8 = CONCAT44(local_a8._4_4_,*(undefined4 *)((longlong)param_1 + 0x4bc));
                  if ((int)param_1[0x9c] <= local_a8._4_4_) {
                    local_a8 = CONCAT44((int)param_1[0x98],
                                        *(undefined4 *)((longlong)param_1 + 0x4bc));
                  }
                }
              }
              else {
                local_a8._0_4_ = (int)local_a8 + -1;
                if ((int)local_a8 < *(int *)((longlong)param_1 + 0x4bc)) {
                  iVar3 = *(int *)((longlong)param_1 + 0x4a4) + -1;
                  local_a8._4_4_ = local_a8._4_4_ + -1;
                  local_a8 = CONCAT44(local_a8._4_4_,iVar3);
                  if (local_a8._4_4_ < (int)param_1[0x98]) {
                    local_a8 = CONCAT44((int)param_1[0x9c] + -1,iVar3);
                  }
                }
                local_res18 = 0;
              }
              cVar2 = FUN_008482f0(param_1,local_a8 & 0xffffffff);
            } while ((cVar2 == '\0') && ((int)local_a8 != (int)param_1[0x95]));
          }
        }
        else if (uVar1 == 0x21) {
          local_a8 = CONCAT44(local_a8._4_4_ - local_90,(int)local_a8);
          local_a0 = CONCAT44(local_a0._4_4_ - local_90,(int)local_a0);
        }
      }
      else if (uVar1 == 0x23) {
        if ((*(uint *)((longlong)param_1 + 0x4d4) & 0x1000) == 0) {
          local_a8 = CONCAT44(local_a8._4_4_,*(int *)((longlong)param_1 + 0x4a4) + -1);
        }
        else {
          local_a8 = CONCAT44((int)param_1[0x9c] + -1,(int)local_a8);
        }
      }
      else if (uVar1 == 0x24) {
        if ((*(uint *)((longlong)param_1 + 0x4d4) & 0x1000) == 0) {
          local_a8 = CONCAT44(local_a8._4_4_,*(undefined4 *)((longlong)param_1 + 0x4bc));
        }
        else {
          local_a8 = CONCAT44((int)param_1[0x98],(int)local_a8);
        }
      }
    }
    else if (uVar1 == 0x26) {
      local_a8 = CONCAT44(local_a8._4_4_ + -1,(int)local_a8);
    }
    else if (uVar1 == 0x27) {
      if ((*(uint *)((longlong)param_1 + 0x4d4) & 0x1000) == 0) {
        local_a8 = CONCAT44(local_a8._4_4_,(int)local_a8 + local_b4);
      }
      else {
        local_a8 = CONCAT44(local_a8._4_4_ + local_b4,(int)local_a8);
      }
    }
    else if (uVar1 == 0x28) {
      local_a8 = CONCAT44(local_a8._4_4_ + 1,(int)local_a8);
    }
    else if (uVar1 == 0x71) {
      FUN_00848870(param_1,1);
    }
  }
  else {
    uVar1 = *param_2;
    if (uVar1 < 0x26) {
      if (uVar1 == 0x25) {
        if ((*(uint *)((longlong)param_1 + 0x4d4) & 0x1000) == 0) {
          local_a8 = CONCAT44(local_a8._4_4_,(int)local_a8 - local_8c * local_b4);
          local_a0 = CONCAT44(local_a0._4_4_,(int)local_a0 - local_8c * local_b4);
        }
      }
      else if (uVar1 == 0x21) {
        local_a8 = CONCAT44(*(undefined4 *)((longlong)param_1 + 0x4ec),(int)local_a8);
      }
      else if (uVar1 == 0x22) {
        local_a8 = CONCAT44(local_40,(int)local_a8);
      }
      else if (uVar1 == 0x23) {
        local_a8 = CONCAT44((int)param_1[0x9c] + -1,*(int *)((longlong)param_1 + 0x4a4) + -1);
        pcVar5 = (code *)FUN_00411550(param_1,0xffc5);
        local_b5 = (*pcVar5)(param_1);
      }
      else if (uVar1 == 0x24) {
        local_a8 = *(ulonglong *)((longlong)param_1 + 0x4bc);
        pcVar5 = (code *)FUN_00411550(param_1,0xffc5);
        local_b5 = (*pcVar5)(param_1);
      }
    }
    else if (uVar1 == 0x26) {
      local_a0 = CONCAT44(local_a0._4_4_ + -1,(int)local_a0);
    }
    else if (uVar1 == 0x27) {
      if ((*(uint *)((longlong)param_1 + 0x4d4) & 0x1000) == 0) {
        local_a8 = CONCAT44(local_a8._4_4_,(int)local_a8 + local_8c * local_b4);
        local_a0 = CONCAT44(local_a0._4_4_,(int)local_a0 + local_8c * local_b4);
      }
    }
    else if (uVar1 == 0x28) {
      local_a0 = CONCAT44(local_a0._4_4_ + 1,(int)local_a0);
    }
  }
  local_b0 = CONCAT44((int)param_1[0x9c] + -1,*(int *)((longlong)param_1 + 0x4a4) + -1);
  uVar6 = FUN_00842050(param_1,&local_b0,local_88);
  local_b0._0_4_ = (undefined4)uVar6;
  local_118 = (undefined4)local_b0;
  local_b0._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_110 = local_b0._4_4_;
  local_b0 = uVar6;
  FUN_00845e60(auStack_138,&local_a0,*(undefined4 *)((longlong)param_1 + 0x4bc),(int)param_1[0x98]);
  if (((int)local_a0 != (int)param_1[0x9d]) ||
     (local_a0._4_4_ != *(int *)((longlong)param_1 + 0x4ec))) {
    FUN_00844d40(param_1,local_a0 & 0xffffffff,local_a0._4_4_);
  }
  local_118 = *(int *)((longlong)param_1 + 0x4a4) + -1;
  local_110 = (int)param_1[0x9c] + -1;
  FUN_00845e60(auStack_138,&local_a8,*(undefined4 *)((longlong)param_1 + 0x4bc),(int)param_1[0x98]);
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x48))(param_1);
  cVar2 = (**(code **)(*plVar4 + 0x28))(plVar4,2);
  if (cVar2 != '\0') {
    local_d0 = (**(code **)(*param_1 + 0x48))(param_1);
    FUN_004db070(&local_f8,local_d0);
    cVar2 = (**(code **)(*local_f8 + 0x88))(local_f8);
    if (cVar2 != '\0') {
      local_d8 = (**(code **)(*param_1 + 0x48))(param_1);
      FUN_004db070(&local_100,local_d8);
      (**(code **)(*local_100 + 0x40))(local_100);
    }
  }
  if (((int)local_a8 != (int)param_1[0x95]) ||
     (local_a8._4_4_ != *(int *)((longlong)param_1 + 0x4ac))) {
    local_b6 = local_a8._4_4_ != *(int *)((longlong)param_1 + 0x4ac);
    if ((bool)local_b6) {
      uVar6 = (**(code **)(*param_1 + 0x48))(param_1);
      FUN_004db4b0(uVar6);
    }
    FUN_00843e20(param_1,local_a8 & 0xffffffff,local_a8._4_4_,(local_res18 & 1) == 0);
    if (local_b6 != '\0') {
      uVar6 = (**(code **)(*param_1 + 0x48))(param_1);
      FUN_004db2d0(uVar6);
    }
  }
  if (local_b5 != '\0') {
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  FUN_00417840(&local_108,&DAT_00484e18,5);
  return;
}


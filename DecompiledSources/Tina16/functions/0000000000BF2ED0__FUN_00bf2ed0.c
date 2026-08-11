/* Ghidra address: 00bf2ed0 */
/* Ghidra symbol: FUN_00bf2ed0 */


undefined8 * FUN_00bf2ed0(longlong param_1,undefined8 *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int extraout_var;
  int extraout_var_00;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_108 [32];
  undefined8 *local_e8;
  undefined8 *local_d0;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong local_80;
  longlong local_78;
  undefined8 local_70 [2];
  undefined8 local_60;
  undefined8 local_58;
  int local_50;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  int local_30;
  int local_2c [3];
  
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70[0] = 0;
  local_38 = 0;
  local_d0 = param_2;
  cVar2 = FUN_00bf2c80(param_1);
  if (cVar2 == '\0') {
    FUN_00414480(local_d0);
  }
  else {
    local_2c[0] = FUN_00bf2b30(param_1);
    FUN_00bf2b30(param_1);
    local_c0 = extraout_var + -1;
    local_30 = FUN_00bf2b90(param_1);
    FUN_00bf2b90(param_1);
    local_c4 = extraout_var_00 + -1;
    local_c8 = 0;
    cVar2 = *(char *)(param_1 + 0x5f5);
    if (cVar2 == '\0') {
      if (local_c0 == local_c4) {
        (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x18))
                  (*(longlong **)(param_1 + 0x4e8),local_70,local_c0);
        FUN_00416dc0(local_d0,local_70[0],local_2c[0],local_30 - local_2c[0]);
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x18))
                  (*(longlong **)(param_1 + 0x4e8),&local_78,local_c0);
        iVar5 = 0;
        if (local_78 != 0) {
          iVar5 = *(int *)(local_78 + -4);
        }
        local_c8 = (iVar5 - local_2c[0]) + 1;
        if (local_c8 < 0) {
          local_c8 = 0;
        }
        iVar5 = local_c0 + 1;
        if (iVar5 <= local_c4 + -1) {
          iVar6 = ((local_c4 + -1) - iVar5) + 1;
          do {
            (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x18))
                      (*(longlong **)(param_1 + 0x4e8),&local_80,iVar5);
            iVar7 = 0;
            if (local_80 != 0) {
              iVar7 = *(int *)(local_80 + -4);
            }
            local_c8 = local_c8 + iVar7;
            iVar5 = iVar5 + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        local_c8 = local_c8 + local_30 + -1 + (local_c4 - local_c0) * 2;
        FUN_004169f0(local_d0,local_c8);
        local_40 = FUN_00416740(*local_d0);
        (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x18))
                  (*(longlong **)(param_1 + 0x4e8),&local_88,local_c0);
        local_e8 = &local_40;
        FUN_00bf2d90(auStack_108,local_88,local_2c[0],0x7fffffff);
        local_e8 = &local_40;
        FUN_00bf2d90(auStack_108,&LAB_00bf3698,1,0x7fffffff);
        iVar5 = local_c0 + 1;
        if (iVar5 <= local_c4 + -1) {
          iVar6 = ((local_c4 + -1) - iVar5) + 1;
          do {
            (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x18))
                      (*(longlong **)(param_1 + 0x4e8),&local_90,iVar5);
            local_e8 = &local_40;
            FUN_00bf2d90(auStack_108,local_90,1,0x7fffffff);
            local_e8 = &local_40;
            FUN_00bf2d90(auStack_108,&LAB_00bf3698,1,0x7fffffff);
            iVar5 = iVar5 + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x18))
                  (*(longlong **)(param_1 + 0x4e8),&local_98,local_c4);
        local_e8 = &local_40;
        FUN_00bf2d90(auStack_108,local_98,1,local_30 + -1);
      }
    }
    else if (cVar2 == '\x01') {
      if (local_c0 <= local_c4) {
        iVar6 = (local_c4 - local_c0) + 1;
        iVar5 = local_c0;
        do {
          (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x18))
                    (*(longlong **)(param_1 + 0x4e8),&local_a8,iVar5);
          iVar7 = 0;
          if (local_a8 != 0) {
            iVar7 = *(int *)(local_a8 + -4);
          }
          local_c8 = local_c8 + iVar7 + 2;
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      iVar5 = (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x28))
                        (*(longlong **)(param_1 + 0x4e8));
      if (local_c4 == iVar5) {
        local_c8 = local_c8 + -2;
      }
      FUN_004169f0(local_d0,local_c8);
      local_40 = FUN_00416740(*local_d0);
      if (local_c0 <= local_c4 + -1) {
        iVar6 = ((local_c4 + -1) - local_c0) + 1;
        iVar5 = local_c0;
        do {
          (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x18))
                    (*(longlong **)(param_1 + 0x4e8),&local_b0,iVar5);
          local_e8 = &local_40;
          FUN_00bf2d90(auStack_108,local_b0,1,0x7fffffff);
          local_e8 = &local_40;
          FUN_00bf2d90(auStack_108,&LAB_00bf3698,1,0x7fffffff);
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x18))
                (*(longlong **)(param_1 + 0x4e8),&local_b8,local_c4);
      local_e8 = &local_40;
      FUN_00bf2d90(auStack_108,local_b8,1,0x7fffffff);
      iVar5 = (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x28))
                        (*(longlong **)(param_1 + 0x4e8));
      if (local_c4 + 1 < iVar5) {
        local_e8 = &local_40;
        FUN_00bf2d90(auStack_108,&LAB_00bf3698,1,0x7fffffff);
      }
    }
    else if (cVar2 == '\x02') {
      local_a0 = FUN_00bf2b30(param_1);
      uVar4 = FUN_00c0ec90(param_1,&local_a0);
      local_58._4_4_ = (int)((ulonglong)uVar4 >> 0x20);
      local_c0 = local_58._4_4_;
      local_58._0_4_ = (int)uVar4;
      local_2c[0] = (int)local_58;
      local_58 = uVar4;
      local_a0 = FUN_00bf2b90(param_1);
      uVar4 = FUN_00c0ec90(param_1,&local_a0);
      local_60._4_4_ = (int)((ulonglong)uVar4 >> 0x20);
      local_c4 = local_60._4_4_;
      local_60._0_4_ = (int)uVar4;
      local_30 = (int)local_60;
      bVar1 = (int)local_60 < local_2c[0];
      local_60 = uVar4;
      if (bVar1) {
        FUN_00bcbe70(local_2c,&local_30);
      }
      local_c8 = ((local_30 - local_2c[0]) + 2) * ((local_c4 - local_c0) + 1);
      FUN_004169f0(local_d0,local_c8);
      local_40 = FUN_00416740(*local_d0);
      local_c8 = 0;
      if (local_c0 <= local_c4) {
        iVar6 = (local_c4 - local_c0) + 1;
        iVar5 = local_c0;
        do {
          local_50 = local_2c[0];
          local_4c = iVar5;
          uVar4 = FUN_00c0ee50(param_1,&local_50);
          local_48._0_4_ = (int)uVar4;
          local_bc = (int)local_48;
          local_48._4_4_ = (int)((ulonglong)uVar4 >> 0x20);
          iVar7 = local_48._4_4_ + -1;
          local_48 = uVar4;
          (**(code **)(**(longlong **)(param_1 + 0x4e8) + 0x18))
                    (*(longlong **)(param_1 + 0x4e8),&local_38,iVar7);
          local_50 = local_30;
          iVar7 = FUN_00c0ee50(param_1,&local_50);
          iVar7 = iVar7 - local_bc;
          local_e8 = &local_40;
          iVar3 = FUN_00bf2e10(auStack_108,local_38,local_bc,iVar7);
          local_c8 = ((local_c8 + iVar7) - iVar3) + 2;
          local_e8 = &local_40;
          FUN_00bf2d90(auStack_108,&LAB_00bf3698,1,0x7fffffff);
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      FUN_004169f0(local_d0,local_c8 + -2);
    }
  }
  FUN_00414560(&local_b8,3);
  FUN_00414560(&local_98,6);
  FUN_00414480(&local_38);
  return local_d0;
}


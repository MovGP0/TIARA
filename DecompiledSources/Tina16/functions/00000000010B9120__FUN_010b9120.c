/* Ghidra address: 010b9120 */
/* Ghidra symbol: FUN_010b9120 */


void FUN_010b9120(longlong *param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int local_c4;
  int iStack_c0;
  int local_bc;
  int iStack_b8;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined1 local_94 [72];
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  int local_40;
  
  FUN_01cf0ea0(param_1,param_2,param_3,param_4);
  if (-1 < *(int *)((longlong)param_1 + 0x1c)) {
    (**(code **)(*param_1 + 0x50))(param_1,param_2,&local_a4);
    local_ac = FUN_00498310(local_a4,local_a0);
    local_b4 = FUN_00498310(local_9c,local_98);
    uVar2 = FUN_00498310(*(undefined4 *)((longlong)param_1 + 0x14),(int)param_1[3]);
    uVar3 = FUN_00498310((int)param_1[8],*(undefined4 *)((longlong)param_1 + 0x44));
    iVar1 = *(int *)((longlong)param_1 + 0x1c);
    local_bc = (int)uVar2;
    iStack_b8 = (int)(uVar2 >> 0x20);
    local_c4 = (int)uVar3;
    iStack_c0 = (int)(uVar3 >> 0x20);
    if (iVar1 < 5) {
      if (iVar1 == 4) {
        local_b4 = FUN_00498310(local_c4 + param_3,iStack_c0);
      }
      else if (iVar1 == 0) {
        local_ac = FUN_00498310(local_bc + param_3,iStack_b8 + param_4);
      }
      else if (iVar1 == 1) {
        local_ac = FUN_00498310(uVar2 & 0xffffffff,iStack_b8 + param_4);
      }
      else if (iVar1 == 2) {
        local_ac = FUN_00498310(uVar2 & 0xffffffff,iStack_b8 + param_4);
        local_b4 = FUN_00498310(local_c4 + param_3,iStack_c0);
      }
      else if (iVar1 == 3) {
        local_ac = FUN_00498310(local_bc + param_3,iStack_b8);
      }
    }
    else if (iVar1 == 5) {
      local_ac = FUN_00498310(local_bc + param_3,iStack_b8);
      local_b4 = FUN_00498310(uVar3 & 0xffffffff,iStack_c0 + param_4);
    }
    else if (iVar1 == 6) {
      local_b4 = FUN_00498310(uVar3 & 0xffffffff,iStack_c0 + param_4);
    }
    else if (iVar1 == 7) {
      local_b4 = FUN_00498310(local_c4 + param_3,iStack_c0 + param_4);
    }
    if ((int)local_ac <= (int)local_b4) {
      if (local_ac._4_4_ <= local_b4._4_4_) {
        *(int *)((longlong)param_1 + 0xc) = (int)local_ac;
        *(int *)(param_1 + 2) = local_ac._4_4_;
        local_b4._0_4_ = (int)local_b4 - (int)local_ac;
        if ((int)param_1[0xd] != 0x3000000) {
          local_b4._0_4_ = (int)local_b4 + (char)param_1[0x10] * -2 + -2;
        }
        if ((int)local_b4 < 1) {
          local_b4._0_4_ = 1;
        }
        local_b4._4_4_ = local_b4._4_4_ - local_ac._4_4_;
        if ((int)param_1[0xd] != 0x3000000) {
          local_b4._4_4_ = local_b4._4_4_ + (char)param_1[0x10] * -2 + -2;
        }
        if (local_b4._4_4_ < 1) {
          local_b4._4_4_ = 1;
        }
        thunk_FUN_04079bf6(param_1[7],0x6c,local_94);
        iVar1 = thunk_FUN_03f3ed25(*(undefined4 *)((longlong)param_1 + 0x2c),local_4c,local_44 * 100
                                  );
        param_1[0xb] = (longlong)((double)(int)local_b4 / (double)iVar1);
        iVar1 = thunk_FUN_03f3ed25((int)param_1[6],local_48,local_40 * 100);
        param_1[0xc] = (longlong)((double)local_b4._4_4_ / (double)iVar1);
      }
    }
  }
  return;
}


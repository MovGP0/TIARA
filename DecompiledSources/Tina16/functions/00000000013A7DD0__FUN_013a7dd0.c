/* Ghidra address: 013a7dd0 */
/* Ghidra symbol: FUN_013a7dd0 */


undefined8
FUN_013a7dd0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
            undefined8 *param_5,undefined8 param_6)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_res10;
  undefined8 *local_res18;
  undefined8 *local_res20;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined8 local_48;
  undefined8 local_40;
  uint local_38;
  int local_34;
  longlong *local_30;
  longlong *local_28;
  longlong local_20;
  
  local_60 = auStack_108;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_90 = 0;
  local_80 = 0;
  local_88 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_40 = 0;
  local_20 = 0;
  local_48 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_2);
  local_28 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_38 = 0;
  (**(code **)(*local_28 + 0xd8))(local_28,local_res10);
  local_30 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar1 = (**(code **)(*local_28 + 0x28))();
  local_34 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*local_28 + 0x18))(local_28,&local_20,local_34);
      if ((local_20 != 0) && (iVar2 = FUN_004170c0(&DAT_013a8474,local_20,1), iVar2 != 1)) {
        iVar2 = FUN_004170c0(L"Module Name",local_20,1);
        if (0 < iVar2) {
          FUN_013a7ce0(auStack_108,&local_68);
          FUN_00414ad0(local_res18,local_68);
          local_38 = local_38 | 1;
        }
        iVar2 = FUN_004170c0(L"Inputs",local_20,1);
        if (0 < iVar2) {
          FUN_013a7ce0(auStack_108,&local_70);
          FUN_00414ad0(local_res20,local_70);
          local_38 = local_38 | 2;
        }
        iVar2 = FUN_004170c0(L"Outputs",local_20,1);
        if (0 < iVar2) {
          FUN_013a7ce0(auStack_108,&local_78);
          FUN_00414ad0(param_5,local_78);
          local_38 = local_38 | 4;
        }
      }
      local_34 = local_34 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if (local_38 != 7) {
    FUN_00441920(&local_88,local_res10);
    FUN_00416ba0(&local_80,L"Syntax error in file: ",local_88);
    uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,local_80);
    FUN_004134c0(uVar3);
  }
  FUN_013a7550(local_30,param_6,*local_res20,*param_5);
  (**(code **)(*local_28 + 0x90))(local_28);
  iVar1 = (**(code **)(*local_30 + 0x28))();
  local_34 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*local_30 + 0x18))(local_30,&local_40,local_34);
      iVar2 = FUN_004170c0(L"is port",local_40,1);
      if (((iVar2 < 1) && (iVar2 = FUN_004170c0(&DAT_013a853c,local_40,1), iVar2 != 1)) &&
         (iVar2 = FUN_004170c0(L"ARCHITECTURE behv",local_40,1), iVar2 < 1)) {
        iVar2 = FUN_004170c0(L"in std_logic",local_40,1);
        if (iVar2 < 1) {
          iVar2 = FUN_004170c0(L"out std_logic",local_40,1);
          if (0 < iVar2) {
            local_a0 = *param_5;
            local_98 = 0x11;
            FUN_00442f70(&local_b0,local_40,&local_a0,0);
            FUN_00414b50(&local_40,local_b0);
          }
        }
        else {
          local_a0 = *local_res20;
          local_98 = 0x11;
          FUN_00442f70(&local_a8,local_40,&local_a0,0);
          FUN_00414b50(&local_40,local_a8);
        }
      }
      else {
        local_a0 = *local_res18;
        local_98 = 0x11;
        FUN_00442f70(&local_90,local_40,&local_a0,0);
        FUN_00414b50(&local_40,local_90);
      }
      (**(code **)(*local_28 + 0x78))(local_28,local_40);
      local_34 = local_34 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_015fca00(&local_b8,0,0);
  FUN_00440c30(local_b8);
  FUN_015fca00(&local_c0,0,0);
  FUN_00441920(&local_d0,local_res10);
  FUN_004414c0(&local_c8,local_d0,L".vhd");
  local_e8 = local_c8;
  FUN_00416cd0(&local_48,3,local_c0,&DAT_013a85d0);
  (**(code **)(*local_28 + 0x100))(local_28,local_48);
  FUN_00414ad0(param_1,local_48);
  FUN_00410f20(local_28);
  FUN_00410f20(local_30);
  FUN_00414560(&local_d0,6);
  FUN_00414560(&local_90,6);
  FUN_00414560(&local_48,2);
  FUN_00414480(&local_20);
  FUN_00414480(&local_res10);
  return param_1;
}


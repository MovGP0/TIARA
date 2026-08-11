/* Ghidra address: 0171a190 */
/* Ghidra symbol: FUN_0171a190 */


int FUN_0171a190(undefined8 param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong local_res20;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 *local_90;
  undefined8 *local_80;
  int local_74;
  longlong local_70;
  int local_64;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  int local_44;
  int local_40;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_90 = auStack_118;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_28 = 0;
  local_20 = 0;
  local_50 = 0;
  local_58 = 0;
  local_30 = 0;
  local_38 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  local_40 = 0;
  FUN_00414480(&local_28);
  local_44 = 0;
  local_3c = 0;
  do {
    iVar1 = (**(code **)(*param_3 + 0x28))(param_3);
    if (iVar1 <= local_40) {
      if (local_28 != 0) {
        FUN_0171a130(auStack_118);
      }
      iVar1 = FUN_00416db0(local_res20,L"[MCU]");
      if (iVar1 == 0) {
        iVar1 = 0x14;
        local_80 = (undefined8 *)PTR_PTR_02004e70;
        do {
          FUN_00414b50(&local_28,*local_80);
          local_3c = local_3c + 1;
          (**(code **)(*param_2 + 0x78))(param_2,local_28);
          local_80 = local_80 + 9;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      FUN_00414560(&local_e0,10);
      FUN_00414560(&local_58,2);
      FUN_00414560(&local_28,2);
      FUN_00414480(&local_res20);
      return local_3c;
    }
    if (local_40 < 2) {
LAB_0171a328:
      FUN_00414480(&local_58);
    }
    else {
      iVar1 = (**(code **)(*param_3 + 0x28))(param_3);
      if (iVar1 <= local_40) goto LAB_0171a328;
      (**(code **)(*param_3 + 0x18))(param_3,&local_98,local_40 + -1);
      (**(code **)(*param_3 + 0x18))(param_3,&local_a0,local_40);
      iVar1 = FUN_00416db0(local_98,local_a0);
      if (iVar1 != 0) goto LAB_0171a328;
      FUN_00414b50(&local_58,&DAT_0171a8ac);
    }
    lVar2 = (**(code **)(*param_3 + 0x30))(param_3,local_40);
    FUN_00416880(&local_20,*(undefined8 *)(lVar2 + 0x20));
    iVar1 = FUN_00416db0(local_20,L"[Internal]");
    if (iVar1 != 0) {
      if (local_res20 == 0) {
code_r0x0171a3ad:
        local_30 = 0;
        (**(code **)(*param_3 + 0x18))(param_3,&local_a8,local_40);
        local_f8 = local_58;
        FUN_00416cd0(&local_30,3,local_28,local_a8);
        (**(code **)(*param_3 + 0x18))(param_3,&local_b0,local_40);
        FUN_00416ad0(&local_b0,local_58);
        local_60 = local_b0;
        local_64 = 0;
        if (local_b0 != 0) {
          local_64 = *(int *)(local_b0 + -4);
        }
        FUN_005b85d0(&local_b8,&DAT_0171a8e4,0x28 - local_64);
        FUN_00416ba0(&local_28,local_30,local_b8);
        FUN_00414480(&local_30);
        local_44 = local_44 + 1;
        local_3c = local_3c + 1;
      }
      else if (local_res20 != 0) {
        iVar1 = FUN_00416db0(local_res20,local_20);
        if (iVar1 == 0) goto code_r0x0171a3ad;
      }
    }
    if (local_44 == 2) {
      FUN_0171a130(auStack_118);
      FUN_00414480(&local_28);
      local_44 = 0;
    }
    iVar1 = (**(code **)(*param_3 + 0x28))(param_3);
    if (local_40 + 1 < iVar1) {
      iVar3 = local_40 + 1;
      iVar1 = (**(code **)(*param_3 + 0x28))(param_3);
      if (iVar3 < iVar1) {
        (**(code **)(*param_3 + 0x18))(param_3,&local_c0,local_40);
        (**(code **)(*param_3 + 0x18))(param_3,&local_c8,iVar3);
        iVar1 = FUN_00416db0(local_c0,local_c8);
        if (iVar1 != 0) goto LAB_0171a574;
        FUN_00414b50(&local_58,&DAT_0171a8ac);
      }
      else {
LAB_0171a574:
        FUN_00414480(&local_58);
      }
      lVar2 = (**(code **)(*param_3 + 0x30))(param_3,iVar3);
      FUN_00416880(&local_50,*(undefined8 *)(lVar2 + 0x20));
      iVar1 = FUN_00416db0(local_50,L"[Internal]");
      if (iVar1 != 0) {
        if (local_res20 == 0) {
code_r0x0171a5f5:
          local_38 = 0;
          iVar1 = local_40 + 1;
          (**(code **)(*param_3 + 0x18))(param_3,&local_d0,iVar1);
          local_f8 = local_58;
          FUN_00416cd0(&local_38,3,local_28,local_d0);
          (**(code **)(*param_3 + 0x18))(param_3,&local_d8,iVar1);
          FUN_00416ad0(&local_d8,local_58);
          local_70 = local_d8;
          local_74 = 0;
          if (local_d8 != 0) {
            local_74 = *(int *)(local_d8 + -4);
          }
          FUN_005b85d0(&local_e0,&DAT_0171a8e4,0x28 - local_74);
          FUN_00416ba0(&local_28,local_38,local_e0);
          FUN_00414480(&local_38);
          local_44 = local_44 + 1;
          local_3c = local_3c + 1;
        }
        else if (local_res20 != 0) {
          iVar1 = FUN_00416db0(local_res20,local_50);
          if (iVar1 == 0) goto code_r0x0171a5f5;
        }
      }
      if (local_44 == 2) {
        FUN_0171a130(auStack_118);
        FUN_00414480(&local_28);
        local_44 = 0;
      }
    }
    local_40 = local_40 + 2;
  } while( true );
}


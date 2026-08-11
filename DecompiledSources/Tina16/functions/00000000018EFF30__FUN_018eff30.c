/* Ghidra address: 018eff30 */
/* Ghidra symbol: FUN_018eff30 */


undefined8
FUN_018eff30(undefined8 param_1,undefined8 param_2,longlong *param_3,undefined **param_4,
            undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  local_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  local_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  FUN_00468530(param_2,0,1);
  if (param_4 == &PTR_FUN_0063d930) {
    iVar1 = FUN_00416db0(param_5,L"HIDE");
    if (iVar1 == 0) {
      FUN_0064e6f0(param_3);
    }
    else {
      iVar1 = FUN_00416db0(param_5,L"SHOW");
      if (iVar1 == 0) {
        FUN_0064e700(param_3);
      }
      else {
        iVar1 = FUN_00416db0(param_5,L"SETBOUNDS");
        if (iVar1 == 0) {
          FUN_018493d0(param_6,&local_40,0);
          uVar2 = FUN_00462650(&local_40);
          FUN_018493d0(param_6,&local_58,1);
          uVar3 = FUN_00462650(&local_58);
          FUN_018493d0(param_6,&local_70,2);
          uVar4 = FUN_00462650(&local_70);
          FUN_018493d0(param_6,&local_88,3);
          uVar5 = FUN_00462650(&local_88);
          (**(code **)(*param_3 + 400))(param_3,uVar2,uVar3,uVar4,uVar5);
        }
      }
    }
  }
  else if (param_4 == &PTR_FUN_00640c18) {
    iVar1 = FUN_00416db0(param_5,L"SETFOCUS");
    if (iVar1 == 0) {
      (**(code **)(*param_3 + 600))(param_3);
    }
    else {
      iVar1 = FUN_00416db0(param_5,L"INVALIDATE");
      if (iVar1 == 0) {
        (**(code **)(*param_3 + 0x180))(param_3);
      }
    }
  }
  else if (param_4 == &PTR_FUN_00676b98) {
    iVar1 = FUN_00416db0(param_5,L"SELECTED.GET");
    if (iVar1 == 0) {
      FUN_018493d0(param_6,&local_a0,0);
      uVar2 = FUN_00462650(&local_a0);
      uVar2 = FUN_0068bca0(param_3,uVar2);
      FUN_00468820(param_2,uVar2);
    }
    else {
      iVar1 = FUN_00416db0(param_5,L"SELECTED.SET");
      if (iVar1 == 0) {
        FUN_018493d0(param_6,&local_b8,0);
        uVar2 = FUN_00462650(&local_b8);
        FUN_018493d0(param_6,&local_d0,1);
        iVar1 = FUN_004644a0(&local_d0);
        FUN_0068bd10(param_3,uVar2,iVar1 != 0);
      }
    }
  }
  else if (param_4 == &PTR_FUN_007ee548) {
    iVar1 = FUN_00416db0(param_5,L"CLOSE");
    if (iVar1 == 0) {
      FUN_00805200(param_3);
    }
    else {
      iVar1 = FUN_00416db0(param_5,L"HIDE");
      if (iVar1 == 0) {
        FUN_00805990(param_3);
      }
      else {
        iVar1 = FUN_00416db0(param_5,L"SHOW");
        if (iVar1 == 0) {
          FUN_008059a0(param_3);
        }
        else {
          iVar1 = FUN_00416db0(param_5,L"SHOWMODAL");
          if (iVar1 == 0) {
            uVar2 = (**(code **)(*param_3 + 0x2d0))(param_3);
            FUN_00468530(param_2,uVar2,0xfffffffffffffffc);
          }
        }
      }
    }
  }
  else if (param_4 == &PTR_FUN_007f4918) {
    iVar1 = FUN_00416db0(param_5,L"MINIMIZE");
    if (iVar1 == 0) {
      FUN_0080bf50(param_3);
    }
    else {
      iVar1 = FUN_00416db0(param_5,L"PROCESSMESSAGES");
      if (iVar1 == 0) {
        FUN_0080cc70(param_3);
      }
      else {
        iVar1 = FUN_00416db0(param_5,L"RESTORE");
        if (iVar1 == 0) {
          FUN_0080c0e0(param_3);
        }
      }
    }
  }
  FUN_00417840(&local_d0,&DAT_004013d8,7);
  return param_2;
}


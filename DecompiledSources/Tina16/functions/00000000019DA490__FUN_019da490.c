/* Ghidra address: 019da490 */
/* Ghidra symbol: FUN_019da490 */


void FUN_019da490(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined8 local_res10;
  int local_res18;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 *local_f0;
  longlong local_d0;
  longlong local_c0;
  int local_8c;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong *local_38;
  longlong *local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_f0 = auStack_128;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_20 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  local_28 = 0;
  local_30 = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  if (local_res18 == 1) {
    FUN_00414480(&local_20);
    FUN_005d10a0(local_res10,0,0);
    FUN_005d1300(&local_20,local_res10);
    local_28 = FUN_00f30500(local_20,0,0);
    FUN_00414480(&local_20);
    local_c0 = FUN_004113f0(local_28,&LAB_00f23b78);
    iVar3 = *(int *)(*(longlong *)(local_c0 + 0x10) + 0x10);
    local_8c = 0;
    if (-1 < iVar3 + -1) {
      do {
        local_d0 = FUN_00f30ba0(local_c0,local_8c);
        (**(code **)(**(longlong **)(local_d0 + 0x10) + 0x18))
                  (*(longlong **)(local_d0 + 0x10),&local_58);
        iVar2 = FUN_00416db0(local_58,L"welcome");
        if (iVar2 == 0) {
          (**(code **)(**(longlong **)(local_d0 + 0x18) + 0x18))
                    (*(longlong **)(local_d0 + 0x18),&local_48);
          FUN_019d9ee0(&local_f8,local_48);
          FUN_00414b50(&local_48,local_f8);
          FUN_0064de00(*(undefined8 *)(param_1 + 0x6d8),local_48);
        }
        else {
          iVar2 = FUN_00416db0(local_58,L"instructions");
          if (iVar2 == 0) {
            (**(code **)(**(longlong **)(local_d0 + 0x18) + 0x18))
                      (*(longlong **)(local_d0 + 0x18),&local_48);
            FUN_019d9ee0(&local_100,local_48);
            FUN_00414b50(&local_48,local_100);
            FUN_0064de00(*(undefined8 *)(param_1 + 0x6d0),local_48);
          }
          else {
            iVar2 = FUN_00416db0(local_58,L"question");
            if (iVar2 == 0) {
              (**(code **)(**(longlong **)(local_d0 + 0x18) + 0x18))
                        (*(longlong **)(local_d0 + 0x18),&local_48);
              FUN_019d9ee0(&local_108,local_48);
              FUN_00414b50(&local_48,local_108);
              FUN_0064de00(*(undefined8 *)(param_1 + 0x710),local_48);
            }
          }
        }
        local_8c = local_8c + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  else {
    local_38 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    local_30 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    (**(code **)(*local_30 + 0xd8))(local_30,local_res10);
    local_8c = 0;
    while (iVar3 = (**(code **)(*local_30 + 0x28))(local_30), local_8c < iVar3) {
      (**(code **)(*local_30 + 0x18))(local_30,&local_48,local_8c);
      iVar3 = FUN_004170c0(L"// Keep",local_48,1);
      if (iVar3 < 1) {
        iVar3 = FUN_004170c0(L"// Welcome",local_48,1);
        if (iVar3 < 1) {
          iVar3 = FUN_004170c0(L"// Instructions",local_48,1);
          if (iVar3 < 1) {
            iVar3 = FUN_004170c0(L"// Question",local_48,1);
            if (iVar3 < 1) {
              (**(code **)(*local_38 + 0x78))(local_38,local_48);
              local_8c = local_8c + 1;
            }
            else {
              plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6d0) + 0x4d8);
              (**(code **)(*plVar1 + 0x10))(plVar1,local_38);
              (**(code **)(*local_38 + 0x90))(local_38);
              local_8c = local_8c + 1;
            }
          }
          else {
            plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6d8) + 0x4d8);
            (**(code **)(*plVar1 + 0x10))(plVar1,local_38);
            (**(code **)(*local_38 + 0x90))(local_38);
            local_8c = local_8c + 1;
          }
        }
        else {
          local_8c = local_8c + 1;
        }
      }
      else {
        local_8c = local_8c + 1;
      }
    }
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x710) + 0x4d8);
    (**(code **)(*plVar1 + 0x10))(plVar1,local_38);
    (**(code **)(*local_38 + 0x90))(local_38);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6d8),&local_70);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6d0),&local_78);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x710),&local_80);
  }
  if (local_28 != 0) {
    FUN_00410f20(local_28);
  }
  if (local_30 != (longlong *)0x0) {
    FUN_00410f20(local_30);
  }
  if (local_38 != (longlong *)0x0) {
    FUN_00410f20(local_38);
  }
  FUN_00414560(&local_108,3);
  FUN_00414560(&local_80,9);
  FUN_00414480(&local_20);
  FUN_00414480(&local_res10);
  return;
}


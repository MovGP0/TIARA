/* Ghidra address: 012bb180 */
/* Ghidra symbol: FUN_012bb180 */


void FUN_012bb180(longlong *param_1,longlong param_2,wchar_t *param_3,longlong param_4,
                 ulonglong param_5)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  wchar_t *local_res18;
  longlong local_res20;
  undefined1 auStack_f8 [32];
  ulonglong local_d8;
  wchar_t *local_d0;
  undefined8 local_c8;
  undefined8 *local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined8 *local_a8;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  bool local_6a;
  bool local_69;
  int local_64;
  int local_60;
  undefined1 local_59;
  uint local_58;
  undefined1 local_51;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong *local_30;
  undefined8 *local_28;
  longlong *local_20;
  
  local_80 = auStack_f8;
  local_90 = 0;
  local_88 = 0;
  local_30 = (longlong *)0x0;
  local_38 = 0;
  local_48 = 0;
  local_50 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(param_5);
  FUN_00441640(&local_88,*(undefined8 *)(local_res20 + 8));
  local_d8 = param_5;
  local_d0 = L".dat";
  FUN_00416cd0(&local_48,4,local_88,L"analstate_");
  cVar1 = FUN_00440a20(local_48,1);
  if (cVar1 != '\0') {
    FUN_004168e0(&local_90,local_48);
    uVar2 = FUN_00415f70(local_90);
    local_d0 = (wchar_t *)FUN_0041b800(&local_30);
    local_d8 = local_d8 & 0xffffffff00000000;
    local_58 = thunk_FUN_03bb6bce(uVar2,0,0x10,0);
    if ((local_58 & 0x80000000) == 0) {
      if (local_res18 == L"Components") {
        local_69 = true;
      }
      else if (local_res18 == (wchar_t *)0x0) {
        local_69 = false;
      }
      else {
        iVar3 = FUN_0043e420(local_res18,L"Components");
        local_69 = iVar3 == 0;
      }
      if (local_69 != false) {
        local_d0 = (wchar_t *)FUN_0041b800(&local_38);
        local_d8 = local_d8 & 0xffffffff00000000;
        local_58 = (**(code **)(*local_30 + 0x20))(local_30,L"Components",0,0x10);
        if ((local_58 & 0x80000000) == 0) {
          local_20 = (longlong *)FUN_00dd89a0(&PTR_FUN_00dd7468,1,local_38);
          local_28 = (undefined8 *)FUN_0198b200(0,&PTR_FUN_01984d18,1,0);
          local_d8 = 0;
          local_d0 = (wchar_t *)0x0;
          local_c8 = 0;
          local_c0 = &local_50;
          local_b8 = &local_51;
          local_b0 = &local_51;
          local_a8 = &local_50;
          local_20 = (longlong *)FUN_014a7b70(&local_28,local_20,0,0);
          iVar3 = (int)param_1[2];
          local_64 = 0;
          if (-1 < iVar3 + -1) {
            do {
              local_40 = FUN_00b94e60(param_1,local_64);
              cVar1 = FUN_0198a580(local_40);
              if (cVar1 == '\x04') {
                (**(code **)(*param_1 + 0x10))(param_1,local_40);
                *(undefined8 *)(param_1[1] + (longlong)local_64 * 8) = 0;
              }
              local_64 = local_64 + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          FUN_00b95360(param_1);
          iVar3 = *(int *)(local_28 + 2);
          local_64 = 0;
          if (-1 < iVar3 + -1) {
            do {
              local_40 = FUN_00b94e60(local_28,local_64);
              cVar1 = FUN_0198a580(local_40);
              if (cVar1 == '\x04') {
                (**(code **)(*param_1 + 0x20))(param_1,local_40);
              }
              local_64 = local_64 + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          FUN_00410f20(local_20);
          FUN_00b95120(local_28);
          uVar2 = (**(code **)*local_28)(local_28);
          FUN_00418590(uVar2,&DAT_01984da0);
        }
      }
      if (local_res18 == L"Globals") {
        local_6a = true;
      }
      else if (local_res18 == (wchar_t *)0x0) {
        local_6a = false;
      }
      else {
        iVar3 = FUN_0043e420(local_res18,L"Globals");
        local_6a = iVar3 == 0;
      }
      if (local_6a != false) {
        local_d0 = (wchar_t *)FUN_0041b800(&local_38);
        local_d8 = local_d8 & 0xffffffff00000000;
        local_58 = (**(code **)(*local_30 + 0x20))(local_30,L"Globals",0,0x10);
        if ((local_58 & 0x80000000) == 0) {
          local_20 = (longlong *)FUN_00dd89a0(&PTR_FUN_00dd7468,1,local_38);
          (**(code **)(*local_20 + 0x18))(local_20,&local_60,4);
          if (local_60 == *(int *)(param_2 + 0x308)) {
            (**(code **)(*local_20 + 0x18))
                      (local_20,*(undefined8 *)(param_2 + 0x118),*(int *)(param_2 + 0x308) * 8);
          }
          (**(code **)(*local_20 + 0x18))(local_20,param_2 + 0x498,4);
          (**(code **)(*local_20 + 0x18))(local_20,param_2 + 0x326,1);
          (**(code **)(*local_20 + 0x18))(local_20,&local_59,1);
          FUN_01b08890(param_2,local_59);
          (**(code **)(*local_20 + 0x18))(local_20,&local_60,4);
          if ((0 < local_60) && (local_60 == *(int *)(param_2 + 0x31c))) {
            local_64 = 0;
            do {
              (**(code **)(*local_20 + 0x18))
                        (local_20,*(undefined8 *)(param_2 + 0x1b8 + (longlong)local_64 * 8),
                         *(int *)(param_2 + 0x31c) * 8);
              local_64 = local_64 + 1;
            } while (local_64 != 8);
          }
          FUN_00410f20(local_20);
        }
      }
    }
  }
  FUN_00414520(&local_90);
  FUN_00414480(&local_88);
  FUN_00414560(&local_50,2);
  FUN_0041b800(&local_38);
  FUN_0041b800(&local_30);
  FUN_00414480(&local_res18);
  FUN_00414480(&param_5);
  return;
}


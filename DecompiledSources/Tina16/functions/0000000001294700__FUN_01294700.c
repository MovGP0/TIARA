/* Ghidra address: 01294700 */
/* Ghidra symbol: FUN_01294700 */


void FUN_01294700(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                 int param_5)

{
  longlong *plVar1;
  ulonglong uVar2;
  undefined8 local_res10;
  longlong *local_res18;
  undefined8 local_res20;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined1 local_f0;
  undefined1 local_e8;
  undefined1 local_e0;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 *local_b0;
  undefined1 local_9e;
  undefined1 local_9d;
  undefined4 local_9c;
  undefined4 local_98;
  undefined1 local_91;
  int local_90;
  int local_8c;
  longlong local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_74;
  undefined8 local_70 [2];
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  longlong local_28;
  undefined8 local_20 [2];
  
  local_b0 = auStack_118;
  local_c0 = 0;
  local_c8 = 0;
  local_b8 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_70[0] = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_48 = 0;
  local_40 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_0041b910(param_2);
  FUN_0041b910(local_res18);
  FUN_00414610(local_res20);
  if (local_res18 != (longlong *)0x0) {
    FUN_0043f750(&local_b8,*(byte *)(param_1 + 0x98) + 1);
    (**(code **)(*local_res18 + 0x108))(local_res18,L"type",local_b8);
    if (*(char *)(param_1 + 0x98) == '\x01') {
      local_f8 = local_res20;
      local_f0 = 1;
      FUN_010ce790(&local_50,local_res10,local_res18,
                   *(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0xa0));
    }
    else if (*(char *)(param_1 + 0x98) == '\x02') {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x90) + 0xa0);
      (**(code **)(*plVar1 + 0x38))(plVar1,&local_50);
      local_74 = FUN_004170c0(L"@ Configuration begin",local_50,1);
      local_74 = local_74 + -1;
      if (-1 < local_74) {
        FUN_00414480(local_20);
        local_78 = 0;
        if (local_50 != 0) {
          local_78 = *(undefined4 *)(local_50 + -4);
        }
        FUN_00416dc0(local_20,local_50,local_74 + 1,local_78);
        FUN_00414b50(&local_58,local_20[0]);
        FUN_00414480(local_20);
        FUN_00414480(&local_28);
        FUN_00414b50(&local_28,local_50);
        local_7c = 0;
        if (local_28 != 0) {
          local_7c = *(undefined4 *)(local_28 + -4);
        }
        FUN_00416e20(&local_28,local_74 + 1,local_7c);
        FUN_00414b50(&local_50,local_28);
        FUN_00414480(&local_28);
        local_74 = FUN_004170c0(L".@ Configuration end",local_58,1);
        local_74 = local_74 + -1;
        if (0 < local_74) {
          FUN_00414480(&local_30);
          FUN_00414b50(&local_30,local_58);
          local_80 = 0;
          if (local_30 != 0) {
            local_80 = *(undefined4 *)(local_30 + -4);
          }
          FUN_00416e20(&local_30,local_74 + 1,local_80);
          FUN_00414b50(&local_58,local_30);
          FUN_00414480(&local_30);
          FUN_00414480(&local_38);
          FUN_00414b50(&local_38,local_58);
          FUN_00416e20(&local_38,1,0x15);
          FUN_00414b50(&local_58,local_38);
          FUN_00414480(&local_38);
        }
        (**(code **)(*local_res18 + 0x108))(local_res18,L"hideParams",local_58);
      }
    }
    else {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x90) + 0xa0);
      (**(code **)(*plVar1 + 0x38))(plVar1,&local_50);
    }
    local_40 = 0;
    FUN_00415dd0(&local_c8,local_res20,0);
    FUN_00b0d0c0(&local_c0,local_50,local_c8);
    FUN_004168b0(&local_40,local_c0);
    local_48 = 0;
    FUN_005fccd0(*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x80),&local_48);
    local_88 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x80);
    local_8c = -*(int *)(*(longlong *)(local_88 + 0x18) + 0x28);
    local_90 = local_8c;
    if (0 < param_5) {
      local_90 = param_5;
    }
    uVar2 = FUN_005fce60(local_88);
    local_9e = (uVar2 & 1) != 0;
    uVar2 = FUN_005fce60(*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x80));
    local_e8 = (uVar2 & 2) != 0;
    local_91 = *(char *)(param_1 + 0x99) == '\0';
    local_98 = *(undefined4 *)(param_1 + 0x9c);
    local_9c = local_98;
    if ((bool)local_91) {
      local_9c = 0x1fffffff;
    }
    local_f8 = CONCAT44(local_f8._4_4_,local_90);
    local_f0 = local_9e;
    local_e0 = *(undefined1 *)(param_1 + 0xa0);
    local_d8 = *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x80) + 0x28);
    local_d0 = local_9c;
    local_9d = local_e8;
    FUN_01294320(local_res10,local_res18,local_40,local_48);
    FUN_00414480(&local_40);
    FUN_00414480(&local_48);
  }
  FUN_004144d0(&local_c8);
  FUN_00414520(&local_c0);
  FUN_00414480(&local_b8);
  FUN_00414480(local_70);
  FUN_0041b800(&local_60);
  FUN_00414560(&local_58,2);
  FUN_00414560(&local_38,4);
  FUN_0041b800(&local_res10);
  FUN_0041b800(&local_res18);
  FUN_00414480(&local_res20);
  return;
}


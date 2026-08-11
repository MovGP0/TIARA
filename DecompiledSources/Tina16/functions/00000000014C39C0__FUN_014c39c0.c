/* Ghidra address: 014c39c0 */
/* Ghidra symbol: FUN_014c39c0 */


void FUN_014c39c0(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_res10;
  undefined8 local_res18;
  int local_res20;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_c0;
  int local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  int local_50;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong *local_30;
  undefined8 *local_28;
  undefined8 *local_20;
  
  local_60 = auStack_e8;
  local_a8 = 0;
  local_a0 = 0;
  local_90 = 0;
  local_98 = 0;
  local_80 = 0;
  local_88 = 0;
  local_78 = 0;
  local_68 = 0;
  local_70 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  local_30 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_014c0750(&local_38);
  local_28 = (undefined8 *)FUN_004b9860(&PTR_FUN_0047c498,1,local_res18,0x20);
  lVar3 = (**(code **)*local_28)(local_28);
  local_ac = FUN_0040c840((double)lVar3 / (double)local_res20);
  local_ac = local_ac + 1;
  local_4c = 1;
  local_50 = local_ac;
  if (0 < local_ac) {
    do {
      local_20 = (undefined8 *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
      lVar3 = (**(code **)*local_28)(local_28);
      lVar4 = FUN_004b6da0(local_28);
      if (lVar3 - lVar4 < (longlong)local_res20) {
        iVar1 = (**(code **)*local_28)(local_28);
        local_res20 = FUN_004b6da0(local_28);
        local_res20 = iVar1 - local_res20;
      }
      FUN_004b8ba0(local_20,local_28,(longlong)local_res20);
      (**(code **)(*local_30 + 0x90))(local_30);
      FUN_00441920(&local_70,local_res18);
      FUN_00416ba0(&local_68,L"filename=",local_70);
      (**(code **)(*local_30 + 0x78))(local_30,local_68);
      FUN_00416ba0(&local_78,L"uid=",local_38);
      (**(code **)(*local_30 + 0x78))(local_30,local_78);
      FUN_0043f750(&local_88,local_4c);
      FUN_00416ba0(&local_80,L"uidx=",local_88);
      (**(code **)(*local_30 + 0x78))(local_30,local_80);
      FUN_0043f750(&local_98,local_50);
      FUN_00416ba0(&local_90,L"ucnt=",local_98);
      (**(code **)(*local_30 + 0x78))(local_30,local_90);
      (**(code **)(*local_30 + 0x78))(local_30,L"encoded=base64");
      uVar2 = (**(code **)*local_20)(local_20);
      FUN_014bc340(&local_a0,local_20[1],uVar2);
      FUN_00416880(&local_40,local_a0);
      FUN_00416ba0(&local_a8,L"tsc=",local_40);
      (**(code **)(*local_30 + 0x78))(local_30,local_a8);
      local_c8 = 0;
      local_c0 = 0;
      FUN_014c1be0(param_1,local_res10,local_30,&local_48);
      if (*(longlong *)(param_1 + 0x28) != 0) {
        (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x30),local_48);
      }
      FUN_00410f20(local_20);
      local_4c = local_4c + 1;
      local_ac = local_ac + -1;
    } while (local_ac != 0);
  }
  FUN_00410f20(local_28);
  FUN_00410f20(local_30);
  FUN_00414480(&local_a8);
  FUN_004144d0(&local_a0);
  FUN_00414560(&local_98,7);
  FUN_00414560(&local_48,3);
  FUN_00414560(&local_res10,2);
  return;
}


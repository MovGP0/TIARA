/* Ghidra address: 016ff310 */
/* Ghidra symbol: FUN_016ff310 */


undefined1
FUN_016ff310(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
            undefined1 param_5,longlong param_6)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  longlong local_res20;
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  undefined8 *local_110;
  longlong **local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined1 *local_e8;
  undefined8 local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined1 *local_a0;
  undefined1 local_92;
  undefined1 local_91;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  uint local_64;
  undefined8 *local_60;
  undefined8 *local_58;
  longlong local_50;
  undefined8 *local_48;
  undefined8 local_40;
  longlong *local_38;
  longlong local_30;
  undefined1 local_21;
  
  local_a0 = auStack_138;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_1);
  FUN_00414610(local_res10);
  local_21 = 0;
  if (param_6 == 0) {
    uVar3 = FUN_017105e0(0);
    local_118 = &local_70;
    local_110 = &local_78;
    local_108 = &local_38;
    local_100 = &local_40;
    local_f8 = &local_80;
    local_f0 = &local_88;
    local_e8 = &local_92;
    local_30 = FUN_016fec20(uVar3,local_res8,local_res18,param_5);
  }
  else {
    local_118 = &local_70;
    local_110 = &local_78;
    local_108 = &local_38;
    local_100 = &local_40;
    local_f8 = &local_80;
    local_f0 = &local_88;
    local_e8 = &local_92;
    local_30 = FUN_016fec20(param_6,local_res8,local_res18,param_5);
  }
  if (local_30 != 0) {
    local_118 = (undefined8 *)0x0;
    local_110 = (undefined8 *)((ulonglong)local_110 & 0xffffffff00000000);
    local_58 = (undefined8 *)FUN_00ee5950(0,local_30,&local_64,local_38);
    local_118 = (undefined8 *)0x0;
    local_110 = (undefined8 *)((ulonglong)local_110 & 0xffffffff00000000);
    local_60 = (undefined8 *)FUN_00ee5950(0,local_30,&local_64,0);
    if (((local_58 == (undefined8 *)0x0) || (local_60 == (undefined8 *)0x0)) || (local_64 == 0)) {
      FUN_00414b50(&local_90,L"The selected subcircuit cannot be converted to a macro.");
      if (local_58 != (undefined8 *)0x0) {
        uVar3 = (**(code **)*local_58)(local_58);
        FUN_00418590(uVar3,&DAT_01984da0);
      }
      if (local_60 != (undefined8 *)0x0) {
        uVar3 = (**(code **)*local_60)(local_60);
        FUN_00418590(uVar3,&DAT_01984da0);
      }
      FUN_016fd940(local_90);
    }
    else {
      iVar2 = FUN_00416db0(local_res10,L"<Auto>");
      if (iVar2 == 0) {
        iVar2 = FUN_00416db0(local_80,L"<AutoShape>");
        if (iVar2 == 0) {
          iVar2 = (**(code **)(*local_38 + 0x28))(local_38);
          if (iVar2 < 1) {
            FUN_016feb60(&local_c8,local_res8);
            local_50 = FUN_019a26a0(local_60,local_c8);
            local_91 = 0;
          }
          else {
            FUN_016feb60(&local_c0,local_res8);
            local_50 = FUN_019a26a0(local_58,local_c0);
            local_91 = 1;
          }
        }
        else {
          sVar1 = FUN_00c40790(*(undefined8 *)PTR_DAT_02004440,local_80);
          local_64 = (uint)sVar1;
          if ((int)local_64 < 0) {
            local_b0 = local_80;
            local_a8 = 0x11;
            FUN_00442f70(&local_90,L"Shape: %s not found in the library! Default shape created.",
                         &local_b0,0);
            FUN_016fe230(local_90);
            FUN_016feb60(&local_b8,local_res8);
            local_50 = FUN_019a26a0(local_60,local_b8);
            local_91 = 0;
          }
          else {
            uVar3 = FUN_004aeac0(*(undefined8 *)PTR_DAT_02004440,local_64);
            local_50 = FUN_00c3f320(uVar3);
            local_91 = 1;
          }
        }
      }
      else {
        local_50 = 0;
        local_91 = 0;
      }
      local_48 = (undefined8 *)FUN_0176c970(&PTR_FUN_01761b48,1,local_res20);
      if (*(longlong *)(local_res20 + 0x1a8) != 0) {
        FUN_00410f20(*(longlong *)(local_res20 + 0x1a8));
      }
      *(undefined8 **)(local_res20 + 0x1a8) = local_48;
      *(undefined1 *)(local_res20 + 0x1a0) = 2;
      FUN_016feb60(&local_d0,local_res8);
      (**(code **)*local_48)(local_48,local_d0);
      if (local_50 == 0) {
        FUN_01768c30(local_48,local_res10);
      }
      else {
        FUN_01768da0(local_48,local_50);
      }
      FUN_0176edb0(local_48,local_30,local_92);
      FUN_00414ad0(local_48 + 0x1f,local_70);
      FUN_00414ad0(local_48 + 0x20,local_78);
      *(undefined1 *)(local_48 + 0x22) = local_91;
      (**(code **)(*(longlong *)local_48[0x18] + 0x10))((longlong *)local_48[0x18],local_38);
      (**(code **)(*(longlong *)local_48[0x19] + 0x10))((longlong *)local_48[0x19],local_40);
      *(undefined1 *)((longlong)local_48 + 0x117) = 1;
      if (local_58 != (undefined8 *)0x0) {
        uVar3 = (**(code **)*local_58)(local_58);
        FUN_00418590(uVar3,&DAT_01984da0);
      }
      if (local_60 != (undefined8 *)0x0) {
        uVar3 = (**(code **)*local_60)(local_60);
        FUN_00418590(uVar3,&DAT_01984da0);
      }
      FUN_00410f20(local_30);
      local_21 = 1;
    }
  }
  FUN_00414560(&local_d0,4);
  FUN_00414560(&local_90,5);
  FUN_00414560(&local_res8,2);
  return local_21;
}


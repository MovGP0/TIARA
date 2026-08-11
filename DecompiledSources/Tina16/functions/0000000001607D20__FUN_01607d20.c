/* Ghidra address: 01607d20 */
/* Ghidra symbol: FUN_01607d20 */


void FUN_01607d20(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_158 [32];
  wchar_t *local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 local_118;
  undefined1 local_110;
  undefined8 local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined1 *local_f0;
  undefined8 local_e0;
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong local_b8;
  undefined1 local_aa;
  char local_a9;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  int local_64;
  longlong *local_60;
  longlong *local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24 [3];
  
  local_f0 = auStack_158;
  local_100 = 0;
  local_108 = 0;
  local_f8 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  FUN_01604ed0(&local_a0,&local_a8,local_24,&local_28);
  local_40 = FUN_01b21190(local_a0,0x2c,0);
  local_48 = FUN_01b21190(local_a8,0x2c,1);
  local_a9 = '\0';
  local_60 = (longlong *)0x0;
  local_aa = 0;
  local_30 = FUN_004b6930(&PTR_FUN_00478280,1);
  local_38 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  local_50 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_015fcb30(&local_70,&DAT_0210f7fc);
  uVar2 = FUN_019a4600();
  FUN_019af590(uVar2,local_70);
  if (param_1 == 0) {
    uVar2 = FUN_019a4600();
    FUN_019a1310(uVar2,local_38,3);
  }
  else {
    FUN_004ae7e0(local_38,param_1);
  }
  if (*(int *)(local_38 + 0x10) == 0) {
    FUN_0044d490(&PTR_FUN_004334c0,1,L"No MCU found!");
    FUN_004134c0();
  }
  iVar3 = *(int *)(local_38 + 0x10);
  if (iVar3 < 1) {
    local_60 = (longlong *)FUN_004aeac0(local_38,0);
    local_a9 = '\x01';
  }
  else {
    local_64 = 0;
    if (-1 < iVar3 + -1) {
      do {
        local_60 = (longlong *)FUN_004aeac0(local_38,local_64);
        (**(code **)(*local_60 + 0x288))(local_60,&local_f8);
        (**(code **)(*local_50 + 0x78))(local_50,local_f8);
        local_64 = local_64 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    local_c8 = (longlong *)FUN_007fc180(&PTR_FUN_015e58a8,1,*(undefined8 *)PTR_DAT_02004030);
    (**(code **)(**(longlong **)(local_c8[0xd9] + 0x4f0) + 0x10))
              (*(longlong **)(local_c8[0xd9] + 0x4f0),local_50);
    (**(code **)(**(longlong **)(local_c8[0xdb] + 0x4f0) + 0x10))
              (*(longlong **)(local_c8[0xdb] + 0x4f0),local_48);
    (**(code **)(**(longlong **)(local_c8[0xda] + 0x4f0) + 0x10))
              (*(longlong **)(local_c8[0xda] + 0x4f0),local_40);
    (**(code **)(*(longlong *)local_c8[0xd9] + 0x268))((longlong *)local_c8[0xd9],0);
    (**(code **)(*(longlong *)local_c8[0xda] + 0x268))((longlong *)local_c8[0xda],local_24[0]);
    (**(code **)(*(longlong *)local_c8[0xdb] + 0x268))((longlong *)local_c8[0xdb],local_28);
    iVar3 = (**(code **)(*local_c8 + 0x2d0))(local_c8);
    if (iVar3 == 1) {
      local_a9 = '\x01';
      uVar1 = (**(code **)(*(longlong *)local_c8[0xd9] + 0x260))((longlong *)local_c8[0xd9]);
      local_60 = (longlong *)FUN_004aeac0(local_38,uVar1);
      local_d0 = (longlong *)local_c8[0xda];
      uVar1 = (**(code **)(*local_d0 + 0x260))(local_d0);
      (**(code **)(*(longlong *)local_d0[0x9e] + 0x18))((longlong *)local_d0[0x9e],&local_88,uVar1);
      local_d8 = (longlong *)local_c8[0xdb];
      uVar1 = (**(code **)(*local_d8 + 0x260))(local_d8);
      (**(code **)(*(longlong *)local_d8[0x9e] + 0x18))((longlong *)local_d8[0x9e],&local_90,uVar1);
      local_24[0] = (**(code **)(*(longlong *)local_c8[0xda] + 0x260))((longlong *)local_c8[0xda]);
      local_28 = (**(code **)(*(longlong *)local_c8[0xdb] + 0x260))((longlong *)local_c8[0xdb]);
      local_aa = (**(code **)(*(longlong *)local_c8[0xe2] + 0x260))((longlong *)local_c8[0xe2]);
    }
    FUN_00410f20(local_c8);
  }
  if (local_a9 != '\0') {
    local_b8 = FUN_004113f0(local_60[0x35],&PTR_FUN_01763148);
    if ((0 < *(int *)(*(longlong *)(*(longlong *)(local_b8 + 0x110) + 0x18) + 0x10)) ||
       (iVar3 = FUN_0072d440(L"This is a single VHDL macro. Are you sure you want to assign the mcu code?"
                             ,3,0xb,0), iVar3 == 6)) {
      local_138 = L"Debug";
      local_128 = 0;
      local_120 = 0;
      local_118 = local_aa;
      local_110 = 0;
      local_130 = param_3;
      FUN_01606940(local_60,param_2,local_88,local_90);
      (**(code **)(*local_60 + 0x288))(local_60,&local_108);
      FUN_00416ba0(&local_100,L"Code assigned to: ",local_108);
      local_e0 = local_100;
      FUN_0072d730(local_100,0xffffffff,0xffffffff);
    }
  }
  FUN_016052c0(local_24[0],local_28);
  FUN_00410f20(local_30);
  FUN_00410f20(local_38);
  FUN_00410f20(local_40);
  FUN_00410f20(local_48);
  FUN_00410f20(local_50);
  FUN_00414560(&local_108,3);
  FUN_00414560(&local_a8,8);
  return;
}


/* Ghidra address: 00ee2cd0 */
/* Ghidra symbol: FUN_00ee2cd0 */


void FUN_00ee2cd0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined1 auStack_248 [32];
  ulonglong local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined1 local_210;
  undefined1 local_208;
  undefined1 local_200;
  undefined1 local_1f8 [256];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined4 local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined1 local_32;
  char local_31;
  longlong local_30;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_50 = auStack_248;
  local_f8 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_78 = 0;
  local_68 = 0;
  local_70 = 0;
  local_60 = 0;
  local_58 = 0;
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  iVar3 = FUN_004170c0(&DAT_00ee3880,param_2,1);
  if (iVar3 < 2) {
    FUN_00415dd0(&local_20,param_2,0);
    FUN_004144d0(&local_28);
  }
  else {
    iVar3 = FUN_004170c0(&DAT_00ee3880,param_2,1);
    FUN_00416dc0(&local_58,param_2,1,iVar3 + -1);
    FUN_00415dd0(&local_20,local_58,0);
    local_3c = FUN_004170c0(&DAT_00ee3880,param_2,1);
    local_3c = local_3c + 1;
    local_38 = 0;
    if (param_2 != 0) {
      local_38 = *(undefined4 *)(param_2 + -4);
    }
    FUN_00416dc0(&local_60,param_2,local_3c,local_38);
    FUN_00415dd0(&local_28,local_60,0);
  }
  FUN_00416880(&local_70,local_20);
  FUN_00441710(&local_68,local_70);
  if (local_68 == 0) {
    FUN_00ee2c30(*(undefined8 *)(param_1 + 400),&local_78,L"PSPICELIB");
    FUN_00415dd0(&local_30,local_78,0);
    if (local_30 != 0) {
      FUN_00416880(&local_88,local_20);
      FUN_00416880(&local_90,local_30);
      FUN_004420f0(&local_80,local_88,local_90);
      FUN_00415dd0(&local_20,local_80,0);
    }
  }
  FUN_00edb3a0(*(undefined8 *)(param_1 + 400),&local_98,local_20,local_28);
  FUN_00414c70(&local_20,local_98);
  FUN_00416880(&local_a0,local_20);
  cVar2 = FUN_00440a20(local_a0,1);
  if (cVar2 == '\0') {
    FUN_00415560(local_1f8,local_20,0xff);
    FUN_016a4020(*(undefined8 *)(*(longlong *)(param_1 + 0x158) + 0x10),6,local_1f8,0xffffffff);
  }
  else {
    FUN_00416880(&local_a8,local_20);
    FUN_016bbb90(*(undefined8 *)(param_1 + 0x158),local_a8);
    FUN_00416880(&local_b0,local_20);
    FUN_016bb4f0(*(undefined8 *)(param_1 + 0x158),local_b0,1);
    *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x158) + 0x10) + 0x244) = 0;
    FUN_004144d0(*(longlong *)(param_1 + 0x158) + 0xd80);
    FUN_004144d0(*(longlong *)(param_1 + 0x158) + 0xd88);
    local_31 = '\0';
    while ((*(char *)(param_1 + 0x157) == '\0' &&
           (cVar2 = FUN_016bb790(*(undefined8 *)(param_1 + 0x158)), cVar2 == '\0'))) {
      if (*(longlong *)(*(longlong *)(param_1 + 0x158) + 0xd88) == 0) {
        FUN_016bb7d0(*(undefined8 *)(param_1 + 0x158),&local_10,1);
      }
      else {
        FUN_00414c70(&local_10,*(undefined8 *)(*(longlong *)(param_1 + 0x158) + 0xd88));
        FUN_004144d0(*(longlong *)(param_1 + 0x158) + 0xd88);
      }
      FUN_016b8f10(&local_18,local_10);
      if (local_18 != 0) {
        iVar3 = FUN_00417250(local_18,local_10,1);
        if (0 < iVar3) {
          local_44 = FUN_00417250(local_18,local_10,1);
          local_40 = 0;
          if (local_18 != 0) {
            local_40 = *(int *)(local_18 + -4);
          }
          local_48 = 0;
          if (local_10 != 0) {
            local_48 = *(undefined4 *)(local_10 - 4);
          }
          FUN_00415ad0(&local_10,local_10,local_44 + local_40,local_48);
        }
      }
      if (((*(char *)(param_1 + 0x198) == '\0') &&
          (iVar3 = FUN_00415a60(local_18,".MODEL"), iVar3 == 0)) && (local_31 == '\0')) {
        FUN_016b9030(&local_b8,local_10,&DAT_00ee38b7);
        FUN_004154b0(&local_c0,param_1 + 0x57,0);
        iVar3 = FUN_00415a60(local_b8,local_c0);
        *(bool *)(param_1 + 0x157) = iVar3 == 0;
      }
      else if (((*(char *)(param_1 + 0x198) == '\x01') &&
               (iVar3 = FUN_00415a60(local_18,".PARAM"), iVar3 == 0)) && (local_31 == '\0')) {
        FUN_016b9030(&local_c8,local_10,&DAT_00ee38b7);
        FUN_004154b0(&local_d0,param_1 + 0x57,0);
        iVar3 = FUN_00415a60(local_c8,local_d0);
        *(bool *)(param_1 + 0x157) = iVar3 == 0;
      }
      else if (((*(char *)(param_1 + 0x198) == '\x02') &&
               (iVar3 = FUN_00415a60(local_18,".FUNC"), iVar3 == 0)) && (local_31 == '\0')) {
        FUN_016b9030(&local_d8,local_10,&DAT_00ee38b7);
        FUN_004154b0(&local_e0,param_1 + 0x57,0);
        iVar3 = FUN_00415a60(local_d8,local_e0);
        *(bool *)(param_1 + 0x157) = iVar3 == 0;
      }
      else {
        iVar3 = FUN_00415a60(local_18,".SUBCKT");
        if (iVar3 == 0) {
          local_31 = '\x01';
          if (*(char *)(param_1 + 0x198) == '\x03') {
            FUN_016b9030(&local_e8,local_10,&DAT_00ee3914);
            FUN_004154b0(&local_f0,param_1 + 0x57,0);
            iVar3 = FUN_00415a60(local_e8,local_f0);
            *(bool *)(param_1 + 0x157) = iVar3 == 0;
          }
        }
        else {
          iVar3 = FUN_00415a60(local_18,".ENDS");
          if (iVar3 == 0) {
            local_31 = '\0';
          }
          else {
            iVar3 = FUN_00415a60(local_18,&DAT_00ee3954);
            if (iVar3 == 0) {
              local_228 = local_10;
              FUN_00415980(*(longlong *)(param_1 + 0x158) + 0xd88,3,local_18,&LAB_00ee3968);
              local_32 = *(undefined1 *)(*(longlong *)(param_1 + 400) + 0x30);
              *(undefined1 *)(*(longlong *)(param_1 + 400) + 0x30) = 0;
              local_228 = local_228 & 0xffffffffffffff00;
              local_220 = 0;
              local_218 = 0;
              local_210 = 0;
              local_208 = 1;
              local_200 = 1;
              FUN_00ee2730(*(undefined8 *)(param_1 + 400),0,*(undefined8 *)(param_1 + 0x1a8),
                           *(undefined8 *)(param_1 + 0x1b0));
              *(undefined1 *)(*(longlong *)(param_1 + 400) + 0x30) = local_32;
            }
          }
        }
      }
    }
    if (*(char *)(param_1 + 0x157) != '\0') {
      local_228 = local_10;
      FUN_00415980(*(longlong *)(param_1 + 0x158) + 0xd88,3,local_18,&LAB_00ee3968);
      if (*(char *)(param_1 + 0x198) == '\x03') {
        while( true ) {
          FUN_016b8f10(&local_f8,*(undefined8 *)(*(longlong *)(param_1 + 0x158) + 0xd80));
          iVar3 = FUN_00415a60(local_f8,".ENDS");
          if (iVar3 == 0) break;
          local_228 = local_228 & 0xffffffffffffff00;
          local_220 = 0;
          local_218 = 0;
          local_210 = 0;
          local_208 = 1;
          local_200 = 1;
          FUN_00ee2730(*(undefined8 *)(param_1 + 400),0,*(undefined8 *)(param_1 + 0x1a8),
                       *(undefined8 *)(param_1 + 0x1b0));
        }
      }
      else {
        local_228 = local_228 & 0xffffffffffffff00;
        local_220 = 0;
        local_218 = 0;
        local_210 = 0;
        local_208 = 1;
        local_200 = 1;
        FUN_00ee2730(*(undefined8 *)(param_1 + 400),0,*(undefined8 *)(param_1 + 0x1a8),
                     *(undefined8 *)(param_1 + 0x1b0));
      }
      if (*(char *)(*(longlong *)(param_1 + 400) + 0x30) != '\0') {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 400) + 0x28);
        (**(code **)(*plVar1 + 0x78))(plVar1,0);
      }
    }
    FUN_016bbca0(*(undefined8 *)(param_1 + 0x158));
  }
  FUN_00414590(&local_f8,9);
  FUN_00414560(&local_b0,3);
  FUN_004144d0(&local_98);
  FUN_00414560(&local_90,8);
  FUN_00414590(&local_30,5);
  return;
}


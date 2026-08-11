/* Ghidra address: 0176f6f0 */
/* Ghidra symbol: FUN_0176f6f0 */


void FUN_0176f6f0(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4,
                 longlong param_5,longlong param_6)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_res10;
  longlong local_res18;
  longlong local_res20;
  undefined1 auStack_238 [32];
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  int local_1ec;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  longlong local_1c0;
  undefined1 local_1b8 [256];
  undefined8 local_b8;
  undefined1 *local_b0;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_88 [2];
  undefined8 local_78;
  int local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  longlong *local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong *local_20;
  
  local_b0 = auStack_238;
  local_1e0 = 0;
  local_1e8 = 0;
  local_1c0 = 0;
  local_1d0 = 0;
  local_1d8 = 0;
  local_1c8 = 0;
  local_b8 = 0;
  local_60 = 0;
  local_68 = 0;
  local_88[0] = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_2);
  local_40 = FUN_004b6930(&PTR_FUN_00478280,1);
  local_48 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_004b6d10(local_48,0);
  local_30 = FUN_01d34560(&PTR_FUN_016a2078,1,10,10);
  local_38 = (longlong *)FUN_01d34560(&PTR_FUN_016a2078,1,10,10);
  FUN_0176ee70(auStack_238,*(undefined8 *)(local_res18 + 0x438),local_30,1);
  if (local_res18 != local_res20) {
    FUN_0176ee70(auStack_238,*(undefined8 *)(local_res20 + 0x438),local_38,0);
  }
  if ((param_5 != 0) && (cVar1 = FUN_01d04d50(param_5), cVar1 != '\0')) {
    local_78 = *(undefined8 *)(*(longlong *)(param_5 + 0x1a8) + 0xc0);
    uVar3 = FUN_0177aa70(local_78);
    local_20 = (longlong *)FUN_0177ae90(uVar3);
    while (cVar1 = thunk_FUN_0177b033(local_20), cVar1 != '\0') {
      FUN_0177aee0(local_20,&local_60);
      FUN_0061d660(&local_b8,local_60);
      FUN_00415560(local_1b8,local_b8,0xff);
      local_50 = FUN_016a61f0(&PTR_FUN_016a1ed0,1,local_1b8,0);
      FUN_004144d0(local_50 + 0x10);
      uVar3 = FUN_01779a20(local_78,local_60);
      *(undefined8 *)(local_50 + 0x28) = uVar3;
      (**(code **)(*local_38 + 0x50))(local_38,local_50);
    }
    if (local_20 != (longlong *)0x0) {
      (**(code **)(*local_20 + -0x20))(local_20,1);
    }
  }
  FUN_016cc2a0(local_res10,local_48);
  iVar2 = (**(code **)(*local_48 + 0x28))(local_48);
  if (0 < iVar2) {
    iVar2 = (**(code **)(*local_48 + 0x28))();
    local_1ec = iVar2 + -1;
    local_6c = 0;
    if (-1 < local_1ec) {
      do {
        local_1ec = iVar2;
        FUN_004b3cf0(local_48,&local_1c8,local_6c);
        FUN_0043ea00(&local_1c0,local_1c8);
        if (local_1c0 != 0) {
          FUN_004b5390(local_48,&local_1d8,local_6c);
          FUN_0043ea00(&local_1d0,local_1d8);
          if (local_1d0 != 0) {
            FUN_004b5390(local_48,local_88,local_6c);
            FUN_00457c30(local_88,&local_68,&DAT_0176fd38,1);
            FUN_0043e130(&local_1e0,local_68);
            FUN_00415dd0(&local_1e8,local_1e0,0);
            local_218 = local_30;
            local_210 = *(undefined8 *)(local_res18 + 0x488);
            local_208 = local_40;
            local_28 = FUN_016a6a40(&DAT_016a2760,1,local_1e8,local_38);
            local_90 = FUN_016a9290(local_28);
            local_58 = local_90;
            local_94 = FUN_00597e50(param_6 + 8,&local_90);
            FUN_00410f20(local_28);
          }
        }
        local_6c = local_6c + 1;
        local_1ec = local_1ec + -1;
        iVar2 = local_1ec;
      } while (local_1ec != 0);
    }
  }
  FUN_00410f20(local_30);
  FUN_00410f20(local_38);
  FUN_00410f20(local_40);
  FUN_00410f20(local_48);
  FUN_004144d0(&local_1e8);
  FUN_00414560(&local_1e0,5);
  FUN_004144d0(&local_b8);
  FUN_00414480(local_88);
  FUN_00414480(&local_68);
  FUN_004144d0(&local_60);
  FUN_00414480(&local_res10);
  return;
}


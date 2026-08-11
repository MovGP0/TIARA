/* Ghidra address: 013fcf70 */
/* Ghidra symbol: FUN_013fcf70 */


void FUN_013fcf70(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_248 [32];
  undefined8 local_228;
  undefined8 *local_220;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined1 local_1b0 [256];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 *local_a0;
  undefined4 local_94;
  longlong *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  int local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  undefined8 local_20 [2];
  
  local_a0 = auStack_248;
  local_200 = 0;
  local_210 = 0;
  local_208 = 0;
  local_1e0 = 0;
  local_1f0 = 0;
  local_1f8 = 0;
  local_1e8 = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1b8 = 0;
  local_1c0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_58 = 0;
  local_60 = 0;
  local_78 = 0;
  local_88 = 0;
  local_20[0] = 0;
  puVar1 = auStack_248;
  if (param_2 != 0) {
    lVar4 = FUN_017ff620(param_2);
    if (lVar4 != 0) {
      uVar5 = FUN_017ff620(param_2);
      FUN_013fcf70(param_1,uVar5,param_3,param_4);
    }
    local_38 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    local_30 = (longlong *)FUN_01d34560(&PTR_FUN_016a2078,1,10,10);
    if (((*(char *)(param_2 + 0x1a0) == '\x01') &&
        (*(longlong *)(*(longlong *)(param_2 + 0x1a8) + 0x58) != 0)) &&
       (**(short **)(*(longlong *)(param_2 + 0x1a8) + 0x58) == 0x40)) {
      FUN_00414480(local_20);
      local_90 = (longlong *)(*(longlong *)(param_2 + 0x1a8) + 0x58);
      local_94 = 0;
      if (*local_90 != 0) {
        local_94 = *(undefined4 *)(*local_90 + -4);
      }
      FUN_00416dc0(local_20,*local_90,2,local_94);
      uVar5 = FUN_00416740(local_20[0]);
      FUN_004ae3e0(&DAT_013fd820,&DAT_013fd840,uVar5,local_38);
      FUN_00414480(local_20);
      lVar4 = FUN_017ff620(param_2);
      if (lVar4 != 0) {
        lVar4 = FUN_017ff620(param_2);
        local_40 = *(longlong *)(*(longlong *)(lVar4 + 0x1a8) + 8);
        iVar3 = (**(code **)(**(longlong **)(local_40 + 0x438) + 0x28))();
        local_6c = 0;
        if (-1 < iVar3 + -1) {
          do {
            FUN_004b3cf0(*(undefined8 *)(local_40 + 0x438),&local_b0,local_6c);
            FUN_0043e130(&local_a8,local_b0);
            FUN_00416910(local_1b0,local_a8,0xff);
            local_50 = FUN_016a61f0(&PTR_FUN_016a1ed0,1,local_1b0,0);
            FUN_004b5390(*(undefined8 *)(local_40 + 0x438),&local_1c0,local_6c);
            FUN_0043e130(&local_78,local_1c0);
            local_228 = CONCAT71(local_228._1_7_,1);
            FUN_00456a50(&local_78,&local_1b8,&DAT_013fd86c);
            FUN_00415dd0(local_50 + 0x10,local_1b8,0);
            *(undefined8 *)(local_50 + 0x28) = 0;
            (**(code **)(*local_30 + 0x50))(local_30,local_50);
            local_6c = local_6c + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      local_48 = FUN_017ff620(param_2);
      if ((local_48 != 0) && (cVar2 = FUN_01d04d50(local_48), cVar2 != '\0')) {
        local_80 = *(undefined8 *)(*(longlong *)(local_48 + 0x1a8) + 0xc0);
        uVar5 = FUN_0177aa70(local_80);
        local_28 = (longlong *)FUN_0177ae90(uVar5);
        while (cVar2 = thunk_FUN_0177b033(local_28), cVar2 != '\0') {
          FUN_0177aee0(local_28,&local_1c8);
          FUN_00416880(&local_60,local_1c8);
          FUN_0043e130(&local_1d0,local_60);
          FUN_00416910(local_1b0,local_1d0,0xff);
          local_50 = FUN_016a61f0(&PTR_FUN_016a1ed0,1,local_1b0,0);
          FUN_004144d0(local_50 + 0x10);
          FUN_00415dd0(&local_1d8,local_60,0);
          uVar5 = FUN_01779a20(local_80,local_1d8);
          *(undefined8 *)(local_50 + 0x28) = uVar5;
          (**(code **)(*local_30 + 0x50))(local_30,local_50);
        }
        if (local_28 != (longlong *)0x0) {
          (**(code **)(*local_28 + -0x20))(local_28,1);
        }
      }
      FUN_0177a660(*(undefined8 *)(*(longlong *)(param_2 + 0x1a8) + 0xc0));
      iVar3 = (**(code **)(*local_38 + 0x28))();
      local_6c = 0;
      if (-1 < iVar3 + -1) {
        do {
          FUN_004b3cf0(local_38,&local_1e8,local_6c);
          FUN_0043ea00(&local_1e0,local_1e8);
          if (local_1e0 != 0) {
            FUN_004b5390(local_38,&local_1f8,local_6c);
            FUN_0043ea00(&local_1f0,local_1f8);
            if (local_1f0 != 0) {
              FUN_004b5390(local_38,&local_88,local_6c);
              FUN_00457c30(&local_88,&local_58,&DAT_013fd872,1);
              local_220 = &local_68;
              local_228 = param_4;
              cVar2 = FUN_013fcde0(auStack_248,local_58,param_3,local_30);
              if (cVar2 != '\0') {
                FUN_004b3cf0(local_38,&local_208,local_6c);
                FUN_0043e130(&local_200,local_208);
                FUN_00415dd0(&local_210,local_200,0);
                FUN_0177a800(*(undefined8 *)(*(longlong *)(param_2 + 0x1a8) + 0xc0),local_210,
                             local_68);
              }
            }
          }
          local_6c = local_6c + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    FUN_00410f20(local_30);
    FUN_00410f20(local_38);
    puVar1 = local_a0;
  }
  local_a0 = puVar1;
  FUN_004144d0(&local_210);
  FUN_00414560(&local_208,6);
  FUN_004144d0(&local_1d8);
  FUN_00414480(&local_1d0);
  FUN_004144d0(&local_1c8);
  FUN_00414560(&local_1c0,2);
  FUN_00414560(&local_b0,2);
  FUN_00414480(&local_88);
  FUN_00414480(&local_78);
  FUN_00414560(&local_60,2);
  FUN_00414480(local_20);
  return;
}


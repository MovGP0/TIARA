/* Ghidra address: 00ad1da0 */
/* Ghidra symbol: FUN_00ad1da0 */


undefined1 FUN_00ad1da0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 *local_e0;
  undefined4 local_d4;
  undefined4 local_d0;
  char local_c9;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  char local_ba;
  bool local_b9;
  int local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  bool local_a9;
  int local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  bool local_99;
  int local_98;
  undefined4 local_94;
  undefined4 local_90;
  bool local_89;
  int local_88;
  undefined4 local_84;
  undefined4 local_80;
  bool local_79;
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 local_64;
  char local_5d;
  char local_5c;
  char local_5b;
  char local_5a;
  char local_59;
  longlong local_58;
  bool local_49;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_e0 = auStack_158;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_58 = 0;
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_49 = false;
  FUN_00ad3020(*(undefined8 *)(param_1 + 0x90));
  uVar2 = FUN_00414480(&local_58);
  FUN_00ad1c80(param_1,uVar2);
  FUN_00414480(&local_10);
  FUN_0043e5a0(&local_10,local_58);
  iVar1 = FUN_00416db0(local_10,L"HTML");
  local_59 = iVar1 == 0;
  FUN_00414480(&local_10);
  if (local_59 != '\0') {
    FUN_00ad1af0(param_1);
    if (*(short *)(*(longlong *)(param_1 + 0x90) + 0x20) == 0x3e) {
      local_49 = true;
    }
    else {
      uVar2 = FUN_00414480(&local_58);
      FUN_00ad1c80(param_1,uVar2);
      FUN_00414480(&local_18);
      FUN_0043e5a0(&local_18,local_58);
      iVar1 = FUN_00416db0(local_18,L"PUBLIC");
      local_5a = iVar1 != 0;
      FUN_00414480(&local_18);
      if (local_5a != '\0') {
        FUN_00414480(&local_20);
        FUN_0043e5a0(&local_20,local_58);
        iVar1 = FUN_00416db0(local_20,L"SYSTEM");
        local_5b = iVar1 != 0;
        FUN_00414480(&local_20);
        if (local_5b != '\0') goto LAB_00ad28f0;
      }
      FUN_00ad3020(*(undefined8 *)(param_1 + 0x90));
      if (*(short *)(*(longlong *)(param_1 + 0x90) + 0x20) == 0x22) {
        FUN_00ad1af0(param_1);
      }
      FUN_00ad3020(*(undefined8 *)(param_1 + 0x90));
      uVar2 = FUN_00414480(&local_58);
      FUN_00ad1c80(param_1,uVar2);
      FUN_00414480(&local_28);
      FUN_0043e5a0(&local_28,local_58);
      iVar1 = FUN_00416db0(local_28,L"ABOUT");
      local_5c = iVar1 == 0;
      FUN_00414480(&local_28);
      if (local_5c == '\0') {
        FUN_00414480(&local_30);
        FUN_0043e5a0(&local_30,local_58);
        iVar1 = FUN_00416db0(local_30,L"HTTP");
        local_5d = iVar1 == 0;
        FUN_00414480(&local_30);
        if (local_5d != '\0') {
          uVar2 = FUN_00414480(&local_58);
          FUN_00ad1bd0(param_1,uVar2);
          local_68 = 0x11;
          local_64 = 0x11;
          local_6c = 0;
          if (local_58 != 0) {
            local_6c = *(int *)(local_58 + -4);
          }
          FUN_00416dc0(&local_e8,local_58,local_6c + -0x10,0x11);
          iVar1 = FUN_00416db0(local_e8,L"html40/strict.dtd");
          if (iVar1 == 0) {
            local_79 = true;
          }
          else {
            local_74 = 0x11;
            local_70 = 0x11;
            local_78 = 0;
            if (local_58 != 0) {
              local_78 = *(int *)(local_58 + -4);
            }
            FUN_00416dc0(&local_f0,local_58,local_78 + -0x10,0x11);
            iVar1 = FUN_00416db0(local_f0,L"xhtml1-strict.dtd");
            local_79 = iVar1 == 0;
          }
          if (local_79 == false) {
            local_84 = 0x11;
            local_80 = 0x11;
            local_88 = 0;
            if (local_58 != 0) {
              local_88 = *(int *)(local_58 + -4);
            }
            FUN_00416dc0(&local_f8,local_58,local_88 + -0x10,0x11);
            iVar1 = FUN_00416db0(local_f8,L"xhtml-basic11.dtd");
            local_89 = iVar1 == 0;
          }
          else {
            local_89 = true;
          }
          if (local_89 == false) {
            local_94 = 0x17;
            local_90 = 0x17;
            local_98 = 0;
            if (local_58 != 0) {
              local_98 = *(int *)(local_58 + -4);
            }
            FUN_00416dc0(&local_100,local_58,local_98 + -0x16,0x17);
            iVar1 = FUN_00416db0(local_100,L"xhtml1-transitional.dtd");
            local_99 = iVar1 == 0;
          }
          else {
            local_99 = true;
          }
          if (local_99 == false) {
            local_a4 = 0x13;
            local_a0 = 0x13;
            local_a8 = 0;
            if (local_58 != 0) {
              local_a8 = *(int *)(local_58 + -4);
            }
            FUN_00416dc0(&local_108,local_58,local_a8 + -0x12,0x13);
            iVar1 = FUN_00416db0(local_108,L"xhtml1-frameset.dtd");
            local_a9 = iVar1 == 0;
          }
          else {
            local_a9 = true;
          }
          if (local_a9 == false) {
            local_b4 = 0xb;
            local_b0 = 0xb;
            local_b8 = 0;
            if (local_58 != 0) {
              local_b8 = *(int *)(local_58 + -4);
            }
            FUN_00416dc0(&local_110,local_58,local_b8 + -10,0xb);
            iVar1 = FUN_00416db0(local_110,L"xhtml11.dtd");
            local_b9 = iVar1 == 0;
          }
          else {
            local_b9 = true;
          }
          local_49 = local_b9;
          if (local_b9 != false) goto LAB_00ad28f0;
        }
        FUN_00414480(&local_38);
        FUN_0043e5a0(&local_38,local_58);
        iVar1 = FUN_00416db0(local_38,L"-//W3C//DTD");
        local_ba = iVar1 != 0;
        FUN_00414480(&local_38);
        if (local_ba == '\0') {
          FUN_00ad3020(*(undefined8 *)(param_1 + 0x90));
          uVar2 = FUN_00414480(&local_58);
          FUN_00ad1c80(param_1,uVar2);
          FUN_00414480(&local_40);
          FUN_0043e5a0(&local_40,local_58);
          FUN_00414b50(&local_58,local_40);
          FUN_00414480(&local_40);
          iVar1 = FUN_00416db0(local_58,L"HTML");
          if (iVar1 == 0) {
            FUN_00ad3020(*(undefined8 *)(param_1 + 0x90));
            uVar2 = FUN_00414480(&local_58);
            FUN_00ad1c80(param_1,uVar2);
            local_c0 = 4;
            FUN_00416dc0(&local_118,local_58,1,4);
            iVar1 = FUN_00416db0(local_118,L"4.01");
            local_49 = iVar1 == 0;
            if (local_49) goto LAB_00ad28f0;
            local_c4 = 4;
            FUN_00416dc0(&local_120,local_58,1,4);
            iVar1 = FUN_00416db0(local_120,L"4.0/");
            local_49 = iVar1 == 0;
            if (local_49) goto LAB_00ad28f0;
            local_c8 = 2;
            FUN_00416dc0(&local_128,local_58,1,2);
            iVar1 = FUN_00416db0(local_128,&DAT_00ad2c74);
            local_49 = iVar1 == 0;
            FUN_00ad3020(*(undefined8 *)(param_1 + 0x90));
          }
          iVar1 = FUN_00416db0(local_58,L"XHTML");
          if (iVar1 == 0) {
            FUN_00ad3020(*(undefined8 *)(param_1 + 0x90));
            uVar2 = FUN_00414480(&local_58);
            FUN_00ad1c80(param_1,uVar2);
            FUN_00414480(&local_48);
            FUN_0043e5a0(&local_48,local_58);
            iVar1 = FUN_00416db0(local_48,L"BASIC");
            local_c9 = iVar1 == 0;
            FUN_00414480(&local_48);
            if (local_c9 == '\0') {
              local_d4 = 2;
              FUN_00416dc0(&local_138,local_58,1,2);
              iVar1 = FUN_00416db0(local_138,&LAB_00ad2cb8);
              local_49 = iVar1 == 0;
            }
            else {
              FUN_00ad3020(*(undefined8 *)(param_1 + 0x90));
              uVar2 = FUN_00414480(&local_58);
              FUN_00ad1c80(param_1,uVar2);
              local_d0 = 2;
              FUN_00416dc0(&local_130,local_58,1,2);
              iVar1 = FUN_00416db0(local_130,&LAB_00ad2cb8);
              if (iVar1 == 0) {
                local_49 = true;
              }
            }
          }
        }
      }
      else {
        local_49 = true;
      }
    }
  }
LAB_00ad28f0:
  FUN_00414560(&local_138,0xb);
  FUN_00414480(&local_58);
  FUN_00414560(&local_48,8);
  return local_49;
}


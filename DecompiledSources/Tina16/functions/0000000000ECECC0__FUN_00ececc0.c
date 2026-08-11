/* Ghidra address: 00ececc0 */
/* Ghidra symbol: FUN_00ececc0 */


undefined8 *
FUN_00ececc0(undefined8 *param_1,byte param_2,undefined8 param_3,undefined8 param_4,char param_5,
            int *param_6,longlong *param_7)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_1d8 [32];
  undefined *local_1b8;
  int local_1a0;
  int local_19c;
  longlong local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  longlong local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  longlong local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 *local_c0;
  char local_b1;
  int local_b0;
  undefined4 local_ac;
  longlong local_a8;
  int local_a0;
  undefined4 local_9c;
  longlong local_98;
  int local_90;
  undefined4 local_8c;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  int local_64;
  int local_60;
  int local_5c;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_c0 = auStack_1d8;
  local_198 = 0;
  local_190 = 0;
  local_188 = 0;
  local_170 = 0;
  local_178 = 0;
  local_180 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0;
  local_130 = 0;
  local_138 = 0;
  local_140 = 0;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_100 = 0;
  local_108 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_20 = 0;
  local_28 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  if (param_2 < 4) {
    if (param_2 == 3) {
      FUN_00414b50(&local_50,L"Diode");
    }
    else if (param_2 == 0) {
      FUN_00414b50(&local_50,L"Spice");
    }
    else if (param_2 == 1) {
      FUN_00414b50(&local_50,&DAT_00ecfcd4);
    }
    else if (param_2 == 2) {
      FUN_00414b50(&local_50,&DAT_00ecfce8);
    }
  }
  else if (param_2 == 4) {
    FUN_00414b50(&local_50,L"Mixed");
  }
  else if (param_2 == 5) {
    FUN_00414b50(&local_50,L"OtherSC");
  }
  local_70 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_78 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar2 = FUN_004170c0(&DAT_00ecfd48,local_res18,1);
  FUN_00416dc0(&local_c8,local_res18,1,iVar2 + -1);
  FUN_0043ea00(&local_38,local_c8);
  iVar2 = FUN_004170c0(&DAT_00ecfd48,local_res18,1);
  iVar3 = FUN_004170c0(&DAT_00ecfd58,local_res18,1);
  iVar4 = FUN_004170c0(&DAT_00ecfd48,local_res18,1);
  FUN_00416dc0(&local_d0,local_res18,iVar2 + 1,(iVar3 - iVar4) + -1);
  FUN_0043ea00(&local_40,local_d0);
  iVar2 = FUN_004170c0(&DAT_00ecfd68,local_40,1);
  if (iVar2 < 1) {
    FUN_00414b50(&local_58,L"TINA");
  }
  else {
    iVar2 = FUN_004170c0(&DAT_00ecfd68,local_40,1);
    FUN_00416dc0(&local_d8,local_40,1,iVar2 + -1);
    FUN_00ea9ef0(&local_58,local_d8);
    local_90 = FUN_004170c0(&DAT_00ecfd68,local_40,1);
    local_90 = local_90 + 1;
    local_8c = 0;
    if (local_40 != 0) {
      local_8c = *(undefined4 *)(local_40 + -4);
    }
    FUN_00416dc0(&local_40,local_40,local_90,local_8c);
  }
  if (DAT_01ef72c4 == '\0') {
    FUN_00ecbb60();
  }
  local_80 = (longlong *)FUN_00eae5f0(local_58,*(undefined8 *)PTR_DAT_02004008);
  FUN_00414480(param_1);
  if ((local_80 != (longlong *)0x0) && (local_38 != 0)) {
    FUN_00ea9ca0(&local_e8,local_38);
    FUN_0043ea00(&local_e0,local_e8);
    FUN_00414b50(&local_38,local_e0);
    FUN_00ea9ca0(&local_f8,local_40);
    FUN_0043ea00(&local_f0,local_f8);
    FUN_00414b50(&local_40,local_f0);
    local_1b8 = (undefined *)0x0;
    (**(code **)(*local_80 + 0x10))(local_80,&local_48,local_50,local_40);
    if (local_48 != 0) {
      local_5c = FUN_004170c0(local_38,local_48,1);
      if (local_5c == 0) {
        local_5c = 1;
      }
      iVar2 = FUN_004170c0(&DAT_00ecfd48,local_48,local_5c);
      iVar3 = FUN_004170c0(&DAT_00ecfd90,local_48,local_5c);
      iVar4 = FUN_004170c0(&DAT_00ecfd48,local_48,local_5c);
      FUN_00416dc0(&local_48,local_48,iVar2 + 1,(iVar3 - iVar4) + -1);
    }
    if (param_5 != '\0') {
      *param_6 = 1;
    }
    if (local_48 != 0) {
      do {
        FUN_00ea9ab0(&local_30,&local_48);
        (**(code **)(*local_70 + 0x78))(local_70,local_30);
        if (param_5 != '\0') {
          local_5c = 2;
          do {
            FUN_0043f750(&local_108,local_5c);
            FUN_00416ba0(&local_100,&DAT_00ecfda4,local_108);
            iVar2 = FUN_004170c0(local_100,local_30,1);
            if ((0 < iVar2) && (*param_6 < local_5c)) {
              *param_6 = local_5c;
            }
            local_5c = local_5c + 1;
          } while (local_5c != 9);
          iVar2 = FUN_004170c0(&DAT_00ecfda4,local_30,1);
          if (0 < iVar2) {
            iVar2 = FUN_004170c0(&DAT_00ecfda4,local_30,1);
            FUN_00416dc0(&local_30,local_30,1,iVar2 + -1);
          }
          (**(code **)(*local_78 + 0x78))(local_78,local_30);
        }
      } while (local_48 != 0);
      FUN_00eaa4b0(local_70,local_res20);
      FUN_00414480(param_1);
      iVar2 = (**(code **)(*local_70 + 0x28))();
      local_5c = 0;
      if (-1 < iVar2 + -1) {
        do {
          (**(code **)(*local_70 + 0x18))(local_70,&local_110,local_5c);
          local_1b8 = &DAT_00ecfdb4;
          FUN_00416cd0(param_1,3,*param_1,local_110);
          local_5c = local_5c + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      if ((param_5 != '\0') && (1 < *param_6)) {
        (**(code **)(*param_7 + 0x90))(param_7);
        (**(code **)(*local_70 + 0x90))(local_70);
        iVar2 = (**(code **)(*local_78 + 0x28))();
        local_1a0 = iVar2 + -1;
        local_5c = 0;
        if (-1 < local_1a0) {
          do {
            local_1a0 = iVar2;
            local_20 = 0;
            (**(code **)(*local_78 + 0x18))(local_78,&local_20,local_5c);
            (**(code **)(*local_78 + 0x18))(local_78,&local_118,local_5c);
            local_a0 = FUN_004170c0(&DAT_00ecfdc4,local_118,1);
            local_a0 = local_a0 + 1;
            (**(code **)(*local_78 + 0x18))(local_78,&local_120,local_5c);
            local_98 = local_120;
            local_9c = 0;
            if (local_120 != 0) {
              local_9c = *(undefined4 *)(local_120 + -4);
            }
            FUN_00416dc0(&local_48,local_20,local_a0,local_9c);
            FUN_00414480(&local_20);
            iVar2 = FUN_00416db0(local_48,&LAB_00ecfdd4);
            if ((iVar2 != 0) &&
               (cVar1 = (**(code **)(*local_78 + 0x30))(local_78,local_5c), cVar1 == '\0')) {
              (**(code **)(*local_78 + 0x18))(local_78,&local_128,local_5c);
              iVar2 = FUN_004170c0(&DAT_00ecfdc4,local_128,1);
              if (iVar2 < 1) {
                FUN_0043f750(&local_148,local_5c + 1);
                FUN_00416ba0(&local_30,local_148,&DAT_00ecfdb4);
              }
              else {
                (**(code **)(*local_78 + 0x18))(local_78,&local_138,local_5c);
                (**(code **)(*local_78 + 0x18))(local_78,&local_140,local_5c);
                iVar2 = FUN_004170c0(&DAT_00ecfdc4,local_140,1);
                FUN_00416dc0(&local_130,local_138,1,iVar2 + -1);
                FUN_00416ba0(&local_30,local_130,&DAT_00ecfdb4);
              }
              (**(code **)(*local_78 + 0x48))(local_78,local_5c,1);
              local_64 = 1;
              local_19c = (**(code **)(*local_78 + 0x28))(local_78);
              local_60 = local_5c + 1;
              local_19c = local_19c + -1;
              if (local_60 <= local_19c) {
                local_19c = (local_19c - local_60) + 1;
                do {
                  local_28 = 0;
                  (**(code **)(*local_78 + 0x18))(local_78,&local_28,local_60);
                  (**(code **)(*local_78 + 0x18))(local_78,&local_150,local_60);
                  local_b0 = FUN_004170c0(&DAT_00ecfdc4,local_150,1);
                  local_b0 = local_b0 + 1;
                  (**(code **)(*local_78 + 0x18))(local_78,&local_158,local_60);
                  local_a8 = local_158;
                  local_ac = 0;
                  if (local_158 != 0) {
                    local_ac = *(undefined4 *)(local_158 + -4);
                  }
                  FUN_00416dc0(&local_160,local_28,local_b0,local_ac);
                  iVar2 = FUN_00416db0(local_160,local_48);
                  local_b1 = iVar2 == 0;
                  FUN_00414480(&local_28);
                  if (local_b1 != '\0') {
                    (**(code **)(*local_78 + 0x18))(local_78,&local_168,local_60);
                    iVar2 = FUN_004170c0(&DAT_00ecfdc4,local_168,1);
                    if (iVar2 < 1) {
                      FUN_0043f750(&local_188,local_60 + 1);
                      local_1b8 = &DAT_00ecfdb4;
                      FUN_00416cd0(&local_30,3,local_30,local_188);
                    }
                    else {
                      (**(code **)(*local_78 + 0x18))(local_78,&local_178,local_60);
                      (**(code **)(*local_78 + 0x18))(local_78,&local_180,local_60);
                      iVar2 = FUN_004170c0(&DAT_00ecfdc4,local_180,1);
                      FUN_00416dc0(&local_170,local_178,1,iVar2 + -1);
                      local_1b8 = &DAT_00ecfdb4;
                      FUN_00416cd0(&local_30,3,local_30,local_170);
                    }
                    (**(code **)(*local_78 + 0x48))(local_78,local_60,1);
                    local_64 = local_64 + 1;
                  }
                  local_60 = local_60 + 1;
                  local_19c = local_19c + -1;
                } while (local_19c != 0);
              }
              if (local_64 == *param_6) {
                (**(code **)(*local_70 + 0x78))(local_70,local_30);
              }
            }
            local_5c = local_5c + 1;
            local_1a0 = local_1a0 + -1;
            iVar2 = local_1a0;
          } while (local_1a0 != 0);
        }
        while ((**(code **)(*local_70 + 0x18))(local_70,&local_198,0), local_198 != 0) {
          FUN_00414480(&local_30);
          iVar2 = (**(code **)(*local_70 + 0x28))();
          local_5c = 0;
          if (-1 < iVar2 + -1) {
            do {
              (**(code **)(*local_70 + 0x18))(local_70,&local_48,local_5c);
              FUN_00ea9ab0(&local_190,&local_48);
              local_1b8 = &DAT_00ecfdb4;
              FUN_00416cd0(&local_30,3,local_30,local_190);
              (**(code **)(*local_70 + 0x40))(local_70,local_5c);
              local_5c = local_5c + 1;
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
          }
          (**(code **)(*param_7 + 0x78))(param_7,local_30);
        }
      }
    }
  }
  FUN_00410f20(local_70);
  FUN_00410f20(local_78);
  FUN_00414560(&local_198,0x1b);
  FUN_00414560(&local_58,6);
  FUN_00414480(&local_res18);
  return param_1;
}


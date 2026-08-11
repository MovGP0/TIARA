/* Ghidra address: 0172aaf0 */
/* Ghidra symbol: FUN_0172aaf0 */


undefined8 *
FUN_0172aaf0(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
            longlong *param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  longlong local_res18;
  undefined8 local_res20;
  undefined1 auStack_1b8 [32];
  undefined *local_198;
  undefined8 *local_180;
  longlong *local_178;
  int local_16c;
  int local_168;
  int local_164;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  longlong local_f0;
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
  undefined4 local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30 [2];
  
  local_160 = 0;
  local_158 = 0;
  local_148 = 0;
  local_150 = 0;
  local_140 = 0;
  local_130 = 0;
  local_138 = 0;
  local_128 = 0;
  local_120 = 0;
  local_110 = 0;
  local_118 = 0;
  local_100 = 0;
  local_108 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_d8 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_30[0] = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  local_40 = (longlong *)0x0;
  local_48 = (longlong *)0x0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  local_180 = param_2;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  FUN_0043ea00(&local_90,local_res18);
  FUN_00414b50(&local_res18,local_90);
  iVar2 = FUN_00416db0(local_res20,&DAT_0172b860);
  if (iVar2 == 0) {
    (**(code **)(*param_5 + 0x90))(param_5);
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    FUN_004168e0(local_180,local_res18);
  }
  else {
    local_178 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    FUN_004b67b0(local_178,1);
    iVar2 = FUN_00416db0(local_res20,&DAT_0172b860);
    if (iVar2 == 0) {
      (**(code **)(*param_5 + 0x78))(param_5,&DAT_0172b870);
      iVar2 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x28))();
      iVar4 = 0;
      if (-1 < iVar2 + -1) {
        do {
          (**(code **)(**(longlong **)(param_1 + 0x30) + 0x18))
                    (*(longlong **)(param_1 + 0x30),&local_98,iVar4);
          FUN_00416ad0(&local_98,&DAT_0172b884);
          (**(code **)(*param_5 + 0x78))(param_5,local_98);
          (**(code **)(**(longlong **)(param_1 + 0x30) + 0x18))
                    (*(longlong **)(param_1 + 0x30),&local_a0,iVar4);
          (**(code **)(*local_178 + 0x78))(local_178,local_a0);
          iVar4 = iVar4 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
    local_164 = 1;
    FUN_00414520(local_180);
    do {
      local_16c = FUN_004170c0(&DAT_0172b894,local_res18,local_164);
      local_168 = FUN_004170c0(&DAT_0172b8a4,local_res18,local_164);
      iVar2 = FUN_004170c0(&DAT_0172b8b4,local_res18,local_164);
      if ((local_16c < 1) || (local_168 < 1)) {
        iVar2 = 0;
        if (local_res18 != 0) {
          iVar2 = *(int *)(local_res18 + -4);
        }
        if (local_164 < iVar2 + 1) {
          iVar2 = 0;
          if (local_res18 != 0) {
            iVar2 = *(int *)(local_res18 + -4);
          }
          FUN_00416dc0(&local_68,local_res18,local_164,(iVar2 - local_164) + 1);
          FUN_004168b0(&local_158,*local_180);
          FUN_00416ad0(&local_158,local_68);
          FUN_004168e0(local_180,local_158);
          iVar2 = FUN_00416db0(local_res20,&DAT_0172b860);
          if (iVar2 == 0) {
            iVar2 = (**(code **)(*param_5 + 0x28))();
            iVar4 = 0;
            if (-1 < iVar2 + -1) {
              do {
                (**(code **)(*param_5 + 0x18))(param_5,&local_160,iVar4);
                FUN_00416ad0(&local_160,local_68);
                (**(code **)(*param_5 + 0x40))(param_5,iVar4,local_160);
                iVar4 = iVar4 + 1;
                iVar2 = iVar2 + -1;
              } while (iVar2 != 0);
            }
          }
        }
      }
      else {
        FUN_00416dc0(&local_50,local_res18,iVar2 + 1,(local_16c - iVar2) + -1);
        FUN_00416dc0(&local_58,local_res18,local_16c + 1,(local_168 - local_16c) + -1);
        local_198._0_1_ = 1;
        FUN_00450070(&local_a8,local_58,&DAT_0172b8c4,&DAT_0172b8d4);
        FUN_00414b50(&local_58,local_a8);
        local_198 = (undefined *)CONCAT71(local_198._1_7_,1);
        FUN_00450070(&local_b0,local_58,&DAT_0172b8e8,&DAT_0172b8d4);
        FUN_00414b50(&local_58,local_b0);
        local_198 = &DAT_0172b958;
        FUN_00416cd0(&local_c0,3,L"/clcf_language_file/catalog_file[@name=\"",local_50);
        (**(code **)(**(longlong **)(param_1 + 0x18) + 0xd8))
                  (*(longlong **)(param_1 + 0x18),&local_b8,local_c0);
        FUN_0041b890(&local_38,local_b8,&DAT_0172b95e);
        if (local_38 == (longlong *)0x0) {
          local_16c = 0;
        }
        else {
          local_198 = &DAT_0172b958;
          FUN_00416cd0(&local_d0,3,L"string[@id=\"",local_58);
          (**(code **)(*local_38 + 0xd8))(local_38,&local_c8,local_d0);
          FUN_0041b890(&local_40,local_c8,&DAT_0172b95e);
          if (local_40 == (longlong *)0x0) {
            local_16c = 0;
          }
          else {
            FUN_00414480(&local_60);
            if (local_164 < iVar2) {
              FUN_00416dc0(&local_60,local_res18,local_164,iVar2 - local_164);
              FUN_004168b0(&local_d8,*local_180);
              FUN_00416ad0(&local_d8,local_60);
              FUN_004168e0(local_180,local_d8);
            }
            local_198 = &DAT_0172b958;
            FUN_00416cd0(&local_e8,3,L"lang[@id=\"",local_res20);
            (**(code **)(*local_40 + 0xd8))(local_40,&local_e0,local_e8);
            FUN_0041b890(&local_48,local_e0,&DAT_0172b95e);
            if ((local_48 != (longlong *)0x0) &&
               ((**(code **)(*local_48 + 0xb8))(local_48,&local_f0), local_f0 == 0)) {
              FUN_0041b800(&local_48);
            }
            if (local_48 == (longlong *)0x0) {
              (**(code **)(*local_40 + 0xd8))(local_40,&local_f8,L"native");
              FUN_0041b890(&local_48,local_f8,&DAT_0172b95e);
            }
            (**(code **)(*local_48 + 0xb8))(local_48,&local_100);
            FUN_004168e0(&local_108,local_100);
            FUN_00b0cf80(&local_78,local_108,*(undefined4 *)(param_1 + 0x28));
            FUN_004168b0(&local_110,*local_180);
            (**(code **)(*local_48 + 0xb8))(local_48,&local_118);
            FUN_00416ad0(&local_110,local_118);
            FUN_004168e0(local_180,local_110);
            iVar2 = FUN_00416db0(local_res20,&DAT_0172b860);
            if (iVar2 == 0) {
              FUN_00416ba0(&local_120,local_60,local_78);
              FUN_0172a960(auStack_1b8,&PTR_DAT_0172b9e4,local_120);
              (**(code **)(*local_40 + 0xe8))(local_40,local_30,L"lang");
              if (local_30[0] != (longlong *)0x0) {
                iVar2 = (**(code **)(*local_30[0] + 0x18))();
                iVar4 = 0;
                if (-1 < iVar2 + -1) {
                  do {
                    (**(code **)(*local_30[0] + 0x20))(local_30[0],&local_128,iVar4);
                    FUN_0041b890(&local_48,local_128,&DAT_0172b95e);
                    (**(code **)(*local_48 + 0x100))(local_48,&local_80,&LAB_0172ba10);
                    (**(code **)(*local_48 + 0xb8))(local_48,&local_130);
                    FUN_004168e0(&local_138,local_130);
                    uVar3 = FUN_0172aa50(auStack_1b8,local_80);
                    FUN_00b0cf80(&local_70,local_138,uVar3);
                    FUN_00416ba0(&local_140,local_60,local_70);
                    FUN_0172a960(auStack_1b8,local_80,local_140);
                    cVar1 = (**(code **)(*local_178 + 0x140))(local_178,local_80,&local_84);
                    if (cVar1 != '\0') {
                      (**(code **)(*local_178 + 0x98))(local_178,local_84);
                    }
                    iVar4 = iVar4 + 1;
                    iVar2 = iVar2 + -1;
                  } while (iVar2 != 0);
                }
                iVar2 = (**(code **)(*local_178 + 0x28))(local_178);
                if (0 < iVar2) {
                  iVar2 = (**(code **)(*local_178 + 0x28))();
                  iVar4 = 0;
                  if (-1 < iVar2 + -1) {
                    do {
                      (**(code **)(*local_178 + 0x18))(local_178,&local_148,iVar4);
                      FUN_00416ba0(&local_150,local_60,local_78);
                      FUN_0172a960(auStack_1b8,local_148,local_150);
                      iVar4 = iVar4 + 1;
                      iVar2 = iVar2 + -1;
                    } while (iVar2 != 0);
                  }
                }
              }
            }
            local_164 = local_168 + 1;
          }
        }
      }
    } while (local_16c != 0);
    FUN_00410f20(local_178);
  }
  FUN_00414560(&local_160,5);
  FUN_00414520(&local_138);
  FUN_00414480(&local_130);
  FUN_0041b800(&local_128);
  FUN_00414560(&local_120,3);
  FUN_00414520(&local_108);
  FUN_00414480(&local_100);
  FUN_0041b800(&local_f8);
  FUN_00414560(&local_f0,2);
  FUN_0041b800(&local_e0);
  FUN_00414560(&local_d8,2);
  FUN_0041b800(&local_c8);
  FUN_00414480(&local_c0);
  FUN_0041b800(&local_b8);
  FUN_00414560(&local_b0,5);
  FUN_00414560(&local_80,7);
  FUN_00417840(&local_48,&LAB_00b9fca0,3);
  FUN_0041b800(local_30);
  FUN_00414560(&local_res18,2);
  return local_180;
}


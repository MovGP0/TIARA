/* Ghidra address: 019f35a0 */
/* Ghidra symbol: FUN_019f35a0 */


undefined8 *
FUN_019f35a0(longlong param_1,undefined8 *param_2,short param_3,undefined8 param_4,
            undefined8 ****param_5,longlong *param_6,byte param_7)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined7 uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined8 local_res20;
  undefined1 auStack_3b8 [32];
  undefined8 ***local_398;
  undefined8 ***local_390;
  undefined *local_388;
  wchar_t *local_380;
  undefined8 ***local_378;
  undefined *local_370;
  undefined *local_360;
  undefined8 ***local_358;
  undefined8 local_350;
  undefined *local_348;
  undefined8 ***local_340;
  undefined8 local_338;
  undefined *local_330;
  undefined8 ***local_328;
  undefined8 local_320;
  undefined1 local_318 [256];
  undefined *local_218;
  undefined8 ***local_210;
  undefined8 local_208;
  undefined *local_200;
  undefined8 ***local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined *local_1d8;
  undefined8 ***local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 ***local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined *local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined *local_140;
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
  undefined8 local_e0;
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 *local_b0;
  int local_a4;
  undefined8 local_a0;
  undefined8 ***local_98;
  undefined8 local_90;
  undefined *local_88;
  int *local_80;
  char local_75;
  char local_74;
  char local_73;
  char local_72;
  char local_71;
  undefined8 ***local_70;
  undefined8 local_68;
  undefined8 ***local_60;
  undefined8 ***local_58;
  undefined8 ***local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  
  local_b0 = auStack_3b8;
  local_350 = 0;
  local_358 = (undefined8 ****)0x0;
  local_360 = (undefined *)0x0;
  local_338 = 0;
  local_340 = (undefined8 ****)0x0;
  local_348 = (undefined *)0x0;
  local_320 = 0;
  local_328 = (undefined8 ****)0x0;
  local_330 = (undefined *)0x0;
  local_208 = 0;
  local_210 = (undefined8 ****)0x0;
  local_218 = (undefined *)0x0;
  local_1e0 = 0;
  local_1e8 = 0;
  local_1f8 = (undefined8 ****)0x0;
  local_200 = (undefined *)0x0;
  local_1f0 = 0;
  local_1b8 = 0;
  local_1c0 = 0;
  local_1d0 = (undefined8 ****)0x0;
  local_1d8 = (undefined *)0x0;
  local_1c8 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_190 = 0;
  local_198 = (undefined8 ****)0x0;
  local_188 = 0;
  local_178 = 0;
  local_180 = 0;
  local_170 = 0;
  local_160 = 0;
  local_168 = 0;
  local_148 = 0;
  local_150 = 0;
  local_158 = (undefined *)0x0;
  local_130 = 0;
  local_138 = 0;
  local_140 = (undefined *)0x0;
  local_128 = 0;
  local_120 = 0;
  local_110 = 0;
  local_118 = 0;
  local_108 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_f0 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_d8 = (undefined8 *)0x0;
  local_d0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = (undefined *)0x0;
  local_50 = (undefined8 ****)0x0;
  local_58 = (undefined8 ****)0x0;
  local_60 = (undefined8 ****)0x0;
  local_68 = 0;
  local_70 = (undefined8 ****)0x0;
  local_88 = (undefined *)0x0;
  local_90 = 0;
  local_98 = (undefined8 ****)0x0;
  local_a0 = 0;
  local_res20 = param_4;
  FUN_00414610(param_4);
  FUN_00414610(param_5);
  local_398 = (undefined8 ***)CONCAT44(local_398._4_4_,0xb);
  FUN_019ee820(param_1,param_2,param_3,local_res20);
  if (param_3 == 0x10) {
    FUN_019f0400(param_1,&local_c0,0,0);
    FUN_019f0400(param_1,&local_c8,1,0);
    local_398 = (undefined8 ***)local_c0;
    local_390 = (undefined8 ***)&DAT_019f4fd4;
    local_388 = local_c8;
    FUN_00416cd0(&local_b8,5,*param_2,&DAT_019f4fd4);
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))(*(longlong **)(param_1 + 0x20),local_b8);
    uVar5 = (uint)param_7;
    uVar6 = (uint)param_7;
    local_398 = &local_50;
    local_28 = (double)FUN_019ed670(param_1,uVar5 + 4,0,&local_71);
    local_398 = &local_58;
    local_30 = (double)FUN_019ed670(param_1,uVar6 + 5,0,&local_72);
    local_398 = &local_60;
    local_38 = (double)FUN_019ed670(param_1,uVar5 + 6,0,&local_73);
    local_398 = (undefined8 ***)&local_68;
    local_40 = (double)FUN_019ed670(param_1,uVar5 + 7,0,&local_74);
    FUN_0043ea00(&local_d0,param_5);
    iVar3 = FUN_00416db0(local_d0,&DAT_019f4fe4);
    if ((iVar3 == 0) && (*(char *)(param_1 + 0xc0) != '\0')) {
      FUN_00414b50(&param_5,L"1e-6");
    }
    if (*(char *)(param_1 + 0xc0) == '\x04') {
      local_398 = (undefined8 ***)&DAT_019f4fd4;
      FUN_00416cd0(&local_128,3,&DAT_019f4fd4,param_5);
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
                (*(longlong **)(param_1 + 0x20),local_128);
    }
    else if ((((local_74 == '\0') && (local_40 == 0.0)) && (local_72 == '\0')) &&
            (((local_73 == '\0' && (local_71 == '\0')) && (local_28 == 0.0)))) {
      local_398 = (undefined8 ***)&DAT_019f4fd4;
      FUN_00416cd0(&local_d8,3,&DAT_019f4fd4,param_5);
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))(*(longlong **)(param_1 + 0x20),local_d8)
      ;
      if ((local_30 != 0.0) || (local_38 != 0.0)) {
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
                  (*(longlong **)(param_1 + 0x20),&DAT_019f500c);
      }
      if (local_30 != 0.0) {
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
                  (*(longlong **)(param_1 + 0x20),local_58);
      }
      if (local_38 != 0.0) {
        if (local_30 != 0.0) {
          (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))(*(longlong **)(param_1 + 0x20),0x2c)
          ;
        }
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
                  (*(longlong **)(param_1 + 0x20),local_60);
      }
    }
    else {
      FUN_00414480(&local_98);
      if ((local_72 != '\0') || (local_30 != 0.0)) {
        local_398 = local_58;
        FUN_00416cd0(&local_98,3,local_98,L" TC1=");
      }
      if ((local_73 != '\0') || (local_38 != 0.0)) {
        local_398 = local_60;
        FUN_00416cd0(&local_98,3,local_98,L" TC2=");
      }
      local_398 = (undefined8 ***)local_68;
      FUN_00416cd0(&local_98,3,local_98,L" TCE=");
      if (local_28 != 0.0) {
        iVar3 = FUN_019edff0(param_1,param_7 + 3,0);
        if (iVar3 == 0) {
          local_398 = local_50;
          FUN_00416cd0(&local_98,3,local_98,L" T_REL_GLOBAL=");
        }
        else {
          local_398 = local_50;
          FUN_00416cd0(&local_98,3,local_98,L" T_ABS=");
        }
      }
      local_398 = (undefined8 ***)&local_a4;
      cVar1 = FUN_019f3400(param_1,param_6,&DAT_019f50b0,local_98);
      if (cVar1 == '\0') {
        FUN_0043f750(&local_e8,*(undefined4 *)(param_1 + 0x40));
        FUN_00416ba0(&local_e0,L" R_RES_",local_e8);
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
                  (*(longlong **)(param_1 + 0x20),local_e0);
        local_398 = (undefined8 ***)&DAT_019f4fd4;
        FUN_00416cd0(&local_f0,3,&DAT_019f4fd4,param_5);
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
                  (*(longlong **)(param_1 + 0x20),local_f0);
        FUN_0043f750(&local_100,*(undefined4 *)(param_1 + 0x40));
        local_398 = (undefined8 ***)0x19f5108;
        local_390 = local_98;
        local_388 = &DAT_019f5124;
        FUN_00416cd0(&local_f8,5,L".MODEL R_RES_",local_100);
        (**(code **)(**(longlong **)(param_1 + 0x28) + 200))
                  (*(longlong **)(param_1 + 0x28),local_f8);
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
        FUN_00416ba0(&local_108,L"RES|",local_98);
        (**(code **)(*param_6 + 0x78))(param_6,local_108);
      }
      else {
        FUN_0043f750(&local_118,local_a4 + 1);
        FUN_00416ba0(&local_110,L" R_RES_",local_118);
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
                  (*(longlong **)(param_1 + 0x20),local_110);
        local_398 = (undefined8 ***)&DAT_019f4fd4;
        FUN_00416cd0(&local_120,3,&DAT_019f4fd4,param_5);
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
                  (*(longlong **)(param_1 + 0x20),local_120);
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x20) + 200))(*(longlong **)(param_1 + 0x20),0);
    goto code_r0x019f4eca;
  }
  if ((param_3 != 2) && (param_3 != 0xb)) {
    if ((param_3 == 0x14) || (param_3 == 8)) {
      if (*(char *)(param_1 + 0xc0) == '\x04') {
        FUN_00416910(local_318,param_5,0xff);
        FUN_016a4200(local_318,0);
        FUN_019f0400(param_1,&local_328,0,0);
        FUN_019f0400(param_1,&local_330,1,0);
        local_398 = local_328;
        local_390 = (undefined8 ***)&DAT_019f4fd4;
        local_388 = local_330;
        local_380 = L" DC ";
        local_378 = param_5;
        FUN_00416cd0(&local_320,7,*param_2,&DAT_019f4fd4);
        (**(code **)(**(longlong **)(param_1 + 0x20) + 200))
                  (*(longlong **)(param_1 + 0x20),local_320);
      }
      else {
        FUN_019f0400(param_1,&local_340,0,0);
        FUN_019f0400(param_1,&local_348,1,0);
        local_398 = local_340;
        local_390 = (undefined8 ***)&DAT_019f4fd4;
        local_388 = local_348;
        local_380 = L" ";
        local_378 = param_5;
        FUN_00416cd0(&local_338,7,*param_2,&DAT_019f4fd4);
        (**(code **)(**(longlong **)(param_1 + 0x20) + 200))
                  (*(longlong **)(param_1 + 0x20),local_338);
      }
    }
    else {
      FUN_019f0400(param_1,&local_358,0,0);
      FUN_019f0400(param_1,&local_360,1,0);
      local_398 = local_358;
      local_390 = (undefined8 ***)&DAT_019f4fd4;
      local_388 = local_360;
      local_380 = L" ";
      local_378 = param_5;
      FUN_00416cd0(&local_350,7,*param_2,&DAT_019f4fd4);
      (**(code **)(**(longlong **)(param_1 + 0x20) + 200))(*(longlong **)(param_1 + 0x20),local_350)
      ;
    }
    goto code_r0x019f4eca;
  }
  sVar2 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xf8))(*(longlong **)(param_1 + 0x58));
  if ((sVar2 == 0x25) &&
     (sVar2 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0xf8))(*(longlong **)(param_1 + 0x58)),
     sVar2 == 0x26)) {
    FUN_019f0400(param_1,&local_210,0,0);
    FUN_019f0400(param_1,&local_218,1,0);
    local_398 = local_210;
    local_390 = (undefined8 ***)&DAT_019f4fd4;
    local_388 = local_218;
    local_380 = L" ";
    local_378 = param_5;
    FUN_00416cd0(&local_208,7,*param_2,&DAT_019f4fd4);
    (**(code **)(**(longlong **)(param_1 + 0x20) + 200))(*(longlong **)(param_1 + 0x20),local_208);
    goto code_r0x019f4eca;
  }
  if (param_3 == 2) {
    local_398 = &local_70;
    local_48 = (double)FUN_019edd90(param_1,2,1,&local_75);
  }
  else {
    local_48 = (double)FUN_019ed630(param_1,2,1);
    FUN_019ed1f0(param_1,&local_70,2,1);
  }
  uVar4 = (undefined7)((ulonglong)param_1 >> 8);
  if ((param_3 == 0xb) && (local_48 != 0.0)) {
    if (*(byte *)(param_1 + 0xc0) < 8) {
      bVar7 = ((int)CONCAT71(uVar4,1) << (*(byte *)(param_1 + 0xc0) & 0x1f) & 0x3aU) != 0;
    }
    else {
      bVar7 = false;
    }
    if (!bVar7) goto LAB_019f41be;
    FUN_019f0400(param_1,&local_138,0,0);
    FUN_0043f750(&local_140,*(undefined4 *)(param_1 + 0x50));
    local_398 = (undefined8 ***)local_138;
    local_390 = (undefined8 ***)&DAT_019f4fd4;
    local_388 = local_140;
    FUN_00416cd0(&local_130,5,*param_2,&DAT_019f4fd4);
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))(*(longlong **)(param_1 + 0x20),local_130);
  }
  else {
LAB_019f41be:
    FUN_019f0400(param_1,&local_150,0,0);
    FUN_019f0400(param_1,&local_158,1,0);
    local_398 = (undefined8 ***)local_150;
    local_390 = (undefined8 ***)&DAT_019f4fd4;
    local_388 = local_158;
    FUN_00416cd0(&local_148,5,*param_2,&DAT_019f4fd4);
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))(*(longlong **)(param_1 + 0x20),local_148);
  }
  uVar5 = (uint)param_7;
  uVar6 = (uint)param_7;
  local_398 = &local_50;
  local_28 = (double)FUN_019ed670(param_1,uVar5 + 5,0,&local_71);
  local_398 = &local_58;
  local_30 = (double)FUN_019ed670(param_1,uVar6 + 6,0,&local_72);
  local_398 = &local_60;
  local_38 = (double)FUN_019ed670(param_1,uVar5 + 7,0,&local_73);
  FUN_00416ba0(&local_a0,&DAT_019f4fd4,param_5);
  if (*(char *)(param_1 + 0xc0) == '\x04') {
    FUN_00416ba0(&local_1b0,&DAT_019f4fd4,local_a0);
    (**(code **)(**(longlong **)(param_1 + 0x20) + 200))(*(longlong **)(param_1 + 0x20),local_1b0);
  }
  else {
    if (((param_3 == 2) && (local_75 == '\0')) || ((param_3 == 0xb && (local_48 != 0.0)))) {
      if (*(byte *)(param_1 + 0xc0) < 8) {
        bVar7 = ((int)CONCAT71(uVar4,1) << (*(byte *)(param_1 + 0xc0) & 0x1f) & 5U) != 0;
      }
      else {
        bVar7 = false;
      }
      if (bVar7) {
        if (param_3 == 2) {
          local_398 = local_70;
          FUN_00416cd0(&local_a0,3,local_a0,L" RPAR=");
        }
        else {
          local_398 = local_70;
          FUN_00416cd0(&local_a0,3,local_a0,L" RSER=");
        }
      }
    }
    if (param_3 == 2) {
LAB_019f441a:
      if (((((local_71 != '\0') || (local_28 != 0.0)) || (local_72 != '\0')) ||
          ((local_30 != 0.0 || (local_73 != '\0')))) || (local_38 != 0.0)) {
        FUN_00414480(&local_98);
        if ((local_72 != '\0') || (local_30 != 0.0)) {
          local_398 = local_58;
          FUN_00416cd0(&local_98,3,local_98,L" TC1=");
        }
        if ((local_73 != '\0') || (local_38 != 0.0)) {
          local_398 = local_60;
          FUN_00416cd0(&local_98,3,local_98,L" TC2=");
        }
        if ((local_71 != '\0') || (local_28 != 0.0)) {
          iVar3 = FUN_019edff0(param_1,param_7 + 4,0);
          if (iVar3 == 0) {
            local_398 = local_50;
            FUN_00416cd0(&local_98,3,local_98,L" T_REL_GLOBAL=");
          }
          else {
            local_398 = local_50;
            FUN_00416cd0(&local_98,3,local_98,L" T_ABS=");
          }
        }
        if (param_3 == 2) {
          FUN_00414b50(&local_88,&DAT_019f5184);
          local_398 = (undefined8 ***)&DAT_019f51ac;
          FUN_00416cd0(&local_90,3,&PTR_u__019f5198,local_88);
          local_80 = (int *)(param_1 + 0x44);
        }
        else {
          FUN_00414b50(&local_88,&DAT_019f51bc);
          local_398 = (undefined8 ***)&DAT_019f51ac;
          FUN_00416cd0(&local_90,3,&PTR_DAT_019f51d0,local_88);
          local_80 = (int *)(param_1 + 0x48);
        }
        local_398 = (undefined8 ***)&local_a4;
        cVar1 = FUN_019f3400(param_1,param_6,local_88,local_98);
        if (cVar1 == '\0') {
          FUN_0043f750(&local_168,*local_80);
          local_398 = (undefined8 ***)local_168;
          FUN_00416cd0(&local_160,3,&DAT_019f4fd4,local_90);
          (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
                    (*(longlong **)(param_1 + 0x20),local_160);
          FUN_00416ba0(&local_170,&DAT_019f4fd4,local_a0);
          (**(code **)(**(longlong **)(param_1 + 0x20) + 200))
                    (*(longlong **)(param_1 + 0x20),local_170);
          FUN_0043f750(&local_180,*local_80);
          local_398 = (undefined8 ***)local_180;
          local_390 = (undefined8 ***)&DAT_019f4fd4;
          local_388 = local_88;
          local_380 = L" (";
          local_378 = local_98;
          local_370 = &DAT_019f5124;
          FUN_00416cd0(&local_178,8,L".MODEL ",local_90);
          (**(code **)(**(longlong **)(param_1 + 0x28) + 200))
                    (*(longlong **)(param_1 + 0x28),local_178);
          *local_80 = *local_80 + 1;
          local_398 = local_98;
          FUN_00416cd0(&local_188,3,local_88,&DAT_019f5214);
          (**(code **)(*param_6 + 0x78))(param_6,local_188);
        }
        else {
          FUN_0043f750(&local_198,local_a4 + 1);
          local_398 = local_198;
          FUN_00416cd0(&local_190,3,&DAT_019f4fd4,local_90);
          (**(code **)(**(longlong **)(param_1 + 0x20) + 0x58))
                    (*(longlong **)(param_1 + 0x20),local_190);
          FUN_00416ba0(&local_1a0,&DAT_019f4fd4,local_a0);
          (**(code **)(**(longlong **)(param_1 + 0x20) + 200))
                    (*(longlong **)(param_1 + 0x20),local_1a0);
        }
        goto LAB_019f490e;
      }
    }
    else {
      if (*(byte *)(param_1 + 0xc0) < 8) {
        bVar7 = ((int)CONCAT71(uVar4,1) << (*(byte *)(param_1 + 0xc0) & 0x1f) & 3U) != 0;
      }
      else {
        bVar7 = false;
      }
      if (bVar7) goto LAB_019f441a;
    }
    FUN_00416ba0(&local_1a8,&DAT_019f4fd4,local_a0);
    (**(code **)(**(longlong **)(param_1 + 0x20) + 200))(*(longlong **)(param_1 + 0x20),local_1a8);
  }
LAB_019f490e:
  if (((param_3 == 2) && (local_75 == '\0')) || ((param_3 == 0xb && (local_48 != 0.0)))) {
    if (*(byte *)(param_1 + 0xc0) < 8) {
      bVar7 = ((int)CONCAT71(uVar4,1) << (*(byte *)(param_1 + 0xc0) & 0x1f) & 0x3aU) != 0;
    }
    else {
      bVar7 = false;
    }
    if (bVar7) {
      if (param_3 == 0xb) {
        FUN_00416ba0(&local_1c8,local_res20,L"_RSER");
        local_398 = (undefined8 ***)CONCAT44(local_398._4_4_,0xb);
        FUN_019ee820(param_1,&local_1c0,0x10,local_1c8);
        FUN_0043f750(&local_1d0,*(undefined4 *)(param_1 + 0x50));
        FUN_019f0400(param_1,&local_1d8,1,0);
        local_398 = local_1d0;
        local_390 = (undefined8 ***)&DAT_019f4fd4;
        local_388 = local_1d8;
        local_380 = L" ";
        local_378 = local_70;
        FUN_00416cd0(&local_1b8,7,local_1c0,&DAT_019f4fd4);
        (**(code **)(**(longlong **)(param_1 + 0x20) + 200))
                  (*(longlong **)(param_1 + 0x20),local_1b8);
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
      }
      else {
        FUN_00416ba0(&local_1f0,local_res20,L"_RPAR");
        local_398 = (undefined8 ***)CONCAT44(local_398._4_4_,0xb);
        FUN_019ee820(param_1,&local_1e8,0x10,local_1f0);
        FUN_019f0400(param_1,&local_1f8,0,0);
        FUN_019f0400(param_1,&local_200,1,0);
        local_398 = local_1f8;
        local_390 = (undefined8 ***)&DAT_019f4fd4;
        local_388 = local_200;
        local_380 = L" ";
        local_378 = local_70;
        FUN_00416cd0(&local_1e0,7,local_1e8,&DAT_019f4fd4);
        (**(code **)(**(longlong **)(param_1 + 0x20) + 200))
                  (*(longlong **)(param_1 + 0x20),local_1e0);
      }
    }
  }
code_r0x019f4eca:
  FUN_00414560(&local_360,9);
  FUN_00414560(&local_218,0x2d);
  FUN_00414560(&local_a0,4);
  FUN_00414560(&local_70,5);
  FUN_00414560(&local_res20,2);
  return param_2;
}


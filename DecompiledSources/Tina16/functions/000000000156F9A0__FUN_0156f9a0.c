/* Ghidra address: 0156f9a0 */
/* Ghidra symbol: FUN_0156f9a0 */


undefined8
FUN_0156f9a0(longlong param_1,undefined8 param_2,longlong param_3,int param_4,char param_5)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  double dVar6;
  undefined2 local_res20;
  undefined1 auStack_338 [32];
  double *local_318;
  double *local_310;
  double *local_308;
  undefined *local_300;
  undefined *local_2f8;
  undefined8 local_2f0;
  int local_2dc;
  double *local_2d8;
  undefined1 local_2d0 [256];
  undefined8 local_1d0;
  double *local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined1 *local_1b0;
  undefined8 *local_1a0;
  undefined8 *local_198;
  int local_190;
  longlong local_188;
  double local_180 [4];
  double local_160 [2];
  double local_150;
  double local_148;
  undefined1 local_13b;
  undefined1 local_13a;
  undefined1 local_139;
  double *local_138 [3];
  double local_120;
  undefined1 local_118 [8];
  undefined8 local_110;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_e0;
  undefined8 local_b8;
  undefined8 local_b0;
  int local_98;
  int local_94;
  uint local_90;
  uint local_8c;
  int local_84;
  int local_80;
  char local_79;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  double *local_40;
  undefined8 local_38 [3];
  char local_19;
  
  local_1b0 = auStack_338;
  local_2d8 = (double *)0x0;
  local_1d0 = 0;
  local_1c8 = (double *)0x0;
  local_1c0 = 0;
  local_1b8 = 0;
  local_38[0] = 0;
  local_40 = (double *)0x0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = (undefined *)0x0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_res20 = (undefined2)param_4;
  cVar1 = FUN_01d3d530(local_res20);
  if (((cVar1 == '\0') && (param_4 != 0x889)) && (param_4 != 0x45d)) {
    cVar1 = FUN_01d3d5c0(local_res20);
    if (cVar1 == '\0') {
      if ((param_4 == 0xa5) || (param_4 == 0xad)) {
        if (param_4 == 0xa5) {
          FUN_00414b50(&local_40,&DAT_01570dec);
        }
        else {
          FUN_00414b50(&local_40,&DAT_01570dfc);
        }
        FUN_00414b50(&local_58,L"num_of_lines");
        FUN_00414b50(local_38,L"  GENERIC MAP (");
        local_318 = (double *)&DAT_01570ce0;
        local_310 = local_40;
        FUN_00416cd0(local_38,4,local_38[0],local_58);
        FUN_00416ad0(local_38,&DAT_01570d80);
      }
      else {
        cVar1 = FUN_01d40050(param_4);
        if (cVar1 == '\0') {
          cVar1 = FUN_01d3d590(local_res20);
          if (cVar1 != '\0') {
            FUN_01d3eed0(*(undefined8 *)(param_1 + 0x40),local_118);
          }
          FUN_00414b50(&local_58,L"trise_clk_q");
          FUN_00414b50(&local_60,L"tfall_clk_q");
          if (param_4 == 0x889) {
            FUN_00414b50(&local_58,L"trise_i1_o");
            FUN_00414b50(&local_60,L"tfall_i1_o");
          }
          else {
            cVar1 = FUN_015f22d0(param_4);
            if (cVar1 != '\0') {
              FUN_00414b50(&local_58,&DAT_01571044);
              FUN_00414b50(&local_60,&DAT_01571058);
            }
          }
          cVar1 = FUN_015f22d0(param_4);
          if (cVar1 == '\0') {
            cVar1 = FUN_01d3d590(local_res20);
            if (cVar1 == '\0') {
              FUN_015f0a10(&local_40,*(undefined8 *)(param_1 + 0x30),2);
              FUN_00414b50(&local_48,local_40);
            }
            else {
              uVar5 = FUN_0156f8c0(auStack_338,local_110);
              FUN_015f0a10(&local_40,uVar5,2);
              uVar5 = FUN_0156f8c0(auStack_338,local_f8);
              FUN_015f0a10(&local_48,uVar5,2);
            }
            FUN_00414b50(local_38,L"  GENERIC MAP (");
            if (param_5 == '\0') {
              local_318 = (double *)&DAT_01570ce0;
              local_310 = local_40;
              local_308 = (double *)&DAT_01570cf4;
              local_300 = local_60;
              local_2f8 = &DAT_01570ce0;
              local_2f0 = local_48;
              FUN_00416cd0(local_38,8,local_38[0],local_58);
            }
            cVar1 = FUN_01d3d590(local_res20);
            if ((cVar1 == '\0') || (cVar1 = FUN_015f2550(param_4), cVar1 == '\0')) {
              local_79 = '\0';
            }
            else {
              local_79 = '\x01';
            }
            if (local_79 != '\0') {
              if (param_5 == '\0') {
                FUN_00416ad0(local_38,&DAT_01570cf4);
              }
              FUN_01d43440(&local_2d8,*(undefined4 *)(param_1 + 0xf0));
              local_318 = (double *)&DAT_01570ce0;
              local_310 = local_2d8;
              FUN_00416cd0(local_38,4,local_38[0],L"latching");
            }
            FUN_00416ad0(local_38,&DAT_01570d80);
            if (*(char *)(param_3 + 0x94e) != '\0') {
              FUN_00414480(local_38);
            }
          }
          else {
            FUN_015f0a10(&local_40,*(undefined8 *)(param_1 + 0x30),2);
            FUN_015f0a10(&local_48,*(undefined8 *)(param_1 + 0x38),2);
            FUN_00414b50(local_38,L"  GENERIC MAP (");
            local_318 = (double *)&DAT_01570ce0;
            local_310 = local_40;
            local_308 = (double *)&DAT_01570cf4;
            local_300 = local_60;
            local_2f8 = &DAT_01570ce0;
            local_2f0 = local_48;
            FUN_00416cd0(local_38,8,local_38[0],local_58);
            FUN_00416ad0(local_38,&DAT_01570d80);
          }
        }
        else {
          FUN_00414b50(local_38,L"  GENERIC MAP (");
          (**(code **)(**(longlong **)(param_1 + 0x40) + 0x2d0))
                    (*(longlong **)(param_1 + 0x40),3,local_138);
          local_8c = (uint)*(byte *)local_138[0];
          cVar1 = FUN_01d40080(param_4);
          if (cVar1 == '\0') {
            local_94 = 0xb;
          }
          else {
            local_94 = 0xc;
          }
          if (param_5 == '\0') {
            local_84 = 0;
            FUN_0040d200(local_180 + 6,0x10,0);
            FUN_0040d200(local_180 + 4,0x10,0);
            FUN_0040d200(local_180 + 2,0x10,0);
            FUN_0040d200(local_180,0x10,0);
            iVar4 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x10);
            local_80 = 0;
            if (-1 < iVar4 + -1) {
              do {
                local_188 = FUN_01571ee0(*(undefined8 *)(param_1 + 0x28),local_80);
                if (*(int *)(local_188 + 0x54) == 2) {
                  local_98 = local_80;
                  if (1 < local_84) {
                    FUN_015fcf20(L"create_generic_map_str",0,0,0);
                  }
                  lVar3 = (longlong)local_84;
                  local_318 = local_180 + lVar3 + 4;
                  local_310 = local_180 + lVar3 + 2;
                  local_308 = local_180 + lVar3;
                  FUN_01569af0(param_3,param_1);
                  local_84 = local_84 + 1;
                }
                local_80 = local_80 + 1;
                iVar4 = iVar4 + -1;
              } while (iVar4 != 0);
            }
            if (local_8c == 0) {
              local_90 = *(int *)(PTR_DAT_020030c0 + 0x2c) + 1;
            }
            else {
              local_90 = local_8c;
            }
            local_8c = local_90;
            local_90 = local_90 + 2;
            (**(code **)(**(longlong **)(param_1 + 0x40) + 0x288))
                      (*(longlong **)(param_1 + 0x40),&local_1c0);
            local_318 = (double *)&DAT_01570ce0;
            local_310 = (double *)&DAT_01570e88;
            local_308 = (double *)local_1c0;
            local_300 = &DAT_01570e88;
            local_2f8 = &DAT_01570cf4;
            FUN_00416cd0(local_38,7,local_38[0],L"name");
            FUN_01569bc0(param_3,&local_1c8);
            local_318 = (double *)&DAT_01570ce0;
            local_310 = (double *)&DAT_01570ebc;
            local_308 = local_1c8;
            local_300 = &DAT_01570ebc;
            local_2f8 = &DAT_01570cf4;
            FUN_00416cd0(local_38,7,local_38[0],L"init_state");
            local_80 = 0;
            if (-1 < local_94 + -1) {
              local_198 = (undefined8 *)PTR_PTR_020048f8;
              local_1a0 = (undefined8 *)PTR_PTR_020055f8;
              iVar4 = local_94;
              do {
                cVar1 = FUN_01d40080(param_4);
                if (cVar1 == '\0') {
                  FUN_00414b50(&local_68,*local_1a0);
                }
                else {
                  FUN_00414b50(&local_68,*local_198);
                }
                local_318 = (double *)&local_13a;
                local_310 = (double *)&local_13b;
                local_138[0] = (double *)
                               FUN_01cfde70(*(undefined8 *)(param_1 + 0x40),1,local_90,&local_139);
                local_120 = *local_138[0];
                iVar2 = FUN_00416db0(local_68,L"TPCLKQLH");
                if ((((iVar2 == 0) || (iVar2 = FUN_00416db0(local_68,L"TPPCQLH"), iVar2 == 0)) ||
                    (iVar2 = FUN_00416db0(local_68,L"TPDQLH"), iVar2 == 0)) ||
                   (iVar2 = FUN_00416db0(local_68,L"TPGQLH"), iVar2 == 0)) {
                  local_120 = (local_120 - local_150) + local_180[2];
                }
                else {
                  iVar2 = FUN_00416db0(local_68,L"TPCLKQHL");
                  if (((iVar2 == 0) || (iVar2 = FUN_00416db0(local_68,L"TPPCQHL"), iVar2 == 0)) ||
                     ((iVar2 = FUN_00416db0(local_68,L"TPDQHL"), iVar2 == 0 ||
                      (iVar2 = FUN_00416db0(local_68,L"TPGQHL"), iVar2 == 0)))) {
                    local_120 = (local_120 - local_160[0]) + local_180[0];
                  }
                }
                if (local_120 < 0.0) {
                  local_120 = 0.0;
                }
                FUN_015f0a10(&local_40,local_120,2);
                local_318 = (double *)&DAT_01570ce0;
                local_310 = local_40;
                FUN_00416cd0(local_38,4,local_38[0],local_68);
                if (local_80 < local_94 + -1) {
                  FUN_00416ad0(local_38,&DAT_01570cf4);
                }
                local_90 = local_90 + 3;
                local_80 = local_80 + 1;
                local_1a0 = local_1a0 + 1;
                local_198 = local_198 + 1;
                iVar4 = iVar4 + -1;
              } while (iVar4 != 0);
            }
            FUN_00416ad0(local_38,&DAT_01570cf4);
            local_94 = 8;
            FUN_0156f810(&local_78,local_8c);
            local_2dc = local_94 + -1;
            local_80 = 0;
            if (-1 < local_2dc) {
              local_2dc = local_94;
              local_1a0 = (undefined8 *)PTR_PTR_02005108;
              do {
                FUN_00414b50(&local_68,*local_1a0);
                local_19 = '\0';
                local_190 = 0;
                if (local_68 != 0) {
                  local_190 = *(int *)(local_68 + -4);
                }
                FUN_00416dc0(&local_1d0,local_68,1,local_190 + -1);
                FUN_00416ba0(&local_70,local_1d0,local_78);
                FUN_00416910(local_2d0,local_70,0xff);
                dVar6 = (double)FUN_01602290(*(undefined8 *)(param_1 + 0x40),local_2d0,0);
                if (local_19 == '\0') {
                  local_120 = (dVar6 - local_148) + local_180[3];
                }
                else {
                  local_120 = 0.0;
                }
                if (local_120 < 0.0) {
                  local_120 = 0.0;
                }
                FUN_015f0a10(&local_40,local_120,2);
                local_318 = (double *)&DAT_01570ce0;
                local_310 = local_40;
                FUN_00416cd0(local_38,4,local_38[0],local_68);
                if (local_80 < local_94 + -1) {
                  FUN_00416ad0(local_38,&DAT_01570cf4);
                }
                local_80 = local_80 + 1;
                local_1a0 = local_1a0 + 1;
                local_2dc = local_2dc + -1;
              } while (local_2dc != 0);
            }
          }
          FUN_00416ad0(local_38,&DAT_01570d80);
        }
      }
    }
    else {
      FUN_015f8b00(&local_1b8,*(undefined8 *)(param_1 + 0x40));
      local_318 = (double *)0x1570db4;
      FUN_00416cd0(&local_40,3,L"\"ram_file_",local_1b8);
      FUN_00414b50(&local_58,L"file_name");
      FUN_00414b50(local_38,L"  GENERIC MAP (");
      local_318 = (double *)&DAT_01570ce0;
      local_310 = local_40;
      FUN_00416cd0(local_38,4,local_38[0],local_58);
      FUN_00416ad0(local_38,&DAT_01570d80);
    }
    FUN_00414ad0(param_2,local_38[0]);
  }
  else {
    FUN_01d3eed0(*(undefined8 *)(param_1 + 0x40),local_118);
    FUN_00414b50(local_38,L"  GENERIC MAP (");
    if (param_4 == 0x889) {
      FUN_00414b50(&local_50,L"tPLH");
      uVar5 = FUN_0156f8c0(auStack_338,local_110);
      FUN_015f0a10(&local_40,uVar5,2);
      local_318 = (double *)&DAT_01570ce0;
      local_310 = local_40;
      local_308 = (double *)&DAT_01570cf4;
      FUN_00416cd0(local_38,5,local_38[0],local_50);
      FUN_00414b50(&local_50,L"tPHL");
      uVar5 = FUN_0156f8c0(auStack_338,local_f8);
      FUN_015f0a10(&local_40,uVar5,2);
      local_318 = (double *)&DAT_01570ce0;
      local_310 = local_40;
      local_308 = (double *)&DAT_01570cf4;
      FUN_00416cd0(local_38,5,local_38[0],local_50);
      FUN_00414b50(&local_50,L"tPZL");
      uVar5 = FUN_0156f8c0(auStack_338,local_b8);
      FUN_015f0a10(&local_40,uVar5,2);
      local_318 = (double *)&DAT_01570ce0;
      local_310 = local_40;
      local_308 = (double *)&DAT_01570cf4;
      FUN_00416cd0(local_38,5,local_38[0],local_50);
      FUN_00414b50(&local_50,L"tPZH");
      uVar5 = FUN_0156f8c0(auStack_338,local_b0);
      FUN_015f0a10(&local_40,uVar5,2);
      local_318 = (double *)&DAT_01570ce0;
      local_310 = local_40;
      local_308 = (double *)&DAT_01570cf4;
      FUN_00416cd0(local_38,5,local_38[0],local_50);
      FUN_00414b50(&local_50,L"tPLZ");
      uVar5 = FUN_0156f8c0(auStack_338,local_100);
      FUN_015f0a10(&local_40,uVar5,2);
      local_318 = (double *)&DAT_01570ce0;
      local_310 = local_40;
      local_308 = (double *)&DAT_01570cf4;
      FUN_00416cd0(local_38,5,local_38[0],local_50);
      FUN_00414b50(&local_50,L"tPHZ");
      uVar5 = FUN_0156f8c0(auStack_338,local_e0);
      FUN_015f0a10(&local_40,uVar5,2);
      local_318 = (double *)&DAT_01570ce0;
      local_310 = local_40;
      FUN_00416cd0(local_38,4,local_38[0],local_50);
    }
    else {
      FUN_00414b50(&local_50,L"tPLH");
      uVar5 = FUN_0156f8c0(auStack_338,local_110);
      FUN_015f0a10(&local_40,uVar5,2);
      local_318 = (double *)&DAT_01570ce0;
      local_310 = local_40;
      local_308 = (double *)&DAT_01570cf4;
      FUN_00416cd0(local_38,5,local_38[0],local_50);
      FUN_00414b50(&local_50,L"tPHL");
      uVar5 = FUN_0156f8c0(auStack_338,local_f8);
      FUN_015f0a10(&local_40,uVar5,2);
      local_318 = (double *)&DAT_01570ce0;
      local_310 = local_40;
      FUN_00416cd0(local_38,4,local_38[0],local_50);
    }
    FUN_00416ad0(local_38,&DAT_01570d80);
    if (param_5 == '\0') {
      FUN_00414ad0(param_2,local_38[0]);
    }
    else {
      FUN_00414480(param_2);
    }
  }
  FUN_00414480(&local_2d8);
  FUN_00414560(&local_1d0,4);
  FUN_00414560(&local_78,9);
  return param_2;
}


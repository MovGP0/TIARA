/* Ghidra address: 00ee61d0 */
/* Ghidra symbol: FUN_00ee61d0 */


longlong * FUN_00ee61d0(undefined8 param_1,int *param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 local_res8;
  int *local_res10;
  undefined8 *local_res18;
  undefined1 auStack_2b8 [32];
  ulonglong local_298;
  ulonglong local_290;
  undefined8 local_288;
  undefined1 local_280;
  undefined1 local_278;
  undefined1 local_270;
  undefined8 local_260;
  undefined1 local_258 [256];
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110 [2];
  undefined8 local_108;
  undefined8 local_100;
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
  undefined1 *local_a0;
  longlong local_90;
  undefined8 local_88;
  longlong *local_80;
  longlong local_78;
  byte local_69;
  undefined4 local_68;
  undefined4 local_64;
  uint local_60;
  undefined2 local_5a;
  longlong local_58;
  double local_50;
  undefined8 local_48;
  longlong *local_40;
  longlong local_38;
  longlong *local_28;
  longlong local_20;
  
  local_a0 = auStack_2b8;
  local_260 = 0;
  local_158 = 0;
  local_148 = 0;
  local_150 = 0;
  local_138 = 0;
  local_140 = 0;
  local_128 = 0;
  local_130 = 0;
  local_118 = 0;
  local_120 = 0;
  local_100 = 0;
  local_108 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_a8 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414630(param_1);
  *PTR_DAT_02002ce0 = 0;
  local_20 = FUN_016b97f0(&DAT_016b45f0,1,1);
  lVar1 = *(longlong *)(local_20 + 0x10);
  *(undefined1 *)(lVar1 + 0x231) = 0;
  FUN_016a36d0(lVar1,0);
  local_28 = (longlong *)FUN_0198b200(0,&PTR_FUN_01984d18,0,0);
  *local_res18 = 0;
  FUN_016cff60(local_20,1,0,0);
  FUN_00416880(&local_a8,local_res8);
  FUN_016bb4f0(local_20,local_a8,0);
  local_298 = local_298 & 0xffffffffffffff00;
  local_290 = 0;
  local_288 = 0;
  local_280 = 0;
  local_278 = 1;
  local_270 = 0;
  FUN_00ee2730(*(undefined8 *)(local_20 + 8),0,0,0);
  if (*(int *)(*(longlong *)(local_20 + 0x9c8) + 0x10) < 1) {
    FUN_0044d440();
    goto code_r0x00ee6b04;
  }
  local_38 = FUN_01d347d0(*(longlong *)(local_20 + 0x9c8),0);
  FUN_004169a0(&local_b8,*(undefined8 *)(local_38 + 0x18));
  FUN_0043e130(&local_b0,local_b8);
  iVar4 = FUN_00416db0(local_b0,&DAT_00ee6c58);
  if (iVar4 == 0) {
    local_40 = (longlong *)FUN_00ee6090(auStack_2b8,0x17,&DAT_00ee6c68);
  }
  else {
    FUN_004169a0(&local_c8,*(undefined8 *)(local_38 + 0x18));
    FUN_0043e130(&local_c0,local_c8);
    iVar4 = FUN_00416db0(local_c0,&DAT_00ee6c7c);
    if (iVar4 != 0) {
      FUN_004169a0(&local_d8,*(undefined8 *)(local_38 + 0x18));
      FUN_0043e130(&local_d0,local_d8);
      iVar4 = FUN_00416db0(local_d0,&DAT_00ee6c90);
      if (iVar4 != 0) {
        FUN_004169a0(&local_f8,*(undefined8 *)(local_38 + 0x18));
        FUN_0043e130(&local_f0,local_f8);
        iVar4 = FUN_00416db0(local_f0,L"NMOS");
        if (iVar4 != 0) {
          FUN_004169a0(&local_108,*(undefined8 *)(local_38 + 0x18));
          FUN_0043e130(&local_100,local_108);
          iVar4 = FUN_00416db0(local_100,L"PMOS");
          if (iVar4 != 0) {
            FUN_004169a0(&local_130,*(undefined8 *)(local_38 + 0x18));
            FUN_0043e130(&local_128,local_130);
            iVar4 = FUN_00416db0(local_128,&DAT_00ee6cf0);
            if (iVar4 != 0) {
              FUN_004169a0(&local_140,*(undefined8 *)(local_38 + 0x18));
              FUN_0043e130(&local_138,local_140);
              iVar4 = FUN_00416db0(local_138,&LAB_00ee6d04);
              if (iVar4 != 0) {
                FUN_0044d440();
                goto LAB_00ee681c;
              }
            }
            FUN_004169a0(&local_150,*(undefined8 *)(local_38 + 0x18));
            FUN_0043e130(&local_148,local_150);
            iVar4 = FUN_00416db0(local_148,&DAT_00ee6cf0);
            if (iVar4 == 0) {
              local_40 = (longlong *)FUN_00ee6090(auStack_2b8,0x5d,&DAT_00ee6ca4);
            }
            else {
              local_40 = (longlong *)FUN_00ee6090(auStack_2b8,0x5e,&DAT_00ee6ca4);
            }
            goto LAB_00ee681c;
          }
        }
        local_50 = *(double *)PTR_DAT_02003860;
        local_110[0] = 0x4f545603;
        cVar2 = FUN_014db910(local_110,*(undefined8 *)(local_38 + 0x20),&local_58);
        if ((cVar2 != '\0') ||
           (cVar2 = FUN_014db910(&DAT_00ee6cde,*(undefined8 *)(local_38 + 0x20),&local_58),
           cVar2 != '\0')) {
          local_50 = *(double *)(local_58 + 0x28);
        }
        FUN_004169a0(&local_120,*(undefined8 *)(local_38 + 0x18));
        FUN_0043e130(&local_118,local_120);
        iVar4 = FUN_00416db0(local_118,L"NMOS");
        if (iVar4 == 0) {
          if (local_50 < 0.0) {
            local_5a = 0x5b;
          }
          else {
            local_5a = 0x59;
          }
        }
        else if (0.0 <= local_50) {
          local_5a = 0x5c;
        }
        else {
          local_5a = 0x5a;
        }
        local_40 = (longlong *)FUN_00ee6090(auStack_2b8,local_5a,&DAT_00ee6ca4);
        goto LAB_00ee681c;
      }
    }
    FUN_004169a0(&local_e8,*(undefined8 *)(local_38 + 0x18));
    FUN_0043e130(&local_e0,local_e8);
    iVar4 = FUN_00416db0(local_e0,&DAT_00ee6c7c);
    if (iVar4 == 0) {
      local_40 = (longlong *)FUN_00ee6090(auStack_2b8,0x57,&DAT_00ee6ca4);
    }
    else {
      local_40 = (longlong *)FUN_00ee6090(auStack_2b8,0x58,&DAT_00ee6ca4);
    }
  }
LAB_00ee681c:
  uVar5 = FUN_01d06e20(local_40);
  *local_res18 = uVar5;
  FUN_016cbaf0(*(undefined8 *)(local_38 + 8),local_40,local_20,0);
  (**(code **)(*local_40 + 0x2d0))(local_40,0,&local_78);
  local_298 = *(ulonglong *)PTR_DAT_02001f18;
  local_290 = local_290 & 0xffffffffffffff00;
  local_88 = FUN_0172bd70(&PTR_FUN_01729478,1,local_40,0);
  local_80 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_0172c500(local_88,local_80);
  FUN_00410f20(local_88);
  local_90 = local_78;
  FUN_00415020(local_78,*(undefined8 *)(local_38 + 8),0x14);
  (**(code **)(*local_80 + 0x18))(local_80,&local_158,**(undefined1 **)(local_90 + 0x26));
  FUN_00416910(local_258,local_158,0xff);
  FUN_00415020(local_90 + 0x15,local_258,0x10);
  *(undefined1 *)(local_90 + 0x2f) = 1;
  plVar6 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  *(longlong **)(local_90 + 0x30) = plVar6;
  (**(code **)(*plVar6 + 0x10))(plVar6,*(undefined8 *)(*(longlong *)(local_20 + 8) + 0x20));
  FUN_00410f20(local_80);
  (**(code **)(*local_28 + 0x20))(local_28,local_40);
  iVar4 = (**(code **)(*local_40 + 0x1c8))(local_40);
  *local_res10 = iVar4;
  iVar4 = *local_res10;
  local_60 = 0;
  if (-1 < iVar4 + -1) {
    do {
      (**(code **)(*local_40 + 0x1f0))(local_40,local_60,&local_64,&local_68);
      if ((local_60 & 1) == 0) {
        local_69 = 0;
      }
      else {
        local_69 = 2;
      }
      sVar3 = (**(code **)(*local_40 + 0xf8))(local_40);
      if (sVar3 == 0x17) {
        local_69 = (byte)((ulonglong)(local_69 + 2) % 4);
      }
      (**(code **)(*local_40 + 0x298))(local_40,&local_260,local_60);
      local_298 = CONCAT71(local_298._1_7_,local_69);
      local_48 = FUN_00ee6140(auStack_2b8,local_260,local_64,local_68);
      (**(code **)(*local_28 + 0x20))(local_28,local_48);
      local_60 = local_60 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
code_r0x00ee6b04:
  FUN_00410f20(local_20);
  FUN_00414480(&local_260);
  FUN_00414560(&local_158,9);
  FUN_00414560(&local_108,0xd);
  FUN_004144d0(&local_res8);
  return local_28;
}


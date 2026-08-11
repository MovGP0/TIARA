/* Ghidra address: 01c38d00 */
/* Ghidra symbol: FUN_01c38d00 */


void FUN_01c38d00(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined1 uVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined1 auStack_2e8 [32];
  undefined4 local_2c8;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined1 local_298 [20];
  byte local_284;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  ulonglong local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 *local_1c0;
  undefined8 *local_1b8;
  undefined8 local_1b0;
  undefined8 *local_1a8;
  undefined8 *local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  wchar_t *local_160;
  undefined8 local_158;
  undefined1 *local_150;
  int local_140;
  bool local_139;
  wchar_t *local_138;
  undefined1 local_129;
  undefined8 *local_128;
  longlong *local_118;
  longlong *local_110;
  longlong local_100;
  undefined8 local_f8;
  char local_ea;
  char local_e9;
  longlong local_e8;
  undefined1 local_e0 [64];
  undefined1 local_a0 [8];
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  uint local_50;
  int local_4c;
  
  local_150 = auStack_2e8;
  local_2b8 = 0;
  local_268 = 0;
  local_2a8 = 0;
  local_2b0 = 0;
  local_2a0 = 0;
  local_260 = 0;
  local_250 = 0;
  local_258 = 0;
  local_240 = 0;
  local_248 = 0;
  local_238 = 0;
  local_230 = 0;
  local_228 = 0;
  local_220 = 0;
  local_218 = 0;
  local_210 = 0;
  local_208 = 0;
  local_1f0 = 0;
  local_1f8 = 0;
  local_1e8 = 0;
  local_1e0 = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1c0 = (undefined8 *)0x0;
  local_1b8 = (undefined8 *)0x0;
  local_1b0 = 0;
  local_1a8 = (undefined8 *)0x0;
  local_1a0 = (undefined8 *)0x0;
  local_198 = 0;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 0;
  local_160 = (wchar_t *)0x0;
  local_158 = 0;
  local_f8 = 0;
  local_100 = 0;
  FUN_00417580(local_a0,&DAT_01c210d0);
  FUN_00417580(local_e0,&DAT_01c21008);
  plVar1 = *(longlong **)(param_1 + 0x6d8);
  if ((int)plVar1[0x9e] == 6) goto LAB_01c3b2d6;
  (**(code **)(*plVar1 + 0x128))(plVar1,0);
  lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x6b0) + 0x530);
  if (lVar10 == *(longlong *)(param_1 + 0x6c0)) {
    FUN_01c3f800(param_1,L"Loading...",100,0);
    cVar2 = FUN_01c386b0(param_1,*(undefined8 *)(param_1 + 0x6c0));
    if (cVar2 != '\0') {
      FUN_01c38530(param_1,*(undefined8 *)(param_1 + 0x6c8));
      cVar2 = FUN_01c3c010(param_1);
      if (cVar2 == '\x03') {
        FUN_01c3c530(param_1,&local_158);
        FUN_00414ad0(param_1 + 0x910,local_158);
      }
      else if (cVar2 == '\x04') {
        FUN_00414ad0(param_1 + 0x910,*(undefined8 *)(param_1 + 0x918));
      }
      uVar3 = FUN_01c3c010(param_1);
      *(undefined1 *)(param_1 + 0x908) = uVar3;
      if (*(longlong *)(param_1 + 0x920) != 0) {
        FUN_00410f20(*(longlong *)(param_1 + 0x920));
      }
      *(undefined8 *)(param_1 + 0x920) = 0;
      cVar2 = FUN_01c3c010(param_1);
      if ((cVar2 == '\x03') || (cVar2 = FUN_01c3c010(param_1), cVar2 == '\x04')) {
        FUN_00441a10(&local_160,*(undefined8 *)(param_1 + 0x910));
        local_138 = local_160;
        if (local_160 == L".TSC") {
          local_139 = true;
        }
        else if (local_160 == (wchar_t *)0x0) {
          local_139 = false;
        }
        else {
          iVar5 = FUN_0043e420(local_160,L".TSC");
          local_139 = iVar5 == 0;
        }
        if (local_139 != false) {
          FUN_0074b490(*(undefined8 *)(param_1 + 0x8c0),0);
        }
        FUN_01c3c530(param_1,&local_168);
        cVar2 = FUN_00440a20(local_168,1);
        if (cVar2 == '\0') {
          uVar9 = FUN_0044d490(&PTR_FUN_004334c0,1,L"File not found!");
          FUN_004134c0(uVar9);
        }
        FUN_01c3c530(param_1,&local_170);
        cVar2 = FUN_01d44920(local_170);
        if ((cVar2 == '\0') && (cVar2 = FUN_01c3c270(param_1), cVar2 == '\0')) {
          uVar9 = FUN_01c271f0(&DAT_01c22440,1);
          *(undefined8 *)(param_1 + 0x920) = uVar9;
          lVar10 = *(longlong *)(param_1 + 0x920);
          *(longlong *)(lVar10 + 0x20) = param_1;
          *(code **)(lVar10 + 0x18) = FUN_01c3fdb0;
          FUN_01c3c530(param_1,&local_178);
          FUN_01c27840(*(undefined8 *)(param_1 + 0x920),local_178);
          iVar5 = FUN_01c273c0(*(undefined8 *)(param_1 + 0x920));
          if (iVar5 == 0) {
            uVar9 = FUN_0044d490(&PTR_FUN_004334c0,1,L"File is Empty!");
            FUN_004134c0(uVar9);
          }
          (**(code **)(**(longlong **)(param_1 + 0x7a8) + 0x278))(*(longlong **)(param_1 + 0x7a8));
          iVar5 = FUN_01c273c0();
          local_4c = 0;
          if (-1 < iVar5 + -1) {
            do {
              FUN_01c273d0(*(undefined8 *)(param_1 + 0x920),&local_f8,local_4c);
              cVar2 = FUN_01c28560(*(undefined8 *)(param_1 + 0x920),local_4c);
              if (cVar2 != '\0') {
                FUN_00416ad0(&local_f8,L" [model]");
              }
              (**(code **)(**(longlong **)(param_1 + 0x7a8) + 0x270))
                        (*(longlong **)(param_1 + 0x7a8),local_f8,*(undefined8 *)(param_1 + 0x920));
              local_4c = local_4c + 1;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
          (**(code **)(**(longlong **)(param_1 + 0x7a8) + 0x268))(*(longlong **)(param_1 + 0x7a8),0)
          ;
          FUN_01c3cbb0(param_1,param_2);
        }
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 0x7a8) + 0x278))(*(longlong **)(param_1 + 0x7a8));
        FUN_01c3cbb0(param_1,param_2);
      }
    }
    FUN_006d78a0(*(undefined8 *)(param_1 + 0x6b0),*(undefined8 *)(param_1 + 0x6c8));
    cVar2 = FUN_01c38920(param_1,*(undefined8 *)(param_1 + 0x6c8));
    if (cVar2 != '\0') {
      FUN_01c38d00(param_1,param_2);
      goto LAB_01c3b2d6;
    }
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x7f8),0);
  }
  else if (lVar10 == *(longlong *)(param_1 + 0x6c8)) {
    if (*(char *)(*(longlong *)(param_1 + 0x7f8) + 0xa9) == '\0') {
      FUN_01c3f800(param_1,L"Working...",100,0);
    }
    cVar2 = FUN_01c386b0(param_1,*(undefined8 *)(param_1 + 0x6c8));
    if (cVar2 != '\0') {
      FUN_01c38530(param_1,*(undefined8 *)(param_1 + 0x6f0));
      uVar6 = FUN_01c3cb30(param_1);
      *(undefined4 *)(param_1 + 0x928) = uVar6;
      uVar9 = FUN_01c3c010(param_1);
      (**(code **)(**(longlong **)(param_1 + 0x820) + 0x128))
                (*(longlong **)(param_1 + 0x820),
                 CONCAT71((int7)((ulonglong)uVar9 >> 8),(char)uVar9 != '\x01') & 0xffffffff);
      (**(code **)(**(longlong **)(param_1 + 0x828) + 0x128))(*(longlong **)(param_1 + 0x828),1);
      cVar2 = FUN_01c3c010(param_1);
      if (cVar2 == '\x01') {
        (**(code **)(**(longlong **)(param_1 + 0x828) + 0x268))(*(longlong **)(param_1 + 0x828),1);
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 0x820) + 0x268))(*(longlong **)(param_1 + 0x820),1);
      }
      FUN_01c3d610(param_1,0);
      cVar2 = FUN_01c3c010(param_1);
      *(bool *)(param_1 + 0x953) = cVar2 == '\x02';
      FUN_01c3cd90(param_1);
      lVar10 = *(longlong *)(param_1 + 0x920);
      if (lVar10 == 0) {
LAB_01c396cb:
        cVar2 = FUN_01c3c010(param_1);
        if (cVar2 == '\x02') {
          uVar9 = FUN_019a45d0();
          uVar6 = FUN_019af120(uVar9);
          *(undefined4 *)(param_1 + 0x970) = uVar6;
          FUN_0043f750(&local_1a0,*(undefined4 *)(param_1 + 0x970));
          FUN_0064de00(*(undefined8 *)(param_1 + 0x730),local_1a0);
        }
        else {
          cVar2 = FUN_01c3c270(param_1);
          if (cVar2 == '\0') {
            cVar2 = FUN_01c3c010(param_1);
            if ((cVar2 == '\x03') || (cVar2 = FUN_01c3c010(param_1), cVar2 == '\x04')) {
              FUN_01c3c530(param_1,&local_1b0);
              cVar2 = FUN_01d44920(local_1b0);
              if (cVar2 != '\0') {
                local_128 = (undefined8 *)FUN_014af1b0(*(undefined8 *)(param_1 + 0x910),0);
                FUN_01c38bf0(local_128,0,&local_6c);
                *(undefined4 *)(param_1 + 0x970) = local_6c;
                FUN_0043f750(&local_1b8,*(undefined4 *)(param_1 + 0x970));
                FUN_0064de00(*(undefined8 *)(param_1 + 0x730),local_1b8);
                if (local_128 != (undefined8 *)0x0) {
                  uVar9 = (**(code **)*local_128)(local_128);
                  FUN_00418590(uVar9,&DAT_01984da0);
                }
                goto LAB_01c3995f;
              }
            }
            (**(code **)(**(longlong **)(param_1 + 0x730) + 0x268))
                      (*(longlong **)(param_1 + 0x730),0);
            *(undefined4 *)(param_1 + 0x970) = 0;
          }
          else {
            if (*(char *)(param_1 + 0x951) != '\0') {
              uVar9 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Error occured");
              FUN_004134c0(uVar9);
            }
            FUN_015ee870(*(undefined8 *)(param_1 + 0x910),0,&local_6c);
            *(undefined4 *)(param_1 + 0x970) = local_6c;
            FUN_0043f750(&local_1a8,*(undefined4 *)(param_1 + 0x970));
            FUN_0064de00(*(undefined8 *)(param_1 + 0x730),local_1a8);
          }
        }
      }
      else {
        uVar6 = FUN_01c3cb30(param_1);
        cVar2 = FUN_01c28560(lVar10,uVar6);
        if (cVar2 != '\0') goto LAB_01c396cb;
        uVar6 = FUN_01c3cb30(param_1);
        uVar6 = FUN_01c28540(*(undefined8 *)(param_1 + 0x920),uVar6);
        *(undefined4 *)(param_1 + 0x970) = uVar6;
        FUN_0043f750(&local_1c0,*(undefined4 *)(param_1 + 0x970));
        FUN_0064de00(*(undefined8 *)(param_1 + 0x730),local_1c0);
      }
LAB_01c3995f:
      cVar2 = FUN_01c3c010(param_1);
      if (cVar2 == '\x01') {
LAB_01c399c5:
        (**(code **)(**(longlong **)(param_1 + 0x8a0) + 0x128))(*(longlong **)(param_1 + 0x8a0),0);
        FUN_01c370d0(*(undefined8 *)(param_1 + 0x8a0),0);
      }
      else {
        cVar2 = FUN_01c3c010(param_1);
        if ((cVar2 == '\x03') || (cVar2 = FUN_01c3c010(param_1), cVar2 == '\x04')) {
          FUN_01c3c530(param_1,&local_1c8);
          cVar2 = FUN_01d44920(local_1c8);
          if ((cVar2 != '\0') || (cVar2 = FUN_01c3c270(param_1), cVar2 != '\0')) goto LAB_01c399c5;
        }
        (**(code **)(**(longlong **)(param_1 + 0x8a0) + 0x128))(*(longlong **)(param_1 + 0x8a0),1);
        (**(code **)(**(longlong **)(param_1 + 0x8a0) + 0x268))
                  (*(longlong **)(param_1 + 0x8a0),*(undefined1 *)(param_1 + 0x938));
      }
      FUN_01c43750(param_1,param_1);
    }
    FUN_006d78a0(*(undefined8 *)(param_1 + 0x6b0),*(undefined8 *)(param_1 + 0x6f0));
    cVar2 = FUN_01c38920(param_1,*(undefined8 *)(param_1 + 0x6f0));
    if (cVar2 != '\0') {
      FUN_01c38d00(param_1,param_2);
      goto LAB_01c3b2d6;
    }
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x7f8),0);
  }
  else if (lVar10 == *(longlong *)(param_1 + 0x6f0)) {
    if (*(char *)(*(longlong *)(param_1 + 0x7f8) + 0xa9) == '\0') {
      FUN_01c3f800(param_1,L"Working...",100,0);
    }
    local_ea = '\0';
    cVar2 = FUN_01c386b0(param_1,*(undefined8 *)(param_1 + 0x6f0));
    if (cVar2 != '\0') {
      FUN_01c38530(param_1,*(undefined8 *)(param_1 + 0x6f8));
      uVar6 = (**(code **)(**(longlong **)(param_1 + 0x700) + 0x260))
                        (*(longlong **)(param_1 + 0x700));
      *(undefined4 *)(param_1 + 0x92c) = uVar6;
      iVar5 = (**(code **)(**(longlong **)(param_1 + 0x708) + 0x260))
                        (*(longlong **)(param_1 + 0x708));
      if (iVar5 < 0) {
        *(undefined8 *)(param_1 + 0x930) = 0;
      }
      else {
        uVar6 = (**(code **)(**(longlong **)(param_1 + 0x708) + 0x260))
                          (*(longlong **)(param_1 + 0x708));
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x708) + 0x4f0);
        uVar9 = (**(code **)(*plVar1 + 0x30))(plVar1,uVar6);
        *(undefined8 *)(param_1 + 0x930) = uVar9;
      }
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x8a0) + 0x260))
                        (*(longlong **)(param_1 + 0x8a0));
      *(undefined1 *)(param_1 + 0x938) = uVar3;
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x720),&local_1d0);
      FUN_00414ad0(param_1 + 0x940,local_1d0);
      iVar5 = (**(code **)(**(longlong **)(param_1 + 0x730) + 0x260))
                        (*(longlong **)(param_1 + 0x730));
      if (iVar5 == 0) {
        FUN_00414ad0(param_1 + 0x948,&DAT_01c3b708);
      }
      else {
        FUN_0064dd90(*(undefined8 *)(param_1 + 0x730),&local_1d8);
        FUN_00414ad0(param_1 + 0x948,local_1d8);
      }
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x820) + 0x260))
                        (*(longlong **)(param_1 + 0x820));
      *(undefined1 *)(param_1 + 0x950) = uVar3;
      local_68 = FUN_01c3cb30(param_1);
      (**(code **)(**(longlong **)(param_1 + 0x738) + 0x298))(*(longlong **)(param_1 + 0x738));
      if (*(longlong *)(param_1 + 0x920) != 0) {
        uVar6 = FUN_01c3cb30(param_1);
        cVar2 = FUN_01c28560(*(undefined8 *)(param_1 + 0x920),uVar6);
        if (cVar2 == '\0') {
          local_118 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
          uVar7 = FUN_01c284f0(*(undefined8 *)(param_1 + 0x920),local_68);
          iVar5 = FUN_01c28500(*(undefined8 *)(param_1 + 0x920),local_68);
          local_50 = uVar7;
          if ((int)uVar7 <= iVar5) {
            iVar5 = (iVar5 - uVar7) + 1;
            do {
              plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x920) + 8);
              (**(code **)(*plVar1 + 0x18))(plVar1,&local_1e0,local_50);
              (**(code **)(*local_118 + 0x78))(local_118,local_1e0);
              local_50 = local_50 + 1;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
          (**(code **)(*local_118 + 0x38))(local_118,&local_1e8);
          uVar9 = FUN_00416740(local_1e8);
          FUN_0064c8e0(*(undefined8 *)(param_1 + 0x738),uVar9);
          FUN_00410f20(local_118);
          local_54 = 0;
          while( true ) {
            plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x738) + 0x510);
            (**(code **)(*plVar1 + 0x18))(plVar1,&local_1f8,local_54);
            FUN_01c276f0(&local_1f0,local_1f8);
            iVar5 = FUN_00416db0(local_1f0,L".subckt");
            if (iVar5 == 0) break;
            local_54 = local_54 + 1;
          }
          local_200 = FUN_00498310(0,local_54);
          (**(code **)(**(longlong **)(param_1 + 0x738) + 0x2b0))
                    (*(longlong **)(param_1 + 0x738),&local_200);
          local_60 = (**(code **)(**(longlong **)(param_1 + 0x738) + 0x278))
                               (*(longlong **)(param_1 + 0x738));
          local_5c = local_60;
          uVar6 = FUN_01c28520(*(undefined8 *)(param_1 + 0x920),local_68);
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x920) + 8);
          (**(code **)(*plVar1 + 0x18))(plVar1,&local_100,uVar6);
          local_64 = 0;
          local_50 = 1;
          local_58 = FUN_01c27630(local_100,&local_50);
          local_50 = local_50 + local_58;
          local_58 = FUN_01c27630(local_100,&local_50);
          local_50 = local_50 + local_58;
          iVar5 = FUN_01c28540(*(undefined8 *)(param_1 + 0x920),local_68);
          local_4c = 0;
          if (-1 < iVar5 + -1) {
            do {
              local_58 = FUN_01c27630(local_100,&local_50);
              if (local_58 == 0) {
                local_140 = 0;
                if (local_100 != 0) {
                  local_140 = *(int *)(local_100 + -4);
                }
                local_5c = local_5c + local_140;
                local_50 = 1;
                local_64 = local_64 + 1;
                lVar10 = *(longlong *)(param_1 + 0x920);
                iVar8 = FUN_01c28520(lVar10,local_68);
                plVar1 = *(longlong **)(lVar10 + 8);
                (**(code **)(*plVar1 + 0x18))(plVar1,&local_100,iVar8 + local_64);
                FUN_01c276f0(&local_208,local_100);
                FUN_00414b50(&local_100,local_208);
                local_58 = FUN_01c27630(local_100,&local_50);
                iVar8 = FUN_00416db0(local_100,&DAT_01c3b738);
                if (iVar8 == 0) {
                  local_58 = FUN_01c27630(local_100,&local_50);
                }
                else {
                  local_58 = local_58 + 1;
                }
              }
              (**(code **)(**(longlong **)(param_1 + 0x738) + 0x290))
                        (*(longlong **)(param_1 + 0x738),local_5c + local_50 + -1);
              (**(code **)(**(longlong **)(param_1 + 0x738) + 0x288))
                        (*(longlong **)(param_1 + 0x738),local_58);
              uVar6 = FUN_01c22b80(local_4c);
              FUN_006e7090(*(undefined8 *)(*(longlong *)(param_1 + 0x738) + 0x4f0),uVar6);
              FUN_006e7230(*(undefined8 *)(*(longlong *)(param_1 + 0x738) + 0x4f0),1);
              local_50 = local_50 + local_58;
              local_4c = local_4c + 1;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
          cVar2 = FUN_01c3d390(param_1);
          if (cVar2 == '\0') {
            (**(code **)(**(longlong **)(param_1 + 0x860) + 0x130))
                      (*(longlong **)(param_1 + 0x860),*(undefined8 *)(param_1 + 0x6f8));
            (**(code **)(**(longlong **)(param_1 + 0x900) + 0x130))
                      (*(longlong **)(param_1 + 0x900),*(undefined8 *)(param_1 + 0x6f8));
            FUN_0064dbe0(*(undefined8 *)(param_1 + 0x900),1);
          }
          else {
            FUN_0064dbe0(*(undefined8 *)(param_1 + 0x900),0);
            (**(code **)(**(longlong **)(param_1 + 0x900) + 0x130))
                      (*(longlong **)(param_1 + 0x900),0);
            (**(code **)(**(longlong **)(param_1 + 0x860) + 0x130))
                      (*(longlong **)(param_1 + 0x860),*(undefined8 *)(param_1 + 0x8a8));
          }
        }
      }
      if ((*(longlong *)(param_1 + 0x920) != 0) && (cVar2 = FUN_01c3d390(param_1), cVar2 == '\0')) {
        uVar6 = FUN_01c3cb30(param_1);
        cVar2 = FUN_01c28560(*(undefined8 *)(param_1 + 0x920),uVar6);
        if (cVar2 == '\0') {
          FUN_01c23250(*(undefined8 *)(param_1 + 0x900));
          FUN_01c23370(*(undefined8 *)(param_1 + 0x900));
          iVar5 = FUN_01c28540(*(undefined8 *)(param_1 + 0x920),local_68);
          local_4c = 0;
          if (-1 < iVar5 + -1) {
            do {
              FUN_01c28600(*(undefined8 *)(param_1 + 0x920),&local_210,local_68,local_4c);
              FUN_00414b50(local_a0,local_210);
              local_98 = 0;
              local_90 = 0;
              local_2c8 = 0;
              FUN_00498350(&local_190,0,0,0);
              local_80 = local_190;
              uStack_78 = uStack_188;
              lVar10 = FUN_01c27400(*(undefined8 *)(param_1 + 0x920),local_68);
              local_88 = *(longlong *)(lVar10 + 0x18) + (longlong)local_4c * 0x10;
              FUN_01c232c0(*(undefined8 *)(param_1 + 0x900),local_a0);
              local_4c = local_4c + 1;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
          FUN_01c26980(*(undefined8 *)(param_1 + 0x900),*(undefined8 *)(param_1 + 0x930));
          iVar5 = FUN_01c230d0();
          local_4c = 0;
          if (-1 < iVar5 + -1) {
            do {
              local_e8 = FUN_01c230e0(*(undefined8 *)(param_1 + 0x900),local_4c);
              local_50 = 0;
              while (iVar8 = FUN_01c232b0(*(undefined8 *)(param_1 + 0x900)), (int)local_50 < iVar8)
              {
                lVar10 = FUN_01c233d0(*(undefined8 *)(param_1 + 0x900),local_50);
                if (*(longlong *)(lVar10 + 8) == 0) {
                  lVar10 = FUN_01c233d0(*(undefined8 *)(param_1 + 0x900),local_50);
                  FUN_004169a0(&local_218,local_e8 + 8);
                  cVar2 = FUN_01c3d9c0(param_1,*(undefined8 *)(*(longlong *)(lVar10 + 0x18) + 8),
                                       local_218);
                  if (cVar2 != '\0') break;
                }
                local_50 = local_50 + 1;
              }
              iVar8 = FUN_01c232b0(*(undefined8 *)(param_1 + 0x900));
              if ((int)local_50 < iVar8) {
                uVar9 = *(undefined8 *)(param_1 + 0x900);
                uVar11 = FUN_01c233d0(uVar9,local_50);
                FUN_01c23570(uVar9,uVar11,local_e8);
              }
              local_4c = local_4c + 1;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
        }
      }
      cVar2 = FUN_01c3c270(param_1);
      if (cVar2 != '\0') {
        local_110 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
        cVar2 = FUN_01c3c010(param_1);
        if ((cVar2 == '\x03') || (cVar2 = FUN_01c3c010(param_1), cVar2 == '\x04')) {
          FUN_01c3fe00(param_1,&local_220,*(undefined8 *)(param_1 + 0x910));
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x738) + 0x510);
          (**(code **)(*plVar1 + 0xd8))(plVar1,local_220);
          FUN_015ee870(*(undefined8 *)(param_1 + 0x910),local_110,&local_6c);
        }
        else {
          uVar9 = FUN_019a45d0();
          local_ea = FUN_015eedf0(uVar9,0,*(undefined8 *)(*(longlong *)(param_1 + 0x738) + 0x510),
                                  local_110);
        }
        cVar2 = FUN_01c3d390(param_1);
        if (cVar2 == '\0' && local_ea == '\0') {
          (**(code **)(**(longlong **)(param_1 + 0x860) + 0x130))
                    (*(longlong **)(param_1 + 0x860),*(undefined8 *)(param_1 + 0x6f8));
          (**(code **)(**(longlong **)(param_1 + 0x900) + 0x130))
                    (*(longlong **)(param_1 + 0x900),*(undefined8 *)(param_1 + 0x6f8));
          FUN_0064dbe0(*(undefined8 *)(param_1 + 0x900),1);
          FUN_01c23250(*(undefined8 *)(param_1 + 0x900));
          FUN_01c23370(*(undefined8 *)(param_1 + 0x900));
          iVar5 = (**(code **)(*local_110 + 0x28))();
          local_4c = 0;
          if (-1 < iVar5 + -1) {
            do {
              (**(code **)(*local_110 + 0x18))(local_110,&local_228,local_4c);
              FUN_00414b50(local_a0,local_228);
              local_98 = 0;
              local_90 = 0;
              local_2c8 = 0;
              FUN_00498350(&local_190,0,0,0);
              local_80 = local_190;
              uStack_78 = uStack_188;
              local_88 = 0;
              FUN_01c232c0(*(undefined8 *)(param_1 + 0x900),local_a0);
              local_4c = local_4c + 1;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
          FUN_01c26980(*(undefined8 *)(param_1 + 0x900),*(undefined8 *)(param_1 + 0x930));
          iVar5 = FUN_01c230d0();
          local_4c = 0;
          if (-1 < iVar5 + -1) {
            do {
              local_e8 = FUN_01c230e0(*(undefined8 *)(param_1 + 0x900),local_4c);
              local_50 = 0;
              while (iVar8 = FUN_01c232b0(*(undefined8 *)(param_1 + 0x900)), (int)local_50 < iVar8)
              {
                lVar10 = FUN_01c233d0(*(undefined8 *)(param_1 + 0x900),local_50);
                if (*(longlong *)(lVar10 + 8) == 0) {
                  puVar12 = (undefined8 *)FUN_01c233d0(*(undefined8 *)(param_1 + 0x900),local_50);
                  FUN_004169a0(&local_230,local_e8 + 8);
                  cVar2 = FUN_01c3d9c0(param_1,*puVar12,local_230);
                  if (cVar2 != '\0') break;
                }
                local_50 = local_50 + 1;
              }
              iVar8 = FUN_01c232b0(*(undefined8 *)(param_1 + 0x900));
              if ((int)local_50 < iVar8) {
                uVar9 = FUN_01c233d0(*(undefined8 *)(param_1 + 0x900),local_50);
                FUN_01c23570(*(undefined8 *)(param_1 + 0x900),uVar9,local_e8);
              }
              local_4c = local_4c + 1;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
        }
        else {
          FUN_0064dbe0(*(undefined8 *)(param_1 + 0x900),0);
          (**(code **)(**(longlong **)(param_1 + 0x900) + 0x130))(*(longlong **)(param_1 + 0x900),0)
          ;
          (**(code **)(**(longlong **)(param_1 + 0x860) + 0x130))
                    (*(longlong **)(param_1 + 0x860),*(undefined8 *)(param_1 + 0x8a8));
        }
        FUN_00410f20(local_110);
      }
    }
    if (local_ea == '\0') {
      FUN_006d78a0(*(undefined8 *)(param_1 + 0x6b0),*(undefined8 *)(param_1 + 0x6f8));
    }
    if (*(char *)(*(longlong *)(param_1 + 0x900) + 0xa9) != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x900) + 600))(*(longlong **)(param_1 + 0x900));
    }
    cVar2 = FUN_01c38920(param_1,*(undefined8 *)(param_1 + 0x6f8));
    if (cVar2 != '\0') {
      FUN_01c38d00(param_1,param_2);
      if ((*(longlong *)(*(longlong *)(param_1 + 0x6b0) + 0x530) == *(longlong *)(param_1 + 0x6f8))
         || (*(longlong *)(*(longlong *)(param_1 + 0x6b0) + 0x530) == *(longlong *)(param_1 + 0x8a8)
            )) {
        (**(code **)(**(longlong **)(param_1 + 0x738) + 600))(*(longlong **)(param_1 + 0x738));
        (**(code **)(**(longlong **)(param_1 + 0x738) + 0x290))
                  (*(longlong **)(param_1 + 0x738),local_60);
        FUN_0064fca0(*(undefined8 *)(param_1 + 0x738),0xb7,0,0);
      }
      goto LAB_01c3b2d6;
    }
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x7f8),0);
  }
  else if (lVar10 == *(longlong *)(param_1 + 0x6f8)) {
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x7f8),0);
    FUN_006d78a0(*(undefined8 *)(param_1 + 0x6b0),*(undefined8 *)(param_1 + 0x8a8));
    cVar2 = FUN_01c38920(param_1,*(undefined8 *)(param_1 + 0x8a8));
    if (cVar2 != '\0') {
      FUN_01c38d00(param_1,param_2);
      goto LAB_01c3b2d6;
    }
    FUN_01c3bc80(param_1,0);
    local_110 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    if (*(longlong *)(param_1 + 0x920) == 0) {
      cVar2 = FUN_01c3c010(param_1);
      if ((cVar2 == '\x03') || (cVar2 = FUN_01c3c010(param_1), cVar2 == '\x04')) {
        FUN_015ee870(*(undefined8 *)(param_1 + 0x910),local_110,&local_6c);
      }
      else {
        uVar9 = FUN_019a45d0();
        FUN_015eedf0(uVar9,0,0,local_110);
      }
      iVar5 = (**(code **)(*local_110 + 0x28))(local_110);
      FUN_00848a70(*(undefined8 *)(param_1 + 0x8e0),iVar5 + 1);
      FUN_0084e3e0(*(undefined8 *)(param_1 + 0x8e0),0,0,&DAT_01c3b764);
    }
    else {
      uVar6 = FUN_01c3cb30(param_1);
      iVar5 = FUN_01c28540(*(undefined8 *)(param_1 + 0x920),uVar6);
      FUN_00848a70(*(undefined8 *)(param_1 + 0x8e0),iVar5 + 1);
      FUN_0084e3e0(*(undefined8 *)(param_1 + 0x8e0),0,0,L"spice");
    }
    FUN_0084e3e0(*(undefined8 *)(param_1 + 0x8e0),1,0,L"Name on the shape");
    FUN_0084e3e0(*(undefined8 *)(param_1 + 0x8e0),2,0,L"orientation");
    FUN_008485d0(*(undefined8 *)(param_1 + 0x8e0),
                 *(undefined4 *)(*(longlong *)(param_1 + 0x8e8) + 0x9c));
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x8e8),0);
    FUN_00419260(param_1 + 0x988,&DAT_01c34648,1,
                 (longlong)(*(int *)(*(longlong *)(param_1 + 0x8e0) + 0x4e0) + -1));
    local_129 = 0;
    uVar9 = FUN_01c3d280(param_1);
    sVar4 = FUN_00c3f420(uVar9,1,0,&local_129);
    local_50 = (uint)sVar4;
    iVar5 = *(int *)(*(longlong *)(param_1 + 0x8e0) + 0x4e0);
    local_4c = 0;
    if (-1 < iVar5 + -2) {
      iVar5 = iVar5 + -1;
      do {
        lVar10 = *(longlong *)(param_1 + 0x920);
        if (lVar10 == 0) {
          iVar8 = local_4c + 1;
          (**(code **)(*local_110 + 0x18))(local_110,&local_258,local_4c);
          FUN_00416dc0(&local_250,local_258,1,0x10);
          FUN_0084e3e0(*(undefined8 *)(param_1 + 0x8e0),0,iVar8,local_250);
          uVar9 = *(undefined8 *)(param_1 + 0x8e0);
          FUN_0084e320(uVar9,&local_260,0,iVar8);
          FUN_0084e3e0(uVar9,1,iVar8,local_260);
        }
        else {
          iVar8 = local_4c + 1;
          uVar6 = FUN_01c3cb30(param_1);
          FUN_01c28600(lVar10,&local_238,uVar6,local_4c);
          FUN_0084e3e0(*(undefined8 *)(param_1 + 0x8e0),0,iVar8,local_238);
          uVar9 = *(undefined8 *)(param_1 + 0x8e0);
          FUN_0084e320(uVar9,&local_248,0,iVar8);
          FUN_0043e130(&local_240,local_248);
          FUN_0084e3e0(uVar9,1,iVar8,local_240);
        }
        for (local_54 = 0; local_54 < *(int *)(*(longlong *)(param_1 + 0x8e0) + 0x4e0) + -1;
            local_54 = local_54 + 1) {
          lVar10 = FUN_01c3d280(param_1);
          uVar9 = FUN_004aeac0(*(undefined8 *)(lVar10 + 0x38),local_50);
          FUN_00c3d330(uVar9,local_298,(undefined2)local_54);
          FUN_004169a0(&local_2a0,local_298);
          FUN_0043e130(&local_268,local_2a0);
          FUN_0084e320(*(undefined8 *)(param_1 + 0x8e0),&local_2b0,0,local_4c + 1);
          FUN_0043e130(&local_2a8,local_2b0);
          iVar8 = FUN_00416db0(local_268,local_2a8);
          if (iVar8 == 0) break;
        }
        lVar10 = FUN_01c3d280(param_1);
        uVar9 = FUN_004aeac0(*(undefined8 *)(lVar10 + 0x38),local_50);
        FUN_00c3d330(uVar9,local_298,(undefined2)local_54);
        uVar6 = *(undefined4 *)(&DAT_01fe6540 + (ulonglong)local_284 * 4);
        *(undefined4 *)(*(longlong *)(param_1 + 0x988) + (longlong)local_4c * 4) = uVar6;
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x8e8) + 0x4f0);
        (**(code **)(*plVar1 + 0x18))(plVar1,&local_2b8,uVar6);
        FUN_0084e3e0(*(undefined8 *)(param_1 + 0x8e0),2,local_4c + 1,local_2b8);
        local_4c = local_4c + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    FUN_00410f20(local_110);
  }
  else if (lVar10 == *(longlong *)(param_1 + 0x8a8)) {
    FUN_007fdf50(param_1,0);
    local_e9 = FUN_01c41ab0(param_1);
    FUN_007fdf50(param_1,1);
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x7f8),0);
    if (local_e9 == '\0') {
      cVar2 = FUN_01c38920(param_1,*(undefined8 *)(param_1 + 0x8a8));
      if (cVar2 != '\0') {
        FUN_01c3b7c0(param_1,param_2);
      }
    }
    else {
      FUN_006d78a0(*(undefined8 *)(param_1 + 0x6b0),*(undefined8 *)(param_1 + 0x830));
    }
  }
  FUN_01c3bee0(param_1,param_1);
  FUN_01c38160(param_1);
  if (*(longlong *)(*(longlong *)(param_1 + 0x6b0) + 0x530) == *(longlong *)(param_1 + 0x6f8)) {
    (**(code **)(**(longlong **)(param_1 + 0x738) + 600))(*(longlong **)(param_1 + 0x738));
    (**(code **)(**(longlong **)(param_1 + 0x738) + 0x290))
              (*(longlong **)(param_1 + 0x738),local_60);
    FUN_0064fca0(*(undefined8 *)(param_1 + 0x738),0xb7,0,0);
  }
LAB_01c3b2d6:
  FUN_00414560(&local_2b8,4);
  FUN_00414560(&local_268,0xd);
  FUN_00414560(&local_1f8,4);
  FUN_00414560(&local_1d8,2);
  FUN_00414560(&local_1c8,7);
  FUN_00414560(&local_180,6);
  FUN_00414560(&local_100,2);
  FUN_00417740(local_e0,&DAT_01c21008);
  FUN_00417740(local_a0,&DAT_01c210d0);
  return;
}


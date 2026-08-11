/* Ghidra address: 01b96ae0 */
/* Ghidra symbol: FUN_01b96ae0 */


char FUN_01b96ae0(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int iVar9;
  undefined1 auStack_218 [32];
  wchar_t *local_1f8;
  longlong local_1e8;
  char local_1da;
  char local_1d9;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined1 local_178;
  int local_170;
  undefined1 local_168;
  undefined8 local_160;
  undefined1 local_158;
  wchar_t *local_150;
  undefined1 local_148;
  undefined8 local_140;
  undefined1 local_138;
  undefined8 local_130;
  undefined1 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  short *local_60;
  undefined8 local_58;
  longlong local_50 [2];
  undefined8 local_40;
  wchar_t *local_38;
  undefined8 local_30;
  undefined8 local_28;
  short *local_20;
  
  local_1d8 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  local_1a8 = 0;
  local_1b0 = 0;
  local_1b8 = 0;
  local_1a0 = 0;
  local_188 = 0;
  local_190 = 0;
  local_198 = 0;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_b0 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_78 = 0;
  local_70 = 0;
  local_50[0] = 0;
  local_60 = (short *)0x0;
  local_68 = 0;
  local_58 = 0;
  local_20 = (short *)0x0;
  local_28 = 0;
  local_30 = 0;
  local_38 = (wchar_t *)0x0;
  local_40 = 0;
  local_1d9 = '\0';
  local_1e8 = param_2;
  local_1da = param_3;
  if (*(char *)(param_1 + 0x8a9) != '\0') goto LAB_01b975a8;
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x18) == 0)) {
    local_1d9 = '\0';
  }
  else {
    local_1d9 = '\x01';
  }
  FUN_00414480(&local_38);
  if (local_1d9 != '\0') {
    local_1d9 = '\0';
    if (local_1da == '\0') {
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x718),&local_58);
      FUN_0043ea00(local_50,local_58);
      if (local_50[0] != 0) {
        FUN_0064dd90(*(undefined8 *)(param_1 + 0x718),&local_68);
        FUN_0043ea00(&local_60,local_68);
        if (*local_60 != 0x5b) goto LAB_01b96d5e;
      }
      uVar7 = FUN_00b89270();
      FUN_00b8e520(uVar7,&local_70,0x840);
      FUN_01b96a70(auStack_218,local_70,*(undefined8 *)(param_1 + 0x718));
      goto LAB_01b975a8;
    }
LAB_01b96d5e:
    FUN_00414b50(&local_20,**(undefined8 **)(local_1e8 + 0x18));
    FUN_00416dc0(&local_78,local_20,1,2);
    iVar4 = FUN_00416db0(local_78,&DAT_01b97824);
    if (iVar4 == 0) {
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x718),&local_a0);
      local_98 = local_a0;
      local_90 = 0x11;
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x720),&local_a8);
      local_88 = local_a8;
      local_80 = 0x11;
      FUN_00442f70(&local_28,L"[!%s]:{%s}",&local_98,1);
    }
    else {
      FUN_00416dc0(&local_b0,local_20,1,2);
      iVar4 = FUN_00416db0(local_b0,&DAT_01b9785c);
      if (iVar4 == 0) {
        FUN_0064dd90(*(undefined8 *)(param_1 + 0x718),&local_e8);
        local_e0 = local_e8;
        local_d8 = 0x11;
        FUN_0064dd90(*(undefined8 *)(param_1 + 0x720),&local_f0);
        local_d0 = local_f0;
        local_c8 = 0x11;
        FUN_01b98970(param_1,&local_f8);
        local_c0 = local_f8;
        local_b8 = 0x11;
        FUN_00442f70(&local_28,L"[@%s]:{%s},%s",&local_e0,2);
        FUN_01b98970(param_1,&local_100);
        uVar5 = FUN_00c85dd0(*(undefined8 *)PTR_DAT_02002c40,local_100,*PTR_DAT_02002480,0);
        FUN_006dcbd0(local_1e8,uVar5);
        if (-1 < *(int *)(local_1e8 + 0x28)) {
          FUN_006dcca0(local_1e8,*(int *)(local_1e8 + 0x28));
        }
      }
      else if (*local_20 == 0x25) {
        FUN_00414b50(&local_28,local_20);
      }
      else {
        if (*(char *)(*(longlong *)(param_1 + 0x728) + 0xa9) == '\0') {
          FUN_01b1cbc0(&local_1a0,local_20,2);
          iVar4 = FUN_0043fc00(local_1a0);
          FUN_01b1cbc0(&local_30,local_20,3);
          FUN_01b1cbc0(&local_38,local_20,4);
          FUN_0064dd90(*(undefined8 *)(param_1 + 0x718),&local_1a8);
          local_180 = local_1a8;
          local_178 = 0x11;
          local_168 = 0;
          local_160 = local_30;
          local_158 = 0x11;
          local_150 = local_38;
          local_148 = 0x11;
          local_170 = iVar4;
          FUN_01b98970(param_1,&local_1b0);
          local_140 = local_1b0;
          local_138 = 0x11;
          FUN_0064dd90(*(undefined8 *)(param_1 + 0x720),&local_1b8);
          local_130 = local_1b8;
          local_128 = 0x11;
          FUN_00442f70(&local_28,L"%s,%d,%s,%s,%s,%s",&local_180,5);
          FUN_01b1cbc0(&local_38,local_20,2);
        }
        else {
          lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x728) + 0x530);
          if (lVar1 == *(longlong *)(param_1 + 0x730)) {
            iVar4 = 0x39;
            FUN_00414b50(&local_30,L"TMacroHandler");
            FUN_0064dd90(*(undefined8 *)(param_1 + 0x740),&local_108);
            FUN_00b92430(&local_38,local_108);
            if (local_1da == '\0') {
              FUN_0064dd90(*(undefined8 *)(param_1 + 0x740),&local_110);
              cVar2 = FUN_00440a20(local_110,1);
              if (cVar2 == '\0') {
                uVar7 = FUN_00b89270();
                FUN_00b8e520(uVar7,&local_118,0x841);
                FUN_01b96a70(auStack_218,local_118,*(undefined8 *)(param_1 + 0x740));
                goto LAB_01b975a8;
              }
            }
          }
          else if (lVar1 == *(longlong *)(param_1 + 0x750)) {
            iVar4 = 0x39;
            FUN_00414b50(&local_30,L"TMacroHandler");
            FUN_0064dd90(*(undefined8 *)(param_1 + 0x780),&local_120);
            local_1f8 = L"|<Auto>";
            FUN_00416cd0(&local_38,3,&DAT_01b978c0,local_120);
          }
          else {
            iVar4 = -0x39;
            FUN_00414b50(&local_30,L"TSpiceMacroCompHandler");
            FUN_0064dd90(*(undefined8 *)(param_1 + 0x788),&local_38);
          }
          FUN_0064dd90(*(undefined8 *)(param_1 + 0x718),&local_188);
          local_180 = local_188;
          local_178 = 0x11;
          local_168 = 0;
          local_160 = local_30;
          local_158 = 0x11;
          local_150 = local_38;
          local_148 = 0x11;
          local_170 = iVar4;
          FUN_01b98970(param_1,&local_190);
          local_140 = local_190;
          local_138 = 0x11;
          FUN_0064dd90(*(undefined8 *)(param_1 + 0x720),&local_198);
          local_130 = local_198;
          local_128 = 0x11;
          FUN_00442f70(&local_28,L"%s,%d,%s,%s,%s,%s",&local_180,5);
          if (iVar4 == -0x39) {
            FUN_00414480(&local_38);
          }
        }
        FUN_01b98970(param_1,&local_1c0);
        uVar5 = FUN_00c85dd0(*(undefined8 *)PTR_DAT_02002c40,local_1c0,*PTR_DAT_02002480,0);
        FUN_006dcbd0(local_1e8,uVar5);
        if (-1 < *(int *)(local_1e8 + 0x28)) {
          FUN_006dcca0(local_1e8,*(int *)(local_1e8 + 0x28));
        }
      }
    }
    iVar4 = FUN_00416db0(local_20,local_28);
    if (iVar4 != 0) {
      FUN_00414ad0(*(undefined8 *)(local_1e8 + 0x18),local_28);
      *(undefined1 *)(*(longlong *)(local_1e8 + 0x18) + 0x10) = 1;
      plVar8 = (longlong *)FUN_006d6380(*(undefined8 *)(param_1 + 0x7e0));
      uVar5 = FUN_006d5120(*(undefined8 *)(param_1 + 0x7e0));
      (**(code **)(*plVar8 + 0x48))(plVar8,uVar5,1);
    }
    if (*(char *)(*(longlong *)(param_1 + 0x718) + 0xa9) != '\0') {
      FUN_0064dd90(*(longlong *)(param_1 + 0x718),&local_1c8);
      FUN_006dc8a0(local_1e8,local_1c8);
    }
  }
  if (local_38 != (wchar_t *)0x0) {
    iVar4 = (**(code **)(**(longlong **)(param_1 + 0x890) + 0x28))();
    iVar9 = 0;
    if (-1 < iVar4 + -1) {
      do {
        FUN_004b5390(*(undefined8 *)(param_1 + 0x890),&local_1d0,iVar9);
        iVar6 = FUN_00416db0(local_1d0,local_38);
        if (iVar6 == 0) {
          (**(code **)(**(longlong **)(param_1 + 0x890) + 0x98))
                    (*(longlong **)(param_1 + 0x890),iVar9);
          break;
        }
        iVar9 = iVar9 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    sVar3 = FUN_006ecd50(*(undefined8 *)(param_1 + 0x840));
    if (sVar3 != 0) {
      uVar5 = FUN_006ecd50(*(undefined8 *)(param_1 + 0x840));
      FUN_007dc700(&local_40,uVar5);
      iVar4 = (**(code **)(**(longlong **)(param_1 + 0x890) + 0xb8))
                        (*(longlong **)(param_1 + 0x890),local_40);
      if (iVar4 == -1) {
        local_1f8 = local_38;
        FUN_00416cd0(&local_1d8,3,local_40,&LAB_01b97958);
        (**(code **)(**(longlong **)(param_1 + 0x890) + 0x78))
                  (*(longlong **)(param_1 + 0x890),local_1d8);
      }
      else {
        FUN_004b5450(*(undefined8 *)(param_1 + 0x890),iVar4,local_38);
      }
    }
  }
  local_1d9 = '\x01';
LAB_01b975a8:
  FUN_00414560(&local_1d8,2);
  FUN_00414480(&local_1c8);
  FUN_00414480(&local_1c0);
  FUN_00414480(&local_1b8);
  FUN_00414480(&local_1b0);
  FUN_00414480(&local_1a8);
  FUN_00414480(&local_1a0);
  FUN_00414480(&local_198);
  FUN_00414480(&local_190);
  FUN_00414480(&local_188);
  FUN_00414480(&local_120);
  FUN_00414480(&local_118);
  FUN_00414560(&local_110,2);
  FUN_00414560(&local_100,2);
  FUN_00414560(&local_f0,2);
  FUN_00414480(&local_b0);
  FUN_00414560(&local_a8,2);
  FUN_00414560(&local_78,2);
  FUN_00414480(&local_68);
  FUN_00414480(&local_60);
  FUN_00414480(&local_58);
  FUN_00414480(local_50);
  FUN_00414560(&local_40,5);
  return local_1d9;
}


/* Ghidra address: 013c2920 */
/* Ghidra symbol: FUN_013c2920 */


undefined4
FUN_013c2920(longlong param_1,undefined8 param_2,undefined4 param_3,wchar_t *param_4,int *param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_res10;
  undefined4 local_res18;
  wchar_t *local_res20;
  undefined1 auStack_198 [32];
  wchar_t *local_178;
  undefined *local_170;
  undefined8 local_168;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  wchar_t *local_140;
  undefined1 local_138;
  wchar_t *local_130;
  wchar_t *local_128;
  undefined1 local_120;
  wchar_t *local_118;
  undefined1 local_110;
  wchar_t *local_108;
  undefined1 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  longlong local_c0;
  longlong local_b8;
  char local_ad;
  undefined4 local_ac;
  int local_a8;
  int local_a4;
  int local_a0 [2];
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_3c;
  longlong *local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20 [2];
  
  local_d0 = auStack_198;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0;
  local_f8 = 0;
  local_130 = (wchar_t *)0x0;
  local_e8 = 0;
  local_f0 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = (undefined *)0x0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_20[0] = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_2);
  local_3c = 0;
  FUN_00414b50(&local_70,L"lint_src.py");
  *param_5 = 0;
  local_28 = 0;
  local_178 = L"result.json";
  FUN_00416cd0(&local_d8,3,*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x108),&DAT_013c3354);
  cVar2 = FUN_00440a20(local_d8,1);
  if (cVar2 != '\0') {
    local_178 = L"result.json";
    FUN_00416cd0(&local_e0,3,*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x108),&DAT_013c3354);
    FUN_004412f0(local_e0);
  }
  local_30 = FUN_004b6930(&PTR_FUN_00478280,1);
  local_38 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  (**(code **)(*local_38 + 0x60))(local_38,local_res10);
  FUN_00441920(&local_f0,local_70);
  local_178 = (wchar_t *)local_f0;
  FUN_00416cd0(&local_e8,3,*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x108),&DAT_013c3354);
  (**(code **)(*local_38 + 0x100))(local_38,local_e8);
  local_128 = L"tpack_t";
  local_120 = 0x11;
  local_118 = L"run_tlint";
  local_110 = 0x11;
  local_108 = L"run_tlint";
  local_100 = 0x11;
  FUN_00442f70(&local_f8,L"from %s import %s as %s",&local_128,2);
  local_140 = L"run_tlint";
  local_138 = 0x11;
  FUN_00442f70(&local_130,L"%s.run()",&local_140,0);
  local_178 = local_130;
  local_170 = &DAT_013c3400;
  FUN_00416cd0(&local_68,4,local_f8,&DAT_013c3400);
  FUN_013c1bf0(&local_78,&local_80,local_a0);
  FUN_013c1c00(param_1 + 0x34,&local_a4,&local_88);
  FUN_013c1c20(param_1 + 0x38,param_1 + 0x28,param_1 + 0x3c);
  FUN_013c2160(param_1,&local_98,*(undefined4 *)(param_1 + 0x34));
  if ((*PTR_DAT_02005440 == '\0') && (local_88 != 0)) {
    FUN_010d5940(L"SYSROOT",local_88);
    *PTR_DAT_02005440 = 1;
  }
  if (local_a4 < 1) {
    local_3c = 0;
  }
  else if (*(int *)(param_1 + 0x38) == 1) {
    lVar1 = *(longlong *)(param_1 + 0x40);
    *(undefined4 *)(lVar1 + 0x120) = 1;
    local_178 = (wchar_t *)0x0;
    FUN_013bc030(lVar1,&local_48,local_68,1);
    local_b8 = *(longlong *)(param_1 + 0x40);
    (**(code **)(**(longlong **)(local_b8 + 200) + 0x90))(*(longlong **)(local_b8 + 200));
    FUN_013bb8d0(local_b8,local_res18);
    FUN_013bb8f0(local_b8);
    local_178 = local_res20;
    FUN_013c2430(param_1,local_res10,local_98,param_5);
    if (*param_5 == 3) {
      local_3c = 5;
    }
    else if ((*param_5 == 1) || (*param_5 == 2)) {
      local_3c = 1;
    }
  }
  else {
    local_178 = (wchar_t *)0x0;
    FUN_013bc030(*(undefined8 *)(param_1 + 0x40),&local_48,local_68,1);
    local_ad = '\0';
    local_c0 = *(longlong *)(param_1 + 0x40);
    (**(code **)(**(longlong **)(local_c0 + 200) + 0x90))(*(longlong **)(local_c0 + 200));
    FUN_013bb8d0(local_c0,local_res18);
    FUN_013bb8f0(local_c0);
    cVar2 = FUN_013b9480(local_res10,&local_ac);
    if (cVar2 == '\0') {
      local_140 = (wchar_t *)CONCAT44(local_140._4_4_,local_ac);
      local_138 = 0;
      FUN_00442f70(&local_148,L"Line is too long: lineno: %d",&local_140,0);
      FUN_00414ad0(local_res20,local_148);
      (**(code **)(**(longlong **)(local_c0 + 200) + 0x78))
                (*(longlong **)(local_c0 + 200),*(undefined8 *)local_res20);
      FUN_00416ba0(&local_150,*(undefined8 *)(local_c0 + 0x108),L"\\msg.txt");
      (**(code **)(**(longlong **)(local_c0 + 200) + 0x100))
                (*(longlong **)(local_c0 + 200),local_150);
      *param_5 = 1;
      local_3c = 1;
      FUN_013c3270(0,local_d0);
      goto LAB_013c31e1;
    }
    local_178 = (wchar_t *)CONCAT44(local_178._4_4_,local_a0[0] * 1000);
    local_170 = local_78;
    local_168 = local_80;
    local_a8 = FUN_01054cd0(*(undefined8 *)(local_c0 + 200),local_48,
                            *(undefined8 *)(local_c0 + 0x108),1);
    if (local_a8 == 0x102) {
      local_ad = '\x01';
      (**(code **)(**(longlong **)(local_c0 + 200) + 0x78))
                (*(longlong **)(local_c0 + 200),L"Timeout received");
    }
    FUN_00416ba0(&local_158,*(undefined8 *)(local_c0 + 0x108),L"\\msg.txt");
    (**(code **)(**(longlong **)(local_c0 + 200) + 0x100))(*(longlong **)(local_c0 + 200),local_158)
    ;
    local_178 = L"result.json";
    FUN_00416cd0(&local_58,3,*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x108),&DAT_013c3354);
    if (local_ad == '\0') {
      cVar2 = FUN_00440a20(local_58,1);
      if (cVar2 != '\0') {
        iVar3 = FUN_01b21610(local_58);
        if (0 < iVar3) {
          FUN_00414480(local_20);
          FUN_005d10a0(local_58,0,0);
          FUN_005d1300(local_20,local_58);
          local_28 = FUN_00f30500(local_20[0],0,0);
          FUN_00414480(local_20);
          uVar4 = FUN_004113f0(local_28,&LAB_00f23b78);
          FUN_013c1e30(param_1,uVar4,param_5,local_res20);
          if (*param_5 == 3) {
            local_3c = 5;
          }
          else if ((*param_5 == 1) || (*param_5 == 2)) {
            local_3c = 1;
          }
          goto code_r0x013c31a0;
        }
      }
      local_3c = 5;
    }
    else {
      *param_5 = 4;
      FUN_00414ad0(local_res20,L"Timeout error");
      FUN_00414480(&local_90);
    }
  }
code_r0x013c31a0:
  if (local_28 != 0) {
    FUN_00410f20(local_28);
  }
  FUN_00410f20(local_30);
  FUN_00410f20(local_38);
LAB_013c31e1:
  FUN_00414560(&local_158,3);
  FUN_00414480(&local_130);
  FUN_00414560(&local_f8,5);
  FUN_00414560(&local_98,0xb);
  FUN_00414480(local_20);
  FUN_00414480(&local_res10);
  return local_3c;
}


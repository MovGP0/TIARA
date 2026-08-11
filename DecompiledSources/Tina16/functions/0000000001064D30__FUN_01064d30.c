/* Ghidra address: 01064d30 */
/* Ghidra symbol: FUN_01064d30 */


void FUN_01064d30(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined *param_7)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 local_res20;
  undefined1 auStack_1d8 [32];
  wchar_t *local_1b8;
  undefined *local_1b0;
  undefined8 local_1a8;
  undefined8 local_198;
  undefined8 local_190;
  undefined1 local_188;
  wchar_t *local_180;
  undefined1 local_178;
  undefined8 local_170;
  undefined1 local_168;
  undefined8 local_160;
  undefined1 local_158;
  undefined8 local_150;
  undefined1 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined1 *local_100;
  char local_f1;
  longlong *local_f0;
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
  longlong local_88;
  int local_7c;
  undefined8 local_78 [9];
  longlong *local_30;
  
  local_100 = auStack_1d8;
  local_198 = 0;
  local_140 = 0;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  puVar6 = local_78;
  for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *param_2;
    param_2 = param_2 + 1;
    puVar6 = puVar6 + 1;
  }
  local_res20 = param_4;
  FUN_004179d0(local_78,&DAT_010571b8);
  FUN_00414610(local_res20);
  FUN_00414610(param_5);
  FUN_00414610(param_6);
  FUN_00414610(param_7);
  local_30 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_00414ad0(param_1 + 0x20,param_5);
  local_1b8 = L"\"";
  FUN_00416cd0(&local_e8,3,&DAT_01065540,param_6);
  local_1b8 = L"\"";
  FUN_00416cd0(&param_7,3,&DAT_01065540,param_7);
  local_f1 = '\0';
  iVar5 = *(int *)(*(longlong *)(param_3 + 0x18) + 0x10);
  local_7c = 0;
  if (-1 < iVar5 + -1) {
    do {
      local_88 = FUN_010b2ee0(param_3,local_7c);
      FUN_00441a10(&local_108,*(undefined8 *)(local_88 + 0x30));
      FUN_0043e130(&local_90,local_108);
      iVar2 = FUN_00416db0(local_90,L".INO");
      if (iVar2 == 0) {
        local_f0 = (longlong *)FUN_010af3b0(local_88);
        local_f1 = '\x01';
        break;
      }
      local_7c = local_7c + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (local_f1 != '\0') {
    FUN_010642b0(&local_a0,local_78);
    FUN_00416ba0(&local_b0,local_res20,L"arduino-cli.exe");
    FUN_00414b50(&local_c8,*(undefined8 *)(param_3 + 0x10));
    FUN_00416ba0(&local_b8,local_c8,L".ino");
    local_1b8 = (wchar_t *)local_c8;
    FUN_00416cd0(&local_110,3,*(undefined8 *)(param_1 + 0x20),&DAT_010655ac);
    FUN_00440c30(local_110);
    local_1b8 = (wchar_t *)local_c8;
    local_1b0 = &DAT_010655ac;
    local_1a8 = local_b8;
    FUN_00416cd0(&local_118,5,*(undefined8 *)(param_1 + 0x20),&DAT_010655ac);
    (**(code **)(*local_f0 + 0x100))(local_f0,local_118);
    cVar1 = FUN_00440a20(local_b0,1);
    if (cVar1 == '\0') {
      uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Arduino CLI not found!");
      FUN_004134c0(uVar3);
    }
    local_1b8 = L"\"";
    FUN_00416cd0(&local_b0,3,&DAT_01065540,local_b0);
    local_1b8 = L"\"";
    FUN_00416cd0(&local_d0,3,L"\"build_",local_a0);
    FUN_00414b50(&local_a8,local_78[2]);
    local_1b8 = L"data";
    local_1b0 = &DAT_01065540;
    FUN_00416cd0(&local_d8,4,&DAT_01065540,local_res20);
    local_1b8 = L"user";
    local_1b0 = &DAT_01065540;
    FUN_00416cd0(&local_e0,4,&DAT_01065540,local_res20);
    local_1b8._0_1_ = 1;
    FUN_00450070(&local_120,local_d8,&DAT_010655ac,&DAT_01065644);
    FUN_00414b50(&local_d8,local_120);
    local_1b8._0_1_ = 1;
    FUN_00450070(&local_128,local_e0,&DAT_010655ac,&DAT_01065644);
    FUN_00414b50(&local_e0,local_128);
    local_1b8._0_1_ = 1;
    FUN_00450070(&local_130,local_e8,&DAT_010655ac,&DAT_01065644);
    FUN_00414b50(&local_e8,local_130);
    local_1b8 = (wchar_t *)CONCAT71(local_1b8._1_7_,1);
    FUN_00450070(&local_138,param_7,&DAT_010655ac,&DAT_01065644);
    FUN_00414b50(&param_7,local_138);
    local_1b8 = L"arduino-cli.yaml";
    FUN_00416cd0(&local_140,3,*(undefined8 *)(param_1 + 0x20),&DAT_010655ac);
    local_1b8 = (wchar_t *)param_7;
    FUN_01064420(local_140,local_d8,local_e0,local_e8);
    local_190 = local_b0;
    local_188 = 0x11;
    local_180 = L"arduino-cli.yaml";
    local_178 = 0x11;
    local_170 = local_a8;
    local_168 = 0x11;
    local_160 = local_c8;
    local_158 = 0x11;
    local_150 = local_c8;
    local_148 = 0x11;
    FUN_00442f70(&local_c0,L"%s --config-file %s compile --fqbn %s %s\\%s.ino",&local_190,4);
    (**(code **)(*local_30 + 0x78))(local_30,local_c0);
    FUN_00416ba0(&local_198,*(undefined8 *)(param_1 + 0x20),L"\\c1.bat");
    (**(code **)(*local_30 + 0x100))(local_30,local_198);
    FUN_01063fc0(param_1,local_30,1);
  }
  FUN_00410f20(local_30);
  FUN_00414480(&local_198);
  FUN_00414560(&local_140,8);
  FUN_00414560(&local_e8,0xc);
  FUN_00417740(local_78,&DAT_010571b8);
  FUN_00414560(&local_res20,4);
  return;
}


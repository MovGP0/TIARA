/* Ghidra address: 01a43260 */
/* Ghidra symbol: FUN_01a43260 */


void FUN_01a43260(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_238 [32];
  wchar_t *local_218;
  longlong local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined1 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 *local_150;
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
  longlong local_e0;
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
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  char local_62;
  undefined1 local_61;
  undefined4 local_60;
  undefined4 local_5c;
  uint local_58;
  uint local_50;
  undefined4 local_4c;
  undefined4 local_48;
  uint local_44;
  uint local_40;
  int local_3c;
  longlong *local_38;
  undefined8 local_30;
  
  local_150 = auStack_238;
  local_1c8 = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_198 = 0;
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
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
  local_f0 = 0;
  local_100 = 0;
  local_108 = 0;
  local_110 = 0;
  local_118 = 0;
  local_120 = 0;
  local_128 = 0;
  local_130 = 0;
  local_138 = 0;
  local_38 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_30 = FUN_00f309b0(&LAB_00f23b78,1);
  if ((*(int *)(*(longlong *)(param_1 + 0x2968) + 0xa0) != 0) ||
     (iVar3 = FUN_004170c0(L"Local",*(undefined8 *)(*(longlong *)(param_1 + 0x2960) + 0x38),1),
     iVar3 < 1)) {
    FUN_01a431f0(param_1);
  }
  FUN_00414480(&local_b8);
  FUN_00414480(&local_e0);
  *(undefined1 *)(param_1 + 0x2b44) = 0;
  local_62 = *(int *)(*(longlong *)(param_1 + 0x2968) + 0xa0) < 2;
  local_50 = (uint)(byte)local_62;
  if (*(char *)(*(longlong *)(param_1 + 0x2968) + 0x74) == '\0') {
    local_218 = (wchar_t *)((ulonglong)local_218 & 0xffffffff00000000);
    local_210._0_1_ = 1;
    FUN_01a4a040(param_1,&local_d8,*(undefined8 *)(*(longlong *)(param_1 + 0x2960) + 0x18),&local_61
                );
    if (*(int *)(param_1 + 0x94c) == 2) {
      local_218 = (wchar_t *)CONCAT44(local_218._4_4_,1);
      local_210 = (ulonglong)local_210._1_7_ << 8;
      FUN_01a4a040(param_1,&local_c8,*(undefined8 *)(*(longlong *)(param_1 + 0x2960) + 0x18),
                   &local_61);
    }
    else {
      local_218 = (wchar_t *)CONCAT44(local_218._4_4_,2);
      local_210 = CONCAT71(local_210._1_7_,local_62 == '\0');
      FUN_01a4a040(param_1,&local_c8,local_b8,&local_61);
      *(undefined1 *)(param_1 + 0x2b44) = local_61;
      *(char *)(param_1 + 0x2b44) = local_62;
    }
  }
  else {
    FUN_00414480(&local_c8);
    *(undefined1 *)(param_1 + 0x2b44) = 0;
  }
  local_1e0 = FUN_019a4600();
  local_1d8 = FUN_004144d0(&local_100);
  local_1d0 = FUN_004144d0(&local_108);
  uVar5 = FUN_004144d0(&local_110);
  local_1e8 = FUN_004144d0(&local_118);
  uVar6 = FUN_004144d0(&local_120);
  uVar7 = FUN_004144d0(&local_128);
  uVar8 = FUN_004144d0(&local_130);
  local_1f8 = FUN_004144d0(&local_138);
  local_218 = (wchar_t *)local_1e8;
  local_1f0 = 0;
  local_210 = uVar6;
  local_208 = uVar7;
  local_200 = uVar8;
  FUN_0129ace0(local_1e0,local_1d8,local_1d0,uVar5);
  if ((*(int *)(param_1 + 0x930) < 1) || (*(char *)(param_1 + 0x2939) == '\0')) {
    cVar2 = '\0';
  }
  else {
    cVar2 = '\x01';
  }
  local_44 = (uint)(cVar2 != *(char *)(*(longlong *)(param_1 + 0x2968) + 0x74));
  if (*(int *)(param_1 + 0x94c) < 1) {
    cVar2 = FUN_01a53ca0(param_1);
    if (cVar2 == '\0') {
      local_4c = 0;
    }
    else {
      FUN_00414480(&local_d8);
      local_4c = 1;
      local_44 = 1;
    }
  }
  else {
    FUN_00414480(&local_d8);
    local_4c = 1;
  }
  *(uint *)(param_1 + 0x948) = *(uint *)(param_1 + 0x948) | local_44;
  *(undefined1 *)(param_1 + 0x2939) = *(undefined1 *)(*(longlong *)(param_1 + 0x2968) + 0x74);
  FUN_0043e1a0(&local_a8,*(undefined8 *)(PTR_DAT_02004010 + 0xb1));
  *(undefined4 *)(param_1 + 0x2940) = 0;
  if (*(char *)(param_1 + 0x293d) != '\0') {
    *(undefined4 *)(param_1 + 0x2940) = 0;
  }
  *(undefined4 *)(param_1 + 0x2944) = *(undefined4 *)(param_1 + 0x2940);
  local_48 = 0;
  FUN_01a55410(param_1,&local_e8,L"detect_act_findcircuit.txt");
  FUN_01a55680(param_1,&local_d0,L"detect_act_groupedcirc.txt");
  FUN_01a558f0(param_1,&local_78);
  FUN_01a4c570(param_1,&local_b0);
  cVar2 = FUN_01a431f0(param_1);
  local_40 = (uint)(cVar2 != '\0');
  FUN_01a3ca00(&local_158,*(undefined8 *)(*(longlong *)(param_1 + 0x2960) + 0x30),L"tina",L"TINA");
  FUN_00414ad0(*(longlong *)(param_1 + 0x2960) + 0x30,local_158);
  local_218._0_1_ = 1;
  FUN_00450070(&local_160,*(undefined8 *)(*(longlong *)(param_1 + 0x2960) + 0x20),L"%QUESTION%",
               *(undefined8 *)(*(longlong *)(param_1 + 0x2960) + 0x30));
  FUN_00414ad0(*(longlong *)(param_1 + 0x2960) + 0x20,local_160);
  local_218._0_1_ = 1;
  FUN_00450070(&local_168,*(undefined8 *)(*(longlong *)(param_1 + 0x2960) + 0x20),L"%LANGUAGE%",
               *(undefined8 *)(*(longlong *)(param_1 + 0x2960) + 0x28));
  FUN_00414ad0(*(longlong *)(param_1 + 0x2960) + 0x20,local_168);
  local_218 = (wchar_t *)CONCAT71(local_218._1_7_,1);
  FUN_00450070(&local_170,*(undefined8 *)(*(longlong *)(param_1 + 0x2960) + 0x20),
               L"%DCDCMANUFACTURERS%",
               L"Analog Devices,Infineon,Nisshinbo,Semtech,ST,Texas Instruments,Wurth Elektronik");
  FUN_00414ad0(*(longlong *)(param_1 + 0x2960) + 0x20,local_170);
  FUN_01a3e1c0(param_1,L"SaveConfig");
  FUN_00414b50(&local_c0,*(undefined8 *)(*(longlong *)(param_1 + 0x2960) + 8));
  cVar2 = FUN_01a431f0(param_1);
  if (cVar2 == '\0') {
    FUN_00414b50(&local_70,local_c0);
    uVar5 = FUN_00f2e9d0(&LAB_00f22a90,1,local_c0);
    FUN_00f30e70(local_30,L"model_extr",uVar5);
  }
  else {
    local_218 = L"Output should be in English!";
    FUN_00416cd0(*(longlong *)(param_1 + 0x2960) + 0x30,3,
                 *(undefined8 *)(*(longlong *)(param_1 + 0x2960) + 0x30),&DAT_01a44a4c);
    FUN_00414b50(&local_70,*(undefined8 *)(param_1 + 0x2bb8));
    uVar5 = FUN_00f2e9d0(&LAB_00f22a90,1,*(undefined8 *)(param_1 + 0x2bb8));
    FUN_00f30e70(local_30,L"model_extr",uVar5);
    if (*(int *)(param_1 + 0x294c) == 0) {
      FUN_00414b50(&local_c0,*(undefined8 *)(param_1 + 0x2bb8));
    }
  }
  local_58 = (uint)(0 < *(int *)(param_1 + 0x2950));
  iVar3 = FUN_004170c0(L"OpenAI",*(undefined8 *)(*(longlong *)(param_1 + 0x2960) + 0x38),1);
  if ((iVar3 < 1) || (iVar3 = FUN_004170c0(L"gpt-5",local_c0,1), iVar3 < 1)) {
    iVar3 = FUN_004170c0(L"Local",*(undefined8 *)(*(longlong *)(param_1 + 0x2960) + 0x38),1);
    if (iVar3 == 0) {
      local_5c = 1;
    }
    else {
      local_5c = 2;
    }
  }
  else {
    local_5c = 0;
  }
  if (*(char *)(param_1 + 0x2b48) == '\0') {
    local_60 = 0x3ffc;
  }
  else {
    local_60 = 100;
  }
  uVar5 = FUN_00f2f8e0(&LAB_00f22f08,1,local_40);
  FUN_00f30e70(local_30,L"model_ds",uVar5);
  uVar5 = FUN_00f2e9d0(&LAB_00f22a90,1,local_c0);
  FUN_00f30e70(local_30,L"model",uVar5);
  uVar5 = FUN_00f2e9d0(&LAB_00f22a90,1,*(undefined8 *)(*(longlong *)(param_1 + 0x2960) + 0x38));
  FUN_00f30e70(local_30,L"model_family",uVar5);
  uVar5 = FUN_00f2e9d0(&LAB_00f22a90,1,*(undefined8 *)(*(longlong *)(param_1 + 0x2960) + 0x40));
  FUN_00f30e70(local_30,L"base_url",uVar5);
  FUN_01a5a520(param_1,&local_178);
  uVar5 = FUN_00f2e9d0(&LAB_00f22a90,1,local_178);
  FUN_00f30e70(local_30,L"interface",uVar5);
  uVar5 = FUN_00f2f8e0(&LAB_00f22f08,1,local_48);
  FUN_00f30e70(local_30,L"circuit_question",uVar5);
  uVar4 = FUN_01b218a0(*(undefined1 *)(param_1 + 0x293d));
  uVar5 = FUN_00f2f8e0(&LAB_00f22f08,1,uVar4);
  FUN_00f30e70(local_30,L"circuit_from_picture",uVar5);
  local_218 = (wchar_t *)CONCAT71(local_218._1_7_,1);
  FUN_00450070(&local_180,*(undefined8 *)(param_1 + 0x2b38),&DAT_01a44c30,&DAT_01a44c40);
  uVar5 = FUN_00f2e9d0(&LAB_00f22a90,1,local_180);
  FUN_00f30e70(local_30,L"circuit_picture",uVar5);
  uVar4 = FUN_01b218a0(*(undefined1 *)(param_1 + 0x293d));
  uVar5 = FUN_00f2f8e0(&LAB_00f22f08,1,uVar4);
  FUN_00f30e70(local_30,L"spicenetlist",uVar5);
  uVar5 = FUN_00f2e9d0(&LAB_00f22a90,1,local_a8);
  FUN_00f30e70(local_30,L"circuit_name",uVar5);
  FUN_00416880(&local_188,local_110);
  uVar5 = FUN_00f2e9d0(&LAB_00f22a90,1,local_188);
  FUN_00f30e70(local_30,L"circuit_component_names",uVar5);
  FUN_00416880(&local_190,local_138);
  uVar5 = FUN_00f2e9d0(&LAB_00f22a90,1,local_190);
  FUN_00f30e70(local_30,L"circuit_component_ids",uVar5);
  uVar5 = FUN_00f2f8e0(&LAB_00f22f08,1,*(undefined4 *)(param_1 + 0x2940));
  FUN_00f30e70(local_30,L"streaming",uVar5);
  uVar5 = FUN_00f2f8e0(&LAB_00f22f08,1,*(undefined4 *)(*(longlong *)(param_1 + 0x2960) + 0x48));
  FUN_00f30e70(local_30,L"history_size",uVar5);
  uVar4 = FUN_01a5a510(param_1);
  uVar5 = FUN_00f2f8e0(&LAB_00f22f08,1,uVar4);
  FUN_00f30e70(local_30,L"port",uVar5);
  uVar5 = FUN_00f2e9d0(&LAB_00f22a90,1,*(undefined8 *)(param_1 + 0x898));
  FUN_00f30e70(local_30,L"host",uVar5);
  uVar5 = FUN_00f2f8e0(&LAB_00f22f08,1,0);
  FUN_00f30e70(local_30,L"print_to_console",uVar5);
  uVar5 = FUN_00f2f8e0(&LAB_00f22f08,1,local_60);
  FUN_00f30e70(local_30,L"max_tokens_stream",uVar5);
  uVar5 = FUN_00f2f8e0(&LAB_00f22f08,1,*(undefined4 *)(param_1 + 0x948));
  FUN_00f30e70(local_30,L"clear_history",uVar5);
  uVar5 = FUN_00f2f8e0(&LAB_00f22f08,1,local_4c);
  FUN_00f30e70(local_30,L"spec_command",uVar5);
  uVar5 = FUN_00f2f8e0(&LAB_00f22f08,1,local_50);
  FUN_00f30e70(local_30,L"run_intent",uVar5);
  uVar5 = FUN_00f2f8e0(&LAB_00f22f08,1,local_58);
  FUN_00f30e70(local_30,L"has_gpu",uVar5);
  uVar5 = FUN_00f2e9d0(&LAB_00f22a90,1,*(undefined8 *)(param_1 + 0x818));
  FUN_00f30e70(local_30,&DAT_01a44e7c,uVar5);
  uVar5 = FUN_00f2f8e0(&LAB_00f22f08,1,0);
  FUN_00f30e70(local_30,L"tb_mode",uVar5);
  uVar5 = FUN_00f2f8e0(&LAB_00f22f08,1,*(undefined4 *)(*(longlong *)(param_1 + 0x2968) + 0xa0));
  FUN_00f30e70(local_30,L"extr_instr",uVar5);
  uVar5 = FUN_00f2e9d0(&LAB_00f22a90,1,*(undefined8 *)(*(longlong *)(param_1 + 0x2960) + 0x20));
  FUN_00f30e70(local_30,L"question",uVar5);
  uVar5 = FUN_00f2e9d0(&LAB_00f22a90,1,*(undefined8 *)(*(longlong *)(param_1 + 0x2960) + 0x30));
  FUN_00f30e70(local_30,L"actual_question",uVar5);
  uVar5 = FUN_00f2f8e0(&LAB_00f22f08,1,local_5c);
  FUN_00f30e70(local_30,L"response_format",uVar5);
  uVar5 = FUN_00f2e9d0(&LAB_00f22a90,1,local_c8);
  FUN_00f30e70(local_30,L"instructions",uVar5);
  uVar5 = FUN_00f2e9d0(&LAB_00f22a90,1,local_d8);
  FUN_00f30e70(local_30,L"instructions2",uVar5);
  uVar5 = FUN_00f2f8e0(&LAB_00f22f08,1,*(undefined4 *)(*(longlong *)(param_1 + 0x2968) + 0x58));
  FUN_00f30e70(local_30,L"find_circ_llm",uVar5);
  uVar5 = FUN_00f2e9d0(&LAB_00f22a90,1,local_e8);
  FUN_00f30e70(local_30,L"find_circ",uVar5);
  uVar5 = FUN_00f2e9d0(&LAB_00f22a90,1,local_b0);
  FUN_00f30e70(local_30,L"find_circ_list",uVar5);
  uVar5 = FUN_00f2e9d0(&LAB_00f22a90,1,local_d0);
  FUN_00f30e70(local_30,L"group_circ",uVar5);
  uVar5 = FUN_00f2e9d0(&LAB_00f22a90,1,local_78);
  FUN_00f30e70(local_30,L"group_circ_simple",uVar5);
  FUN_00414b50(&local_e0,L"ollama");
  lVar1 = *(longlong *)(param_1 + 0x2960);
  iVar3 = FUN_00416db0(*(undefined8 *)(lVar1 + 0x38),L"OpenAI");
  if (iVar3 == 0) {
    FUN_00414b50(&local_f0,L"OPENAI_API_KEY");
  }
  else {
    iVar3 = FUN_00416db0(*(undefined8 *)(*(longlong *)(param_1 + 0x2960) + 0x38),L"GROQ");
    if (iVar3 == 0) {
      FUN_00414b50(&local_f0,L"GROQ_API_KEY");
    }
    else {
      iVar3 = FUN_00416db0(*(undefined8 *)(*(longlong *)(param_1 + 0x2960) + 0x38),L"OpenRouter");
      if (iVar3 == 0) {
        FUN_00414b50(&local_f0,L"OPENROUTER_API_KEY");
      }
      else {
        cVar2 = FUN_01a3c370(lVar1);
        if (cVar2 == '\0') {
          FUN_00414480(&local_f0);
        }
        else {
          FUN_00414b50(&local_f0,L"OLLAMA_API_KEY");
        }
      }
    }
  }
  if (local_f0 != 0) {
    FUN_01a50fe0(param_1,local_f0,&local_e0);
  }
  iVar3 = FUN_00416db0(*(undefined8 *)(*(longlong *)(param_1 + 0x2960) + 0x38),L"Free");
  if (iVar3 == 0) {
    FUN_0147c530(&local_e0);
  }
  uVar5 = FUN_00f2e9d0(&LAB_00f22a90,1,local_e0);
  FUN_00f30e70(local_30,L"api_key",uVar5);
  uVar5 = FUN_00f2e9d0(&LAB_00f22a90,1,L"nomic-embed-text");
  FUN_00f30e70(local_30,L"embeddings",uVar5);
  iVar3 = FUN_00416db0(*(undefined8 *)(*(longlong *)(param_1 + 0x2960) + 0x38),L"Local");
  if ((iVar3 != 0) && (local_e0 == 0)) {
    local_1a8 = *(undefined8 *)(*(longlong *)(param_1 + 0x2960) + 0x38);
    local_1a0 = 0x11;
    FUN_00442f70(&local_198,L"%s: please ensure the API key is set up!",&local_1a8,0);
    uVar5 = FUN_0044d490(&PTR_FUN_004334c0,1,local_198);
    FUN_004134c0(uVar5);
  }
  local_f8 = FUN_00f33100(&LAB_00f256b8,1);
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x8f0) + 0x28))();
  local_3c = 0;
  if (-1 < iVar3 + -1) {
    do {
      (**(code **)(**(longlong **)(param_1 + 0x8f0) + 0x18))
                (*(longlong **)(param_1 + 0x8f0),&local_1b0,local_3c);
      FUN_00f33630(local_f8,local_1b0);
      local_3c = local_3c + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00f30e70(local_30,L"links",local_f8);
  FUN_00f2d1d0(local_30,&local_88);
  local_218 = (wchar_t *)CONCAT71(local_218._1_7_,1);
  FUN_00450070(&local_1b8,local_88,L"$slash$",&DAT_01a44c40);
  FUN_00414b50(&local_88,local_1b8);
  (**(code **)(*local_38 + 0x78))(local_38,local_88);
  local_218 = L"config.json";
  FUN_00416cd0(&local_1c0,3,*(undefined8 *)(param_1 + 0x2ba0),&DAT_01a44c30);
  (**(code **)(*local_38 + 0x100))(local_38,local_1c0);
  local_218 = L"config-2.json";
  FUN_00416cd0(&local_1c8,3,*(undefined8 *)(param_1 + 0x2ba0),&DAT_01a44c30);
  (**(code **)(*local_38 + 0x100))(local_38,local_1c8);
  *(undefined4 *)(param_1 + 0x948) = 0;
  FUN_00410f20(local_30);
  FUN_00410f20(local_38);
  FUN_00414560(&local_1c8,4);
  FUN_00414560(&local_198,9);
  FUN_00414590(&local_138,8);
  FUN_00414560(&local_f0,0x11);
  return;
}


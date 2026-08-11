/* Ghidra address: 019bd5f0 */
/* Ghidra symbol: FUN_019bd5f0 */


undefined8
FUN_019bd5f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            longlong param_5,longlong param_6,longlong param_7,char param_8,char param_9,
            uint param_10,undefined8 param_11)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_318 [32];
  undefined4 *local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  char *local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined1 local_2c8;
  undefined4 *local_2c0;
  undefined1 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined1 local_298;
  undefined4 *local_290;
  undefined1 local_288;
  undefined8 local_280;
  undefined1 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined1 local_250;
  undefined8 local_248;
  wchar_t *local_240;
  undefined8 local_238;
  undefined1 *local_230;
  longlong local_228;
  char local_219;
  longlong local_218;
  longlong local_210;
  undefined8 local_208;
  undefined8 local_200;
  bool local_1f1;
  wchar_t *local_1f0;
  undefined8 local_1e8;
  undefined8 local_1d0;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  longlong local_190;
  longlong local_188;
  undefined4 local_178;
  undefined4 uStack_174;
  char local_16e;
  undefined1 local_16d;
  char local_16c;
  byte local_16b;
  undefined1 local_16a [26];
  undefined8 local_150;
  undefined8 local_140;
  undefined8 local_138;
  longlong local_130;
  undefined8 local_128;
  longlong local_120;
  longlong local_118;
  undefined8 local_110;
  int local_108;
  int local_104;
  int local_100;
  int local_f0;
  int local_ec;
  int local_e8;
  undefined4 local_e4;
  int local_e0;
  undefined8 local_d8 [2];
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
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 *local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_230 = auStack_318;
  local_2d8 = 0;
  local_2b0 = 0;
  local_2a8 = 0;
  local_270 = 0;
  local_268 = 0;
  local_260 = 0;
  local_248 = 0;
  local_240 = (wchar_t *)0x0;
  local_238 = 0;
  local_30[0] = 0;
  local_38 = (undefined4 *)0x0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
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
  local_190 = 0;
  local_20 = 0;
  FUN_00414610(param_5);
  FUN_00419260(&local_190,&DAT_019bd598,1,1);
  FUN_00414480(param_2);
  local_16b = (param_10 & 1) != 0;
  local_16c = (param_10 & 2) != 0;
  if (((bool)local_16b) && (param_5 == 0)) {
    local_16d = 1;
  }
  else {
    local_16d = 0;
  }
  local_110 = FUN_0147cfb0(param_4,L"circuit");
  FUN_0147cfb0(local_110,L"components");
  local_120 = FUN_0147cfb0(local_110,L"wires");
  local_118 = FUN_0147cfb0(local_110,L"components");
  local_1d0 = FUN_00f33100(&LAB_00f256b8,1);
  iVar6 = *(int *)(*(longlong *)(local_118 + 0x10) + 0x10);
  local_e8 = 0;
  if (-1 < iVar6 + -1) {
    do {
      uVar4 = FUN_00f33510(local_118,local_e8);
      uVar4 = FUN_00f31350(uVar4);
      local_1e8 = FUN_004113f0(uVar4,&LAB_00f23b78);
      FUN_00f335b0(local_1d0,local_1e8);
      local_e8 = local_e8 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  local_1a8 = FUN_0147cfb0(local_110,L"metadata");
  if ((local_1a8 == 0) || (cVar1 = FUN_004113d0(local_1a8,&LAB_00f23b78), cVar1 == '\0')) {
    local_188 = 0;
  }
  else {
    local_188 = local_1a8;
  }
  if ((((local_16b & *(char *)(param_1 + 0x20) == '\0') != 0) && (param_9 == '\0')) &&
     (local_188 != 0)) {
    FUN_0147cd40(local_188,L"circuit_name",&local_68);
    local_2f8 = (undefined4 *)CONCAT71(local_2f8._1_7_,1);
    FUN_00450070(&local_238,local_68,&DAT_019bea14,&DAT_019bea24);
    FUN_00414b50(&local_68,local_238);
    cVar1 = FUN_00440a20(local_68,1);
    if (cVar1 != '\0') {
      FUN_00441a10(&local_240,local_68);
      local_1f0 = local_240;
      if (local_240 == L".tsc") {
        local_1f1 = true;
      }
      else if (local_240 == (wchar_t *)0x0) {
        local_1f1 = false;
      }
      else {
        iVar6 = FUN_0043e420(local_240,L".tsc");
        local_1f1 = iVar6 == 0;
      }
      if (local_1f1 != false) {
        uVar4 = FUN_0198b200(0,&PTR_FUN_01984d18,1,0);
        *(undefined8 *)(param_1 + 0x18) = uVar4;
        local_2f8 = (undefined4 *)((ulonglong)local_2f8 & 0xffffffffffffff00);
        lVar5 = FUN_014a74d0(local_68,*(undefined8 *)(param_1 + 0x18),0,0);
        if (lVar5 == 0) {
          local_258 = local_68;
          local_250 = 0x11;
          FUN_00442f70(&local_248,L"File not found: %s",&local_258,0);
          local_200 = local_248;
          local_2f8 = (undefined4 *)CONCAT44(local_2f8._4_4_,0xffffffff);
          local_2f0 = CONCAT44(local_2f0._4_4_,0xffffffff);
          local_2e8 = 0;
          FUN_0072d5c0(local_248,1,4,0);
        }
      }
    }
  }
  uVar4 = FUN_00498310(0,0);
  *(undefined8 *)(param_1 + 0x24) = uVar4;
  uVar4 = FUN_00498310(0,0);
  *(undefined8 *)(param_1 + 0x2c) = uVar4;
  if (((local_188 != 0) && (local_1a8 = FUN_0147cfb0(local_188,L"bounds"), local_1a8 != 0)) &&
     (cVar1 = FUN_004113d0(local_1a8,&LAB_00f23b78), cVar1 != '\0')) {
    uVar3 = FUN_01486270(local_1a8,L"x_min");
    *(undefined4 *)(param_1 + 0x24) = uVar3;
    uVar3 = FUN_01486270(local_1a8,L"y_min");
    *(undefined4 *)(param_1 + 0x28) = uVar3;
    uVar3 = FUN_01486270(local_1a8,L"x_max");
    *(undefined4 *)(param_1 + 0x2c) = uVar3;
    uVar3 = FUN_01486270(local_1a8,L"y_max");
    *(undefined4 *)(param_1 + 0x30) = uVar3;
  }
  if ((local_188 != 0) && (param_6 != 0)) {
    local_2f8 = (undefined4 *)CONCAT71(local_2f8._1_7_,1);
    FUN_00450070(&local_260,param_5,&DAT_019bea24,&DAT_019bea14);
    FUN_00f30ec0(local_188,L"circuit_name",local_260);
    FUN_00f30ec0(local_188,L"model",*(undefined8 *)(param_6 + 8));
    FUN_00414480(&local_20);
    local_208 = FUN_00448ed0();
    FUN_0044a3a0(&local_20,L"yyyy-mm-dd hh:nn:ss",local_208,PTR_DAT_02004830);
    FUN_00f30ec0(local_188,L"timestamp",local_20);
    FUN_00414480(&local_20);
    FUN_01483a50(&local_268,param_11);
    FUN_00f30ec0(local_188,L"conv_time",local_268);
  }
  if (param_7 != 0) {
    local_150 = FUN_004113f0(local_110,&LAB_00f23b78);
    lVar5 = FUN_00f30cb0(local_150,L"graph");
    if (lVar5 != 0) {
      FUN_00f31ff0(local_150,L"graph");
    }
    uVar4 = FUN_00f30cb0(param_7,L"graph");
    uVar4 = FUN_004113f0(uVar4,&LAB_00f23b78);
    FUN_00f30e70(local_150,L"graph",uVar4);
  }
  local_130 = local_118;
  iVar6 = FUN_0147cc90(local_118);
  local_e8 = 0;
  local_e0 = iVar6;
  if (-1 < iVar6 + -1) {
    do {
      local_138 = FUN_0147ccf0(local_130,local_e8);
      FUN_0147cd40(local_138,&PTR_DAT_019beba4,&local_b0);
      FUN_0147cd40(local_138,L"type",&local_a0);
      FUN_0147cd40(local_138,L"value",&local_a8);
      local_1a0 = FUN_0147cfb0(local_138,L"pins");
      local_e4 = FUN_0147ccb0(local_1a0);
      local_1b0 = FUN_00f30cb0(local_138,L"orientation");
      local_100 = -1;
      cVar1 = FUN_0147cea0(local_1b0,L"angle",&local_60);
      if (cVar1 != '\0') {
        local_100 = FUN_0043fc00(local_60);
      }
      cVar1 = FUN_0147cea0(local_1b0,L"mirrored",&local_60);
      if (cVar1 != '\0') {
        uVar2 = FUN_0043fe80(local_60);
        *(undefined1 *)(param_1 + 8) = uVar2;
      }
      cVar1 = FUN_0147cea0(local_1b0,L"direction",&local_60);
      if (cVar1 != '\0') {
        uVar2 = FUN_0043fc00(local_60);
        *(undefined1 *)(param_1 + 9) = uVar2;
      }
      if (local_16b != 0) {
        FUN_019bbd80(local_138,param_1 + 0x24,&local_178);
        FUN_019bbea0(local_138,local_d8,&local_a8,local_16a);
        local_1c0 = 0;
        cVar1 = FUN_0147dbf0(local_a0,local_e4,local_a8,&local_104);
        if (cVar1 == '\0') {
          cVar1 = FUN_0147dbf0(local_a8,local_e4,local_a8,&local_104);
          if (cVar1 != '\0') {
            local_2f8 = &local_178;
            local_2f0 = local_d8[0];
            local_2e8 = CONCAT71(local_2e8._1_7_,local_16a[0]);
            local_2e0 = &local_16e;
            local_1c0 = FUN_019bd400(param_1,param_3,local_104,local_b0);
          }
        }
        else {
          local_2f8 = &local_178;
          local_2f0 = local_d8[0];
          local_2e8 = CONCAT71(local_2e8._1_7_,local_16a[0]);
          local_2e0 = &local_16e;
          local_1c0 = FUN_019bd400(param_1,param_3,local_104,local_b0);
        }
        if (local_1c0 == 0) {
          local_2a0 = local_a0;
          local_298 = 0x11;
          local_290 = (undefined4 *)CONCAT44(local_290._4_4_,local_e8 + 1);
          local_288 = 0;
          local_280 = CONCAT44(local_280._4_4_,local_e0);
          local_278 = 0;
          FUN_00442f70(&local_270,L"component \"%s\" (%d of %d): can not convert",&local_2a0,2);
          (**(code **)(**(longlong **)(param_1 + 0x38) + 0x78))
                    (*(longlong **)(param_1 + 0x38),local_270);
        }
        else if ((local_16e == '\0') || (*(char *)(param_1 + 0x21) != '\0')) {
          if (local_100 < 0) {
            *(undefined1 *)(local_1c0 + 0xd3) = *(undefined1 *)(param_1 + 8);
            *(undefined1 *)(local_1c0 + 0xd1) = *(undefined1 *)(param_1 + 9);
          }
          else {
            *(undefined1 *)(param_1 + 9) = 0;
            if (local_100 == 0x5a) {
              if (local_104 == 0xe) {
                *(undefined1 *)(param_1 + 9) = 3;
              }
              else if (local_104 != 5) {
                *(undefined1 *)(param_1 + 9) = 3;
              }
            }
            *(undefined1 *)(local_1c0 + 0xd1) = *(undefined1 *)(param_1 + 9);
          }
        }
      }
      local_e8 = local_e8 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if ((param_8 != '\0') && (local_120 != 0)) {
    local_130 = local_120;
    iVar6 = FUN_0147cc90(local_120);
    local_e8 = 0;
    local_e0 = iVar6;
    if (-1 < iVar6 + -1) {
      do {
        local_128 = FUN_0147ccf0(local_130,local_e8);
        local_140 = FUN_0147cfb0(local_128,L"polyline");
        local_ec = FUN_0147cc90(local_140);
        local_108 = 0;
        local_210 = local_190;
        if (local_190 != 0) {
          local_210 = *(longlong *)(local_190 + -8);
        }
        FUN_00419260(&local_190,&DAT_019bd598,1,local_210 + local_ec);
        local_f0 = 0;
        iVar7 = local_ec;
        if (-1 < local_ec + -1) {
          do {
            local_138 = FUN_0147ccf0(local_140,local_f0);
            FUN_0147cd40(local_138,&DAT_019bed00,&local_b8);
            FUN_0147cd40(local_138,&DAT_019bed10,&local_c0);
            local_178 = FUN_0043fc00(local_b8);
            uStack_174 = FUN_0043fc00(local_c0);
            *(ulonglong *)(local_190 + (longlong)local_108 * 8) = CONCAT44(uStack_174,local_178);
            local_108 = local_108 + 1;
            local_f0 = local_f0 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        if (local_ec == 2) {
          local_218 = local_190;
          if (local_190 != 0) {
            local_218 = *(longlong *)(local_190 + -8);
          }
          local_219 = FUN_019bc130(local_190,local_218 + -1);
        }
        else {
          local_219 = '\0';
        }
        if ((local_219 == '\0') && ((local_16b & 1 < local_ec) != 0)) {
          local_228 = local_190;
          if (local_190 != 0) {
            local_228 = *(longlong *)(local_190 + -8);
          }
          local_1b8 = FUN_019bbfe0(param_3,local_190,local_228 + -1,local_108);
          FUN_004ae7e0(*(undefined8 *)(param_1 + 0x40),local_1b8);
        }
        local_e8 = local_e8 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  if (local_16c != '\0') {
    FUN_00414480(local_30);
    if (param_6 != 0) {
      cVar1 = FUN_0147d3c0(*(undefined8 *)(param_6 + 8),L"gpt-5");
      if (cVar1 == '\0') {
        cVar1 = FUN_0147d3c0(*(undefined8 *)(param_6 + 8),L"qwen3-vl");
        if ((cVar1 == '\0') ||
           (cVar1 = FUN_0147d3c0(*(undefined8 *)(param_6 + 8),L"cloud"), cVar1 == '\0')) {
          cVar1 = FUN_0147d3c0(*(undefined8 *)(param_6 + 8),L"qwen-vl");
          if ((cVar1 != '\0') &&
             (cVar1 = FUN_0147d3c0(*(undefined8 *)(param_6 + 0x38),L"OpenRouter"), cVar1 != '\0')) {
            FUN_00414b50(local_30,L"openrouter-qwen-vl");
          }
        }
        else {
          FUN_00414b50(local_30,L"ollama-cloud-qwen-vl");
        }
      }
      else {
        FUN_00414b50(local_30,L"gpt-5");
      }
    }
    if (param_9 == '\0') {
      FUN_00414480(&local_98);
    }
    else {
      FUN_00414b50(&local_98,L"ext-");
    }
    if (param_5 == 0) {
      local_258 = local_30[0];
      local_250 = 0x11;
      FUN_00442f70(&local_48,L"circuit-from-picture-%s.json",&local_258,0);
    }
    else {
      FUN_00441920(&local_2a8,param_5);
      FUN_0147d310(&local_38,local_2a8);
      local_2a0 = local_98;
      local_298 = 0x11;
      local_290 = local_38;
      local_288 = 0x11;
      local_280 = local_30[0];
      local_278 = 0x11;
      FUN_00442f70(&local_48,L"circuit-from-picture-%s%s-%s.json",&local_2a0,2);
      local_2d0 = local_98;
      local_2c8 = 0x11;
      local_2c0 = local_38;
      local_2b8 = 0x11;
      FUN_00442f70(&local_2b0,L"circuit-from-picture-1-%s%s.json",&local_2d0,1);
      FUN_00414b50(&local_38,local_2b0);
    }
    FUN_00416ba0(&local_50,*(undefined8 *)PTR_DAT_02005010,L"\\VhdlSession0\\Converted\\");
    FUN_00416ba0(&local_68,local_50,local_48);
    local_150 = FUN_00f309b0(&LAB_00f23b78,1);
    uVar4 = FUN_004113f0(local_110,&LAB_00f23b78);
    FUN_00f30e70(local_150,L"circuit",uVar4);
    FUN_0147ff10(local_150);
    local_2f8 = local_38;
    FUN_00416cd0(&local_2d8,3,*(undefined8 *)PTR_DAT_02005010,L"\\VhdlSession0\\Temp\\");
    FUN_0147d210(local_2d8,local_150);
    uVar4 = FUN_004113f0(local_110,&LAB_00f23b78);
    FUN_0147f7b0(uVar4,0);
    uVar4 = FUN_004113f0(local_110,&LAB_00f23b78);
    FUN_019bc2b0(uVar4);
    FUN_0147d210(local_68,local_150);
    FUN_00414ad0(param_2,local_68);
  }
  FUN_01ca2aa0(*(undefined8 *)PTR_DAT_02004e40);
  FUN_00414480(&local_2d8);
  FUN_00414560(&local_2b0,2);
  FUN_00414560(&local_270,3);
  FUN_00414560(&local_248,3);
  FUN_00419430(&local_190,&DAT_019bd598);
  FUN_00414560(&local_c8,0x14);
  FUN_00414480(&local_20);
  FUN_00414480(&param_5);
  return param_2;
}


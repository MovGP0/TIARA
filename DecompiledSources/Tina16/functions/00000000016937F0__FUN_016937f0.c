/* Ghidra address: 016937f0 */
/* Ghidra symbol: FUN_016937f0 */


void FUN_016937f0(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_2a8 [32];
  longlong *local_288;
  undefined8 local_280;
  undefined8 *local_278;
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
  longlong local_200;
  undefined8 local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined1 local_1d0 [256];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 *local_c0;
  undefined8 local_b8;
  bool local_a9;
  undefined8 local_a8;
  bool local_99;
  undefined8 local_98;
  bool local_89;
  undefined8 local_88;
  undefined8 local_80 [2];
  undefined8 local_70;
  int local_64;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong *local_20;
  
  local_c0 = auStack_2a8;
  local_260 = 0;
  local_268 = 0;
  local_250 = 0;
  local_258 = 0;
  local_240 = 0;
  local_248 = 0;
  local_230 = 0;
  local_238 = 0;
  local_220 = 0;
  local_228 = 0;
  local_210 = 0;
  local_218 = 0;
  local_1f0 = 0;
  local_200 = 0;
  local_208 = 0;
  local_1f8 = 0;
  local_1e8 = 0;
  local_1e0 = 0;
  local_d0 = 0;
  local_1d8 = 0;
  local_c8 = 0;
  local_58 = 0;
  local_80[0] = 0;
  local_38 = FUN_004b6930(&PTR_FUN_00478280,1);
  local_28 = FUN_01d34560(&PTR_FUN_016a2078,1,10,10);
  local_30 = (longlong *)FUN_01d34560(&PTR_FUN_016a2078,1,10,10);
  plVar4 = local_30;
  if ((param_3 == (longlong *)0x0) || (plVar4 = param_3, param_3 == param_2)) {
    uVar2 = (undefined4)CONCAT71((int7)((ulonglong)plVar4 >> 8),1);
  }
  else {
    uVar2 = 0;
  }
  FUN_01693380(auStack_2a8,param_2[0x87],local_28,uVar2);
  if ((param_3 != (longlong *)0x0) && (param_3 != param_2)) {
    FUN_01693380(auStack_2a8,param_3[0x87],local_30,1);
    if ((param_4 != 0) && (cVar1 = FUN_01d04d50(param_4), cVar1 != '\0')) {
      local_70 = *(undefined8 *)(*(longlong *)(param_4 + 0x1a8) + 0xc0);
      uVar5 = FUN_0177aa70(local_70);
      local_20 = (longlong *)FUN_0177ae90(uVar5);
      while (cVar1 = thunk_FUN_0177b033(local_20), cVar1 != '\0') {
        FUN_0177aee0(local_20,&local_c8);
        FUN_00416880(&local_58,local_c8);
        FUN_0043ea00(&local_d0,local_58);
        FUN_00416910(local_1d0,local_d0,0xff);
        FUN_00415dd0(&local_1d8,local_58,0);
        uVar5 = FUN_01779a20(local_70,local_1d8);
        FUN_013b3340(*(undefined8 *)(param_1 + 0x1d8),local_1d0,uVar5);
        FUN_0043e130(&local_1e0,local_58);
        FUN_00416910(local_1d0,local_1e0,0xff);
        local_48 = FUN_016a61f0(&PTR_FUN_016a1ed0,1,local_1d0,0);
        FUN_004144d0(local_48 + 0x10);
        FUN_00415dd0(&local_1e8,local_58,0);
        uVar5 = FUN_01779a20(local_70,local_1e8);
        *(undefined8 *)(local_48 + 0x28) = uVar5;
        (**(code **)(*local_30 + 0x50))(local_30,local_48);
      }
      if (local_20 != (longlong *)0x0) {
        (**(code **)(*local_20 + -0x20))(local_20,1);
      }
    }
  }
  if ((param_3 == (longlong *)0x0) || (param_3 == param_2)) {
    local_40 = (longlong *)param_2[0x87];
  }
  else {
    local_40 = (longlong *)param_3[0x87];
  }
  iVar3 = (**(code **)(*local_40 + 0x28))();
  local_64 = 0;
  if (-1 < iVar3 + -1) {
    do {
      FUN_004b3cf0(local_40,&local_1f8,local_64);
      FUN_0043ea00(&local_1f0,local_1f8);
      if (local_1f0 == 0) {
LAB_01693cfc:
        local_89 = false;
      }
      else {
        FUN_004b5390(local_40,&local_208,local_64);
        FUN_0043ea00(&local_200,local_208);
        if (local_200 == 0) goto LAB_01693cfc;
        FUN_004b5390(local_40,&local_218,local_64);
        FUN_0043ea00(&local_210,local_218);
        local_88 = local_210;
        cVar1 = FUN_005b8460(&DAT_016940e4,local_210);
        local_89 = cVar1 == '\0';
      }
      if (local_89 == false) {
        local_99 = false;
      }
      else {
        FUN_004b5390(local_40,&local_228,local_64);
        FUN_0043ea00(&local_220,local_228);
        local_98 = local_220;
        cVar1 = FUN_005b8460(&DAT_016940f4,local_220);
        local_99 = cVar1 == '\0';
      }
      if (local_99 == false) {
        local_a9 = false;
      }
      else {
        FUN_004b5390(local_40,&local_238,local_64);
        FUN_0043ea00(&local_230,local_238);
        local_a8 = local_230;
        cVar1 = FUN_005b84e0(&DAT_016940e4,local_230);
        local_a9 = cVar1 == '\0';
      }
      if (local_a9 != false) {
        FUN_004b5390(local_40,&local_248,local_64);
        FUN_0043ea00(&local_240,local_248);
        local_b8 = local_240;
        cVar1 = FUN_005b84e0(&DAT_016940f4,local_240);
        if (cVar1 == '\0') {
          FUN_004b5390(local_40,&local_258,local_64);
          FUN_0043ea00(local_80,local_258);
          local_288 = (longlong *)CONCAT71(local_288._1_7_,1);
          FUN_00456a50(local_80,&local_250,&DAT_01694104,0);
          local_288 = local_30;
          local_280 = local_38;
          local_278 = &local_50;
          cVar1 = FUN_016931e0(param_1,param_2[0x91],local_250);
          if (cVar1 != '\0') {
            FUN_004b3cf0(local_40,&local_268,local_64);
            FUN_0043ea00(&local_260,local_268);
            FUN_00416910(local_1d0,local_260,0xff);
            local_60 = FUN_013b3e30(*(undefined8 *)(param_1 + 0x1d8),local_1d0,9);
            if (local_60 != 0) {
              *(undefined8 *)(local_60 + 0x238) = local_50;
            }
          }
        }
      }
      local_64 = local_64 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00410f20(local_28);
  FUN_00410f20(local_30);
  FUN_00410f20(local_38);
  FUN_00414560(&local_268,0x10);
  FUN_004144d0(&local_1e8);
  FUN_00414480(&local_1e0);
  FUN_004144d0(&local_1d8);
  FUN_00414480(&local_d0);
  FUN_004144d0(&local_c8);
  FUN_00414480(local_80);
  FUN_00414480(&local_58);
  return;
}


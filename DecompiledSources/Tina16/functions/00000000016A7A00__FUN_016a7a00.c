/* Ghidra address: 016a7a00 */
/* Ghidra symbol: FUN_016a7a00 */


undefined1 FUN_016a7a00(longlong param_1,byte *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  byte *pbVar8;
  undefined1 auStack_258 [32];
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined1 local_220;
  undefined1 local_218;
  undefined8 local_210;
  undefined1 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined1 *local_1a0;
  longlong local_190;
  longlong local_188;
  int local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined4 local_164;
  longlong local_160;
  char local_152;
  bool local_151;
  byte local_150 [256];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_30;
  
  local_1a0 = auStack_258;
  local_1e0 = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1b8 = 0;
  local_1c0 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_178 = 0;
  lVar7 = (ulonglong)*param_2 + 1;
  pbVar8 = local_150;
  for (; lVar7 != 0; lVar7 = lVar7 + -1) {
    *pbVar8 = *param_2;
    param_2 = param_2 + 1;
    pbVar8 = pbVar8 + 1;
  }
  puVar2 = auStack_258;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_004169a0(&local_1a8,local_150);
    iVar4 = FUN_004170c0(&DAT_016a81ac,local_1a8,1);
    puVar2 = local_1a0;
    if (iVar4 == 0) {
      FUN_004169a0(&local_1b0,local_150);
      iVar4 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0xb0))
                        (*(longlong **)(param_1 + 0x68),local_1b0);
      puVar2 = local_1a0;
      if (-1 < iVar4) {
        lVar7 = *(longlong *)(param_1 + 0x58);
        if (lVar7 == 0) {
          uVar6 = FUN_00b89270();
          FUN_0041ddd0(&local_1c8,&PTR_PTR_016a35c0);
          FUN_00b8e650(uVar6,&local_178,L"MyParser.RecursiveParamCall",local_1c8);
          FUN_004169a0(&local_1d0,local_150);
          uVar5 = FUN_004170c0(&LAB_016a8200,local_178,1);
          FUN_00416ea0(local_1d0,&local_178,uVar5);
          uVar5 = FUN_004170c0(&LAB_016a8200,local_178,1);
          FUN_00416e20(&local_178,uVar5,1);
          uVar6 = FUN_0044d490(&PTR_FUN_0169f798,1,local_178);
          FUN_004134c0(uVar6);
          puVar2 = local_1a0;
        }
        else {
          uVar6 = FUN_00b89270();
          FUN_0041ddd0(&local_1c0,&PTR_PTR_016a35c0);
          FUN_00b8e650(uVar6,&local_1b8,L"MyParser.RecursiveParamCall",local_1c0);
          FUN_016a3c50(*(undefined8 *)(lVar7 + 0x10),local_1b8,local_150,0xffffffff);
          puVar2 = local_1a0;
        }
      }
    }
  }
  local_1a0 = puVar2;
  local_30 = 0;
  local_152 = '\0';
  if ((((*(longlong *)(param_1 + 8) != 0) &&
       (local_152 = FUN_01d350f0(*(longlong *)(param_1 + 8),local_150,&local_164), local_152 != '\0'
       )) && (local_30 = FUN_01d347d0(*(undefined8 *)(param_1 + 8),local_164),
             *(char *)(local_30 + 0x38) != '\0')) &&
     (*param_3 = *(undefined8 *)(local_30 + 0x28), *(longlong *)(param_1 + 0x18) != 0)) {
    local_188 = 0;
    local_190 = *(longlong *)(param_1 + 0x18);
    iVar4 = *(int *)(local_190 + 0x10);
    local_180 = 0;
    if (-1 < iVar4 + -1) {
      do {
        uVar6 = FUN_01d347d0(local_190,local_180);
        cVar3 = FUN_016a79c0(auStack_258,uVar6);
        if (cVar3 != '\0') {
          local_188 = FUN_01d347d0(local_190,local_180);
          break;
        }
        local_180 = local_180 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    local_160 = local_188;
    if (local_188 != 0) {
      *param_3 = *(undefined8 *)(local_188 + 0x28);
      local_151 = true;
      goto LAB_016a80bf;
    }
  }
  if (((*(longlong *)(param_1 + 8) == 0) || (local_152 == '\0')) &&
     (*(longlong *)(param_1 + 0x10) != 0)) {
    FUN_004169a0(&local_1d8,local_150);
    iVar4 = FUN_004170c0(&DAT_016a81ac,local_1d8,1);
    if (iVar4 == 0) {
      local_152 = FUN_01d350f0(*(undefined8 *)(param_1 + 0x10),local_150,&local_164);
      if ((local_152 == '\0') && (*(char *)(param_1 + 0x3a) == '\0')) {
        local_238 = 0;
        cVar3 = FUN_00ee3970(*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 8),1,local_150,0);
        if (cVar3 != '\0') {
          local_152 = FUN_01d350f0(*(undefined8 *)(param_1 + 0x10),local_150,&local_164);
        }
      }
      if (local_152 != '\0') {
        local_30 = FUN_01d347d0(*(undefined8 *)(param_1 + 0x10),local_164);
      }
    }
  }
  if (local_30 != 0) {
    if (*(longlong *)(local_30 + 0x10) == 0) {
      *param_3 = *(undefined8 *)(local_30 + 0x28);
    }
    else {
      local_48 = *(undefined8 *)(param_1 + 0x50);
      local_50 = *(undefined8 *)(param_1 + 0x48);
      if (*(char *)(local_30 + 0x38) == '\0') {
        local_170 = *(undefined8 *)(param_1 + 8);
        FUN_004169a0(&local_1e0,local_150);
        (**(code **)(**(longlong **)(param_1 + 0x68) + 0x78))
                  (*(longlong **)(param_1 + 0x68),local_1e0);
      }
      else {
        local_170 = 0;
      }
      local_238 = *(undefined8 *)(param_1 + 0x10);
      local_230 = *(undefined8 *)(param_1 + 0x18);
      local_228 = *(undefined8 *)(param_1 + 0x20);
      local_220 = *(undefined1 *)(param_1 + 0x38);
      local_218 = *(undefined1 *)(param_1 + 0x3a);
      local_210 = *(undefined8 *)(param_1 + 0x28);
      local_208 = *(undefined1 *)(param_1 + 0x39);
      local_200 = *(undefined8 *)(param_1 + 0x58);
      local_1f8 = *(undefined8 *)(param_1 + 0x60);
      local_1f0 = *(undefined8 *)(param_1 + 0x68);
      local_40 = FUN_016a6500(&DAT_016a2760,1,local_30,local_170);
      uVar6 = FUN_016a9290(local_40);
      *param_3 = uVar6;
      if (*(char *)(local_30 + 0x38) == '\0') {
        plVar1 = *(longlong **)(param_1 + 0x68);
        iVar4 = (**(code **)(*plVar1 + 0x28))(plVar1);
        (**(code **)(*plVar1 + 0x98))(plVar1,iVar4 + -1);
      }
      FUN_00410f20(local_40);
      *(undefined8 *)(param_1 + 0x50) = local_48;
      *(undefined8 *)(param_1 + 0x48) = local_50;
    }
  }
  local_151 = local_30 != 0;
LAB_016a80bf:
  FUN_00414560(&local_1e0,8);
  FUN_00414480(&local_178);
  return local_151;
}


/* Ghidra address: 010e6f30 */
/* Ghidra symbol: FUN_010e6f30 */


longlong FUN_010e6f30(longlong param_1,char param_2,longlong param_3,int param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong local_res8;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  undefined8 *local_60;
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined1 *local_30;
  byte local_19;
  
  local_30 = auStack_88;
  local_res8 = param_1;
  puVar1 = auStack_88;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  *(longlong *)(local_res8 + 0x18) = param_3;
  *(undefined4 *)(local_res8 + 0x28) = 0;
  *(undefined4 *)(local_res8 + 0x2c) = 0;
  *(undefined4 *)(local_res8 + 0x48) = 0x136;
  *(int *)(local_res8 + 0x4c) = 0xd2 - param_4;
  uVar2 = FUN_005fc570(&PTR_FUN_005f2d40,1);
  *(undefined8 *)(local_res8 + 8) = uVar2;
  FUN_005fcd80(uVar2,L"Arial");
  if (param_3 == 0) {
    *(undefined8 *)(local_res8 + 0x10) = 0;
    uVar2 = FUN_00c32af0(&PTR_FUN_00c17678,1);
    *(undefined8 *)(local_res8 + 0x60) = uVar2;
    uVar2 = FUN_00608c80(&PTR_FUN_005f92e8,1);
    *(undefined8 *)(local_res8 + 0x58) = uVar2;
    uVar2 = FUN_00609e10(uVar2);
    *(undefined8 *)(local_res8 + 0x68) = uVar2;
    FUN_0060bbf0(*(undefined8 *)(local_res8 + 0x58),3);
    (**(code **)(**(longlong **)(local_res8 + 0x58) + 0x88))
              (*(longlong **)(local_res8 + 0x58),*(undefined4 *)(local_res8 + 0x48));
    (**(code **)(**(longlong **)(local_res8 + 0x58) + 0x70))
              (*(longlong **)(local_res8 + 0x58),*(undefined4 *)(local_res8 + 0x4c));
    lVar3 = FUN_00609e10(*(undefined8 *)(local_res8 + 0x58));
    FUN_005fdab0(*(undefined8 *)(lVar3 + 0x80),0xffffff);
    plVar4 = (longlong *)FUN_00609e10(*(undefined8 *)(local_res8 + 0x58));
    local_68 = (undefined1 *)CONCAT44(local_68._4_4_,*(undefined4 *)(local_res8 + 0x4c));
    FUN_00498350(local_48,0,0,*(undefined4 *)(local_res8 + 0x48));
    (**(code **)(*plVar4 + 0xa8))(plVar4,local_48);
    (**(code **)(**(longlong **)(local_res8 + 0x58) + 0x80))(*(longlong **)(local_res8 + 0x58),0);
    (**(code **)(**(longlong **)(local_res8 + 0x60) + 0x10))
              (*(longlong **)(local_res8 + 0x60),*(undefined8 *)(local_res8 + 0x58));
    local_38 = FUN_00498310(0,0);
    local_68 = *(undefined1 **)(local_res8 + 0x68);
    local_60 = &local_38;
    uVar2 = FUN_01acd9b0(&PTR_FUN_01ac9770,1,*(undefined8 *)(local_res8 + 0x10),0);
    *(undefined8 *)(local_res8 + 0x50) = uVar2;
  }
  else {
    *(undefined8 *)(local_res8 + 0x58) = 0;
    *(undefined8 *)(local_res8 + 0x60) = 0;
    *(undefined8 *)(local_res8 + 0x10) = *(undefined8 *)(param_3 + 8);
    *(undefined8 *)(local_res8 + 0x68) = *(undefined8 *)(param_3 + 0x310);
    *(undefined4 *)(local_res8 + 0x48) = *(undefined4 *)(param_3 + 0x98);
    *(int *)(local_res8 + 0x4c) = *(int *)(param_3 + 0x9c) - param_4;
    local_38 = FUN_00498310(5,5);
    local_68 = *(undefined1 **)(local_res8 + 0x68);
    local_60 = &local_38;
    uVar2 = FUN_01acd9b0(&PTR_FUN_01ac9770,1,*(undefined8 *)(local_res8 + 0x10),param_3);
    *(undefined8 *)(local_res8 + 0x50) = uVar2;
  }
  *(undefined1 *)(local_res8 + 0x70) = 2;
  *(undefined8 *)PTR_DAT_02005620 = 0;
  *(undefined4 *)(local_res8 + 0x24) = 0;
  *(undefined1 *)(local_res8 + 0xc0) = 0;
  *(undefined1 *)(local_res8 + 0xc1) = 0;
  local_19 = 0;
  do {
    uVar5 = (ulonglong)local_19;
    *(undefined4 *)(local_res8 + 0xcc + uVar5 * 0x20) = 0xffffffff;
    *(undefined4 *)(local_res8 + 0xd0 + uVar5 * 0x20) = 0xffffffff;
    *(undefined4 *)(local_res8 + 200 + uVar5 * 0x20) = 0xffffffff;
    *(undefined8 *)(local_res8 + 0xd8 + uVar5 * 0x20) = 0xc6293e5939a08cea;
    *(undefined8 *)(local_res8 + 0xe0 + uVar5 * 0x20) = 0x46293e5939a08cea;
    local_19 = local_19 + 1;
  } while (local_19 != 2);
  *(undefined8 *)(local_res8 + 0x108) = 0;
  local_50[0] = 0;
  local_58[0] = 0;
  local_68 = local_58;
  uVar2 = FUN_01107d10(&DAT_01106a78,0x46293e5939a08c01,local_50,1);
  *(undefined8 *)(local_res8 + 0x40) = uVar2;
  *(undefined8 *)(local_res8 + 0x110) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x128) = uVar2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}


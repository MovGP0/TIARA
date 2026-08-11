/* Ghidra address: 01a69610 */
/* Ghidra symbol: FUN_01a69610 */


void FUN_01a69610(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_208 [32];
  wchar_t *local_1e8;
  undefined8 local_1e0;
  undefined1 local_1d8;
  undefined1 local_1d0;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined1 local_198 [256];
  undefined8 local_98;
  undefined1 *local_90;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  int local_50;
  int local_4c;
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  undefined2 local_2a;
  
  local_90 = auStack_208;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_98 = 0;
  local_38 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_40 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  uVar4 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(param_1 + 0x778) = uVar4;
  local_2a = *(undefined2 *)(PTR_DAT_02004830 + 0x17a);
  *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = 0x2e;
  uVar2 = FUN_01116180(*(undefined8 *)(*(longlong *)(param_1 + 0xc08) + 200));
  *(undefined4 *)(param_1 + 0x734) = uVar2;
  FUN_010cd100(param_1 + 0x9c0);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x708),&local_98);
  FUN_00414ad0(param_1 + 0x760,local_98);
  FUN_00416910(local_198,*(undefined8 *)(param_1 + 0x760),0xff);
  FUN_00415020(param_1 + 0xa65,local_198,0x28);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x720),&local_1a0);
  FUN_00416910(local_198,local_1a0,0xff);
  FUN_00415020(param_1 + 0xab4,local_198,0x28);
  local_48 = FUN_01a69350(param_1);
  FUN_01a69290(param_1,local_48);
  *(undefined8 *)(param_1 + 0xc00) = 0;
  FUN_01116270(param_1 + 0x9c0,3);
  uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0xc08) + 200);
  cVar1 = FUN_004113d0(uVar4,&PTR_FUN_01cb8fa8);
  if ((cVar1 != '\0') || (cVar1 = FUN_004113d0(uVar4,&PTR_FUN_01cb9528), cVar1 != '\0')) {
    *(undefined1 *)(param_1 + 0x9c0) = 1;
  }
  puVar6 = (undefined8 *)(param_1 + 0x9c0);
  puVar7 = (undefined8 *)(local_48 + 0x68);
  for (lVar5 = 0x48; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar6 = (undefined8 *)(param_1 + 0x9c0);
  puVar7 = (undefined8 *)(param_1 + 0x780);
  for (lVar5 = 0x48; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_68 = *(undefined8 *)(*(longlong *)(param_1 + 0xc10) + 8);
  if (((*(char *)(param_1 + 0x780) == '\0') || (*(char *)(param_1 + 0x780) == '\x01')) ||
     ((*(char *)(param_1 + 0x780) == '\x05' &&
      (cVar1 = FUN_01116850(*(undefined4 *)(param_1 + 0x734)), cVar1 != '\0')))) {
    local_1e8 = (wchar_t *)((ulonglong)local_1e8 & 0xffffffffffffff00);
    local_1e0 = 0;
    local_1d8 = 1;
    local_1d0 = 0;
    uVar4 = FUN_01cc2930(local_68,*(undefined8 *)(param_1 + 0x760),3,0);
    *(undefined8 *)(param_1 + 0xc00) = uVar4;
  }
  if (*(longlong *)(param_1 + 0xc00) != 0) {
    local_1e8 = L"curve_x.txt";
    FUN_00416cd0(&local_1a8,3,*(undefined8 *)(param_1 + 0x750),&DAT_01a69c14);
    (**(code **)(*local_38 + 0xd8))(local_38,local_1a8);
    local_1e8 = L"curve_y.txt";
    FUN_00416cd0(&local_1b0,3,*(undefined8 *)(param_1 + 0x750),&DAT_01a69c14);
    (**(code **)(*local_40 + 0xd8))(local_40,local_1b0);
    FUN_01cc6510(*(undefined8 *)(param_1 + 0xc10));
    iVar3 = (**(code **)(*local_38 + 0x28))(local_38);
    local_4c = 0;
    local_50 = iVar3;
    if (-1 < iVar3 + -1) {
      do {
        (**(code **)(*local_38 + 0x18))(local_38,&local_1b8,local_4c);
        local_78 = local_1b8;
        local_58 = FUN_00448650(local_1b8,PTR_DAT_02004830);
        (**(code **)(*local_40 + 0x18))(local_40,&local_1c0,local_4c);
        local_80 = local_1c0;
        local_60 = FUN_00448650(local_1c0,PTR_DAT_02004830);
        FUN_01cc4620(*(undefined8 *)(param_1 + 0xc10),local_58);
        FUN_01cc46b0(*(undefined8 *)(param_1 + 0xc10),0,local_60);
        local_4c = local_4c + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_01a69570(param_1,*(undefined8 *)(param_1 + 0x778));
  }
  *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = local_2a;
  FUN_00410f20(local_38);
  FUN_00410f20(local_40);
  FUN_00414560(&local_1c0,4);
  FUN_00414480(&local_1a0);
  FUN_00414480(&local_98);
  return;
}


/* Ghidra address: 00a9c430 */
/* Ghidra symbol: FUN_00a9c430 */


longlong FUN_00a9c430(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     longlong param_5)

{
  undefined1 *puVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined7 uVar7;
  bool bVar8;
  longlong local_res8;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 *local_30;
  longlong local_20;
  
  local_30 = auStack_a8;
  local_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  local_20 = 0;
  local_res8 = param_1;
  puVar1 = auStack_a8;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  local_80 = param_5;
  local_88 = param_4;
  FUN_00ac53c0(local_res8,0,param_3,0);
  uVar6 = FUN_00a9b620(&PTR_FUN_00a86440,1,local_res8);
  *(undefined8 *)(local_res8 + 0xa8) = uVar6;
  uVar6 = FUN_00610d40(&PTR_FUN_00a7f480,1,0);
  *(undefined8 *)(local_res8 + 0x530) = uVar6;
  if (*(char *)(*(longlong *)(local_res8 + 0x18) + 0x60) == '\0') {
LAB_00a9c58e:
    FUN_00a5c200(param_5,local_res8 + 0xb0);
  }
  else {
    cVar2 = FUN_004113d0(local_res8,&PTR_FUN_00a8dc10);
    if (cVar2 == '\0') goto LAB_00a9c58e;
    FUN_00468530(&local_48,0xc0c0c0,0xfffffffffffffffc);
    FUN_00a5c060(param_5,local_res8 + 0xb0,&local_48);
  }
  uVar3 = FUN_00a554f0(param_5);
  *(undefined1 *)(local_res8 + 0x4ec) = uVar3;
  uVar4 = FUN_00462650(param_5 + 0x120);
  *(undefined4 *)(local_res8 + 0x4e8) = uVar4;
  FUN_00414ad0(local_res8 + 0x448,*(undefined8 *)(param_5 + 0x58));
  cVar2 = FUN_004113d0(local_res8,&PTR_FUN_00a8b450);
  if (cVar2 == '\0') {
    cVar2 = FUN_004113d0(local_res8,&PTR_FUN_00a8e3f8);
    if (cVar2 == '\0') {
      cVar2 = FUN_00a53050(param_5,&local_20);
      if ((cVar2 != '\0') && (local_20 != 0)) {
        uVar6 = FUN_00a95230(&PTR_FUN_00a83768,1,*(undefined8 *)(local_res8 + 0xa8),local_20);
        *(undefined8 *)(local_res8 + 0x440) = uVar6;
        FUN_00a53850(param_5,*(undefined4 *)(local_res8 + 0x44),*(undefined4 *)(local_res8 + 0x48),
                     local_res8 + 0x4f0);
      }
    }
  }
  uVar3 = FUN_00a548f0(param_5);
  *(undefined1 *)(local_res8 + 0x508) = uVar3;
  FUN_00a54fc0(param_5,local_res8 + 0x50b,local_res8 + 0x50c,local_res8 + 0x50d);
  if (*(char *)(local_res8 + 0x4c) != '\0') {
    iVar5 = FUN_00a549c0(param_5);
    *(int *)(local_res8 + 0x70) = iVar5 * 10;
    if ((*(char *)(local_res8 + 0x4c) == '\x02') && (*(int *)(local_res8 + 0x70) == 0)) {
      *(undefined4 *)(local_res8 + 0x70) = 1;
    }
  }
  uVar7 = (undefined7)((ulonglong)local_res8 >> 8);
  if (*(byte *)(local_res8 + 0x60) < 8) {
    bVar8 = ((int)CONCAT71(uVar7,1) << (*(byte *)(local_res8 + 0x60) & 0x1f) & 0x60U) != 0;
  }
  else {
    bVar8 = false;
  }
  if ((bVar8) && (*(int *)(local_res8 + 0x70) == 0)) {
    *(undefined4 *)(local_res8 + 0x70) = 1;
  }
  if (*(byte *)(local_res8 + 0x60) < 8) {
    bVar8 = ((int)CONCAT71(uVar7,1) << (*(byte *)(local_res8 + 0x60) & 0x1f) & 0x60U) != 0;
  }
  else {
    bVar8 = false;
  }
  if (!bVar8) {
    if (*(byte *)(local_res8 + 0x4c) < 8) {
      bVar8 = ((int)CONCAT71(uVar7,1) << (*(byte *)(local_res8 + 0x4c) & 0x1f) & 0xcU) != 0;
    }
    else {
      bVar8 = false;
    }
    if (!bVar8) goto LAB_00a9c81d;
  }
  uVar6 = FUN_00a73ab0(&DAT_00a6ae68,1);
  *(undefined8 *)(local_res8 + 0x550) = uVar6;
  *(undefined8 *)(*(longlong *)(local_res8 + 0xa8) + 0x38) = uVar6;
LAB_00a9c81d:
  cVar2 = FUN_004113d0(local_res8,&PTR_FUN_00a8dc10);
  if (cVar2 == '\0') {
    cVar2 = FUN_004113d0(local_res8,&PTR_FUN_00a8e3f8);
    if (cVar2 == '\0') {
      FUN_00a9ca20(local_res8);
    }
  }
  uVar3 = FUN_00a54090(param_5);
  *(undefined1 *)(local_res8 + 0x50e) = uVar3;
  FUN_00468a10(&local_60,L"right");
  cVar2 = FUN_0046f320(param_5 + 0xd8,&local_60);
  if (cVar2 == '\0') {
    FUN_00468a10(&local_78,L"center");
    cVar2 = FUN_0046f320(param_5 + 0xd8,&local_78);
    if (cVar2 == '\0') {
      *(undefined1 *)(local_res8 + 0x50f) = 1;
    }
    else {
      *(undefined1 *)(local_res8 + 0x50f) = 2;
    }
  }
  else {
    *(undefined1 *)(local_res8 + 0x50f) = 3;
  }
  FUN_00417840(&local_78,&DAT_004013d8,3);
  FUN_00414480(&local_20);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}


/* Ghidra address: 0044d040 */
/* Ghidra symbol: FUN_0044d040 */


undefined4 FUN_0044d040(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 auStack_728 [32];
  undefined4 local_708;
  undefined8 *local_6f0;
  undefined8 local_6e8;
  longlong local_6e0;
  undefined4 local_6d8;
  undefined4 local_6d4;
  undefined8 local_6d0;
  undefined8 local_6c8;
  undefined1 local_6c0;
  undefined1 *local_6b8;
  undefined1 local_6b0;
  longlong local_6a8;
  undefined1 local_6a0;
  undefined *local_698;
  undefined1 local_690;
  undefined *local_688;
  undefined1 local_680;
  undefined1 local_670 [8];
  longlong local_668;
  int local_650;
  undefined1 local_63c [512];
  undefined1 local_43c [522];
  undefined1 local_232 [530];
  
  local_6d0 = 0;
  local_6f0 = param_1;
  local_6e8 = param_3;
  local_6e0 = param_2;
  local_6d8 = param_4;
  thunk_FUN_0413c1ac(param_2,local_670,0x30);
  if (local_650 == 0x1000) {
    iVar2 = thunk_FUN_041b94f3(local_668,local_43c,0x105);
    if (iVar2 != 0) {
      lVar3 = local_6e0 - local_668;
      goto LAB_0044d0e2;
    }
  }
  thunk_FUN_041b94f3(PTR_IMAGE_DOS_HEADER_0200c280,local_43c,0x105);
  lVar3 = FUN_0044d030(auStack_728,local_6e0);
LAB_0044d0e2:
  lVar4 = FUN_0044fe50(local_43c,0x5c);
  FUN_00442580(local_232,lVar4 + 2,0x104);
  puVar6 = &DAT_0044d238;
  puVar7 = &DAT_0044d238;
  cVar1 = FUN_004113d0(local_6f0,&PTR_FUN_004334c0);
  if (cVar1 != '\0') {
    puVar6 = (undefined *)FUN_00416740(local_6f0[1]);
    iVar2 = FUN_00414d00(puVar6);
    if ((iVar2 != 0) && (*(short *)(puVar6 + (longlong)(iVar2 + -1) * 2) != 0x2e)) {
      puVar7 = &DAT_0044d23a;
    }
  }
  uVar5 = FUN_00419c40(PTR_IMAGE_DOS_HEADER_0200c280);
  thunk_FUN_039b3fd2(uVar5,*(undefined4 *)(PTR_PTR_02005870 + 8),local_63c,0x100);
  FUN_00410ae0(*local_6f0,&local_6d0);
  local_6c8 = local_6d0;
  local_6c0 = 0x11;
  local_6b8 = local_232;
  local_6b0 = 10;
  local_6a0 = 5;
  local_690 = 10;
  local_680 = 10;
  local_708 = 4;
  local_6a8 = lVar3;
  local_698 = puVar6;
  local_688 = puVar7;
  FUN_00442ed0(local_6e8,local_6d8,local_63c,&local_6c8);
  local_6d4 = FUN_00414d00(local_6e8);
  FUN_00414480(&local_6d0);
  return local_6d4;
}


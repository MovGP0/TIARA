/* Ghidra address: 00698b50 */
/* Ghidra symbol: FUN_00698b50 */


void FUN_00698b50(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  int iVar10;
  undefined4 uVar11;
  undefined8 in_stack_ffffffffffffff28;
  undefined8 uVar12;
  int *piVar13;
  ulonglong uVar14;
  char local_99;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  longlong local_58;
  int local_4c;
  int local_48;
  undefined1 local_44 [4];
  int local_40;
  int local_3c;
  int local_38;
  undefined1 local_34 [12];
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffff28 >> 0x20);
  local_58 = 0;
  plVar6 = (longlong *)FUN_00777cd0();
  cVar2 = (**(code **)(*plVar6 + 0x90))(plVar6);
  if (cVar2 != '\0') {
    uVar7 = FUN_00786090(param_1);
    uVar3 = thunk_FUN_041b2403(uVar7,0xf0,0,0);
    plVar6 = (longlong *)FUN_00777cd0();
    uVar3 = (**(code **)(*param_1 + 0x88))(param_1,uVar3);
    (**(code **)(*plVar6 + 200))(plVar6,local_34,uVar3);
    lVar1 = param_1[2];
    cVar2 = FUN_004113d0(lVar1,&PTR_FUN_006742d8);
    if (cVar2 == '\0') {
      cVar2 = FUN_004113d0(lVar1,&PTR_FUN_006757e8);
      if (cVar2 == '\0') {
        local_99 = '\0';
      }
      else {
        local_99 = *(char *)(lVar1 + 0x491);
      }
    }
    else {
      local_99 = *(char *)(lVar1 + 0x491);
    }
    uVar8 = CONCAT44(uVar5,0x14);
    FUN_00498350(local_68,0,0,0x14,uVar8);
    (**(code **)(*(longlong *)param_1[2] + 0xe0))((longlong *)param_1[2],local_44);
    plVar6 = (longlong *)FUN_00777cd0();
    uVar7 = FUN_005ffa40(param_2);
    (**(code **)(*plVar6 + 200))(plVar6,local_78,0x14);
    uVar8 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
    piVar13 = &local_4c;
    cVar2 = FUN_007792f0(plVar6,uVar7,local_78,local_68,uVar8,piVar13,0);
    uVar5 = (undefined4)((ulonglong)uVar8 >> 0x20);
    if (cVar2 == '\0') {
      local_4c = 0xd;
      local_48 = 0xd;
    }
    cVar2 = FUN_00698a20(param_1);
    if (cVar2 == '\0') {
      FUN_004238d0(local_44,0,0,local_4c,CONCAT44(uVar5,local_48));
      FUN_004238d0(local_98,0,0,*(undefined4 *)(param_1[2] + 0x98),
                   *(undefined4 *)(param_1[2] + 0x9c));
      FUN_006988d0(local_88,local_44,local_98);
    }
    else {
      iVar10 = *(int *)(param_1[2] + 0x98);
      FUN_004238d0(local_44,(iVar10 - local_4c) + -1,0,iVar10,
                   CONCAT44(uVar5,*(undefined4 *)(param_1[2] + 0x9c)));
      iVar10 = *(int *)(param_1[2] + 0x98);
      FUN_004238d0(local_98,(iVar10 - local_48) + -1,0,iVar10,*(undefined4 *)(param_1[2] + 0x9c));
      FUN_006988d0(local_88,local_44,local_98);
    }
    uVar7 = FUN_00777cd0();
    uVar8 = FUN_005ffa40(param_2);
    uVar5 = 0;
    uVar14 = (ulonglong)piVar13 & 0xffffffff00000000;
    FUN_00778dc0(uVar7,uVar8,local_34,local_44,0,uVar14);
    uVar3 = (undefined4)(uVar14 >> 0x20);
    FUN_005ff880(param_2,*(undefined8 *)(param_1[2] + 0xb8));
    uVar7 = CONCAT44(uVar5,*(undefined4 *)(param_1[2] + 0x9c));
    FUN_004238d0(local_44,0,0,(*(int *)(param_1[2] + 0x98) - local_4c) + -10,uVar7);
    uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
    FUN_00785f90(param_1,&local_58);
    if (local_99 == '\0') {
      uVar7 = FUN_005ffa40(param_2);
      uVar11 = 0;
      if (local_58 != 0) {
        uVar11 = *(undefined4 *)(local_58 + -4);
      }
      uVar8 = FUN_00416740(local_58);
      uVar4 = FUN_006520b0(param_1[2],0x440);
      uVar12 = CONCAT44(uVar5,uVar4);
      thunk_FUN_041a24be(uVar7,uVar8,uVar11,local_44,uVar12);
      uVar5 = (undefined4)((ulonglong)uVar12 >> 0x20);
    }
    else {
      uVar7 = FUN_005ffa40(param_2);
      uVar11 = 0;
      if (local_58 != 0) {
        uVar11 = *(undefined4 *)(local_58 + -4);
      }
      uVar8 = FUN_00416740(local_58);
      uVar4 = FUN_006520b0(param_1[2],0x450);
      uVar12 = CONCAT44(uVar5,uVar4);
      thunk_FUN_041a24be(uVar7,uVar8,uVar11,local_44,uVar12);
      uVar5 = (undefined4)((ulonglong)uVar12 >> 0x20);
    }
    cVar2 = FUN_00698a20(param_1);
    if (cVar2 == '\0') {
      FUN_004238d0(local_98,local_4c + 3,0,*(undefined4 *)(param_1[2] + 0x98),
                   CONCAT44(uVar5,*(undefined4 *)(param_1[2] + 0x9c)));
      FUN_006988d0(local_88,local_44,local_98);
    }
    else {
      lVar1 = param_1[2];
      if (*(char *)(lVar1 + 0xb1) == '\x01') {
        iVar10 = (*(int *)(lVar1 + 0x98) - local_4c) + -3;
        FUN_004238d0(local_98,iVar10 - local_3c,0,iVar10,
                     CONCAT44(uVar5,*(undefined4 *)(lVar1 + 0x9c)));
        FUN_006988d0(local_88,local_44,local_98);
      }
      else {
        FUN_004238d0(local_98,3,0,(*(int *)(lVar1 + 0x98) - local_4c) + -3,
                     CONCAT44(uVar5,*(undefined4 *)(lVar1 + 0x9c)));
        FUN_006988d0(local_88,local_44,local_98);
      }
    }
    if (local_99 == '\0') {
      uVar5 = FUN_006520b0(param_1[2],0x44);
      FUN_00785c70(param_1,param_2,local_34,local_58,local_44,CONCAT44(uVar3,uVar5));
    }
    else {
      uVar5 = FUN_006520b0(param_1[2],0x54);
      FUN_00785c70(param_1,param_2,local_34,local_58,local_44,CONCAT44(uVar3,uVar5));
    }
    lVar1 = param_1[2];
    pcVar9 = (code *)FUN_00411550(lVar1,0xffb0);
    cVar2 = (*pcVar9)(lVar1);
    if (cVar2 != '\0') {
      FUN_00423b10(local_44,2,1);
      if (local_40 < 0) {
        local_40 = 0;
      }
      if (*(int *)(param_1[2] + 0x9c) < local_38) {
        local_38 = *(int *)(param_1[2] + 0x9c);
      }
      uVar7 = FUN_00777cd0();
      uVar5 = FUN_007793c0(uVar7,0xff00000f);
      FUN_005fdab0(param_2[0x10],uVar5);
      (**(code **)(*param_2 + 0x98))(param_2,local_44);
    }
  }
  FUN_00414480(&local_58);
  return;
}


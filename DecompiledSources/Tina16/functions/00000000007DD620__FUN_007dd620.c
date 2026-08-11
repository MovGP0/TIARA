/* Ghidra address: 007dd620 */
/* Ghidra symbol: FUN_007dd620 */


void FUN_007dd620(longlong param_1,undefined8 param_2,byte param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined8 local_90 [2];
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_40;
  
  local_90[0] = 0;
  local_80 = 0;
  if (*(char *)(param_1 + 0x86) == '\0') goto code_r0x007dda04;
  FUN_00414b50(&local_80,*(undefined8 *)(param_1 + 0x78));
  iVar3 = FUN_007e2ef0(param_1);
  if (iVar3 < 1) {
    if (*(short *)(param_1 + 0xc0) != 0) {
      lVar4 = *(longlong *)(param_1 + 200);
      if ((lVar4 != 0) && (*(longlong *)(lVar4 + 200) == 0)) {
        cVar2 = FUN_004113d0(*(undefined8 *)(lVar4 + 8),&PTR_FUN_007db330);
        if (cVar2 != '\0') goto LAB_007dd6fc;
      }
      FUN_007dc700(local_90,*(undefined2 *)(param_1 + 0xc0));
      FUN_00416cd0(&local_80,3,local_80,&DAT_007dda64,local_90[0]);
    }
  }
  else {
    local_60 = FUN_007de060(param_1);
  }
LAB_007dd6fc:
  bVar1 = thunk_FUN_04131dd8();
  if (bVar1 < 4) {
    iVar3 = FUN_00416db0(*(undefined8 *)(param_1 + 0x78),&DAT_007dda74);
    uVar9 = *(uint *)(&DAT_01e12f9c + (ulonglong)*(byte *)(param_1 + 0x98) * 4) |
            *(uint *)(&DAT_01e12f8c + (ulonglong)*(byte *)(param_1 + 0x80) * 4) |
            *(uint *)(&DAT_01e12f94 + (ulonglong)*(byte *)(param_1 + 0x81) * 4) |
            *(uint *)(&DAT_01e12fa8 + (ulonglong)(iVar3 == 0) * 4);
    iVar3 = FUN_007e2ef0(param_1);
    if (iVar3 < 1) {
      uVar7 = FUN_00416740(local_80);
      thunk_FUN_03fa0d14(param_2,0xffffffff,uVar9 | 0x400,*(undefined2 *)(param_1 + 0xa8),uVar7);
    }
    else {
      uVar7 = FUN_007de060(param_1);
      uVar8 = FUN_00416740(*(undefined8 *)(param_1 + 0x78));
      thunk_FUN_03fa0d14(param_2,0xffffffff,uVar9 | 0x410,uVar7,uVar8);
    }
    goto code_r0x007dda04;
  }
  iVar3 = FUN_0044f060();
  if (iVar3 == 1) {
    iVar3 = FUN_0044f080();
    if (4 < iVar3) goto LAB_007dd71e;
    local_78 = 0x2c;
  }
  else {
LAB_007dd71e:
    local_78 = 0x50;
  }
  local_74 = 0x3f;
  lVar4 = FUN_007e3880(param_1);
  lVar5 = FUN_007e1f10(param_1);
  if ((lVar4 == 0) || ((*(char *)(lVar4 + 0x90) == '\0' && (lVar5 == 0)))) {
    plVar6 = *(longlong **)(param_1 + 0xa0);
    if (plVar6 != (longlong *)0x0) {
      cVar2 = (**(code **)(*plVar6 + 0x40))(plVar6);
      if (cVar2 == '\0') goto LAB_007dd781;
    }
    bVar1 = 0;
  }
  else {
LAB_007dd781:
    bVar1 = 1;
  }
  cVar2 = FUN_004113d0(*(undefined8 *)(*(longlong *)(param_1 + 200) + 8),&PTR_FUN_007db330);
  if (cVar2 != '\0') {
    cVar2 = FUN_0044f0c0(6,0);
    if (cVar2 != '\0') {
      plVar6 = (longlong *)FUN_007810f0();
      cVar2 = (**(code **)(*plVar6 + 0x90))(plVar6);
      if (cVar2 != '\0') {
        if ((bVar1 == 0) ||
           ((((lVar5 == 0 || (*(int *)(param_1 + 0x88) == -1)) &&
             (*(longlong *)(param_1 + 0xa0) == 0)) && (*(char *)(lVar4 + 0x90) == '\0')))) {
          bVar1 = 0;
        }
        else {
          bVar1 = 1;
        }
      }
    }
  }
  iVar3 = FUN_00416db0(*(undefined8 *)(param_1 + 0x78),&DAT_007dda74);
  local_70 = *(uint *)(&DAT_01e12fd4 + (ulonglong)*(byte *)(param_1 + 0x85) * 4) |
             *(uint *)(&DAT_01e12fb0 + (ulonglong)*(byte *)(param_1 + 0x98) * 4) |
             *(uint *)(&DAT_01e12fdc + (ulonglong)(iVar3 == 0) * 4) |
             *(uint *)(&DAT_01e12fe4 + (ulonglong)param_3 * 4) | (&DAT_01e12fec)[bVar1];
  local_6c = *(uint *)(&DAT_01e12fbc + (ulonglong)*(byte *)(param_1 + 0x80) * 4) |
             *(uint *)(&DAT_01e12fcc + (ulonglong)*(byte *)(param_1 + 0x81) * 4) |
             *(uint *)(&DAT_01e12fc4 + (ulonglong)*(byte *)(param_1 + 0x82) * 4);
  local_68 = (uint)*(ushort *)(param_1 + 0xa8);
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  iVar3 = FUN_007e2ef0(param_1);
  if (0 < iVar3) {
    local_60 = FUN_007de060(param_1);
  }
  local_40 = FUN_00416740(local_80);
  thunk_FUN_03c8d99c(param_2,0xffffffff,0xffffffff,&local_78);
code_r0x007dda04:
  FUN_00414480(local_90);
  FUN_00414480(&local_80);
  return;
}


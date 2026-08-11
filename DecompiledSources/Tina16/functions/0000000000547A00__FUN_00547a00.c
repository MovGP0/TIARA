/* Ghidra address: 00547a00 */
/* Ghidra symbol: FUN_00547a00 */


longlong FUN_00547a00(longlong param_1,char param_2,undefined8 param_3,longlong param_4,
                     longlong *param_5)

{
  longlong *plVar1;
  undefined1 *puVar2;
  char cVar3;
  ushort *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  longlong local_res8;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined8 local_98;
  undefined1 *local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong *local_40;
  longlong local_30;
  int local_24;
  longlong local_20;
  
  local_90 = auStack_c8;
  local_98 = 0;
  local_res8 = param_1;
  puVar2 = auStack_c8;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar2 = local_90;
  }
  local_90 = puVar2;
  local_30 = param_4;
  cVar3 = FUN_004113d0(param_4,&PTR_FUN_0052b748);
  if (cVar3 != '\0') {
    local_30 = *(longlong *)(local_30 + 0x20);
  }
  local_a8 = param_5;
  FUN_00546070(local_res8,0,param_3,local_30);
  puVar4 = (ushort *)FUN_005486b0(local_res8);
  local_20 = *param_5 + (ulonglong)*puVar4;
  uVar5 = FUN_005486b0(local_res8);
  lVar6 = FUN_00588030(uVar5);
  *param_5 = lVar6;
  if (local_20 != *param_5) {
    lVar6 = *param_5;
    *(longlong *)(local_res8 + 0x38) = lVar6;
    local_40 = *(longlong **)(lVar6 + 2);
    local_48 = (longlong)local_40;
    if (local_40 != (longlong *)0x0) {
      local_48 = *local_40;
    }
    *(longlong *)(local_res8 + 0x40) = local_48;
    FUN_00419260(local_res8 + 0x48,&DAT_00531510,1,
                 *(undefined1 *)(*(longlong *)(local_res8 + 0x38) + 0xc));
    local_30 = local_res8;
    cVar3 = FUN_004113d0(param_4,&PTR_FUN_0052b748);
    if (cVar3 != '\0') {
      local_30 = param_4;
    }
    *param_5 = *(longlong *)(local_res8 + 0x38) + 0xd;
    local_50 = *(longlong *)(local_res8 + 0x48);
    local_58 = local_50;
    if (local_50 != 0) {
      local_58 = *(longlong *)(local_50 + -8);
    }
    iVar8 = (int)local_58;
    local_24 = 0;
    if (-1 < iVar8 + -1) {
      do {
        uVar5 = FUN_00545f10(param_3,&PTR_FUN_005478a0,local_30,param_5);
        uVar5 = FUN_004113f0(uVar5,&PTR_FUN_005478a0);
        *(undefined8 *)(*(longlong *)(local_res8 + 0x48) + (longlong)local_24 * 8) = uVar5;
        local_24 = local_24 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    local_60 = *(longlong *)(local_res8 + 0x48);
    local_68 = local_60;
    if (local_60 != 0) {
      local_68 = *(longlong *)(local_60 + -8);
    }
    if (0 < local_68) {
      local_70 = *(longlong *)(local_res8 + 0x48);
      local_78 = local_70;
      if (local_70 != 0) {
        local_78 = *(longlong *)(local_70 + -8);
      }
      plVar1 = *(longlong **)(*(longlong *)(local_res8 + 0x48) + -8 + local_78 * 8);
      uVar7 = (**(code **)(*plVar1 + 0x18))(plVar1);
      if ((uVar7 & 0x40) != 0) {
        local_80 = *(longlong *)(local_res8 + 0x48);
        local_88 = local_80;
        if (local_80 != 0) {
          local_88 = *(longlong *)(local_80 + -8);
        }
        FUN_00419260(local_res8 + 0x48,&DAT_00531510,1,local_88 + -1);
      }
    }
    FUN_00545c40(&local_98,param_5);
    FUN_0041b840(local_res8 + 0x28,local_98);
  }
  FUN_0041b800(&local_98);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}


/* Ghidra address: 00a9a640 */
/* Ghidra symbol: FUN_00a9a640 */


longlong FUN_00a9a640(longlong param_1,char param_2,undefined8 param_3,undefined4 param_4,
                     longlong param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  longlong local_res8;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined8 local_60;
  longlong local_58;
  int local_4c;
  char local_45;
  longlong *local_40;
  undefined1 local_35;
  int local_34;
  undefined8 local_30;
  undefined8 local_28;
  longlong *local_20;
  
  local_70 = auStack_a8;
  local_78 = 0;
  local_res8 = param_1;
  puVar1 = auStack_a8;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_70;
  }
  local_70 = puVar1;
  local_88 = param_5;
  local_80 = param_6;
  FUN_00a99130(local_res8,0,param_3,param_4);
  local_30 = *(undefined8 *)(*(longlong *)(local_res8 + 0x18) + 0xc0);
  plVar4 = (longlong *)FUN_00652880(&PTR_FUN_00a89848,1,local_30);
  *(longlong **)(local_res8 + 0x140) = plVar4;
  (**(code **)(*plVar4 + 0x130))(plVar4,local_30);
  uVar5 = FUN_0068a170(&PTR_FUN_00a89470,1,local_30);
  *(undefined8 *)(local_res8 + 0x148) = uVar5;
  *(undefined1 *)(local_res8 + 0xa8) = 3;
  local_28 = 0;
  iVar7 = *(int *)(param_5 + 0x10);
  local_4c = 0;
  if (-1 < iVar7 + -1) {
    do {
      lVar6 = FUN_00a72910(param_5,local_4c);
      if (*(char *)(lVar6 + 8) == '\x10') {
        local_45 = '\x01';
        local_28 = FUN_00a72910(param_5,local_4c);
        goto code_r0x00a9a7c7;
      }
      local_4c = local_4c + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  local_45 = '\0';
code_r0x00a9a7c7:
  if (local_45 != '\0') {
    *(undefined1 *)(local_res8 + 0x151) = 1;
  }
  local_40 = *(longlong **)(local_res8 + 0x148);
  FUN_0064cb30(*(undefined8 *)(local_res8 + 0x140),0xfffff060);
  FUN_0064cb30(*(undefined8 *)(local_res8 + 0x148),0);
  if (*(int *)(*(longlong *)PTR_DAT_02005950 + 0x98) < 0x65) {
    FUN_0064cbf0(*(undefined8 *)(local_res8 + 0x140),0xd);
    FUN_0064cc50(*(undefined8 *)(local_res8 + 0x140),0xe);
  }
  else {
    FUN_0064cbf0(*(undefined8 *)(local_res8 + 0x140),0x10);
    FUN_0064cc50(*(undefined8 *)(local_res8 + 0x140),0x10);
  }
  FUN_0064c650(*(undefined8 *)(local_res8 + 0x148),5);
  FUN_00414ad0(local_40 + 0x94,*(undefined8 *)(local_res8 + 200));
  local_40[0x78] = local_res8;
  local_40[0x77] = (longlong)FUN_00a99b90;
  local_40[0x7a] = local_res8;
  local_40[0x79] = (longlong)FUN_00a99c40;
  local_40[0x7e] = *(longlong *)(local_res8 + 0xf8);
  local_40[0x7d] = (longlong)FUN_00a98830;
  local_40[0x2e] = local_res8;
  local_40[0x2d] = (longlong)FUN_00a99800;
  (**(code **)(*local_40 + 0x128))(local_40,*(char *)(local_res8 + 0x110) == '\0');
  (**(code **)(*local_40 + 0x130))(local_40,*(undefined8 *)(local_res8 + 0x140));
  local_35 = 1;
  iVar7 = *(int *)(*(longlong *)(*(longlong *)(local_res8 + 0xf8) + 0x30) + 0x10);
  local_34 = 0;
  if (-1 < iVar7 + -1) {
    do {
      local_20 = (longlong *)
                 FUN_00ac1a90(*(undefined8 *)(*(longlong *)(local_res8 + 0xf8) + 0x30),local_34);
      cVar2 = FUN_004113d0(local_20,&PTR_FUN_00a89bc8);
      if ((cVar2 != '\0') && (local_20[0x29] != *(longlong *)(local_res8 + 0x148))) {
        local_58 = local_20[0x19];
        FUN_009ec420(&local_78,local_40[2]);
        local_60 = local_78;
        iVar3 = FUN_0043e420(local_58,local_78);
        if (iVar3 == 0) {
          if (*(char *)(local_res8 + 0x151) == '\0') {
            local_35 = 0;
            break;
          }
          *(undefined1 *)((longlong)local_20 + 0x151) = 0;
          FUN_00a9b310(local_20,0);
          (**(code **)(*local_20 + 0x148))(local_20,0);
        }
      }
      local_34 = local_34 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  if (*(char *)(local_res8 + 0x151) == '\0') {
    FUN_0065bce0(local_40,local_35);
  }
  (**(code **)(*local_40 + 0x268))(local_40,*(undefined1 *)(local_res8 + 0x151));
  local_40[0x40] = local_res8;
  local_40[0x3f] = (longlong)FUN_00a9ac00;
  (**(code **)(*local_40 + 0x148))
            (local_40,*(undefined1 *)(*(longlong *)(local_res8 + 0x18) + 0x90));
  FUN_00414480(&local_78);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}


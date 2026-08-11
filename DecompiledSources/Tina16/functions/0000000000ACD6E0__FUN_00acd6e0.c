/* Ghidra address: 00acd6e0 */
/* Ghidra symbol: FUN_00acd6e0 */


longlong FUN_00acd6e0(longlong param_1,char param_2,undefined8 param_3,undefined4 param_4,
                     longlong param_5,longlong param_6)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong local_res8;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  int local_50;
  int local_4c;
  int local_48;
  int local_40;
  char local_39;
  longlong *local_38;
  int local_2c;
  undefined8 local_28;
  longlong local_20;
  
  local_60 = auStack_a8;
  local_78 = 0;
  local_68 = 0;
  local_70 = 0;
  local_res8 = param_1;
  puVar1 = auStack_a8;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_60;
  }
  local_60 = puVar1;
  local_88 = param_5;
  local_80 = param_6;
  FUN_00aca230(local_res8,0,param_3,param_4);
  *(undefined4 *)(local_res8 + 0xec) = *(undefined4 *)(param_6 + 0x70);
  *(undefined4 *)(local_res8 + 0x16c) = 0xf;
  local_20 = 0;
  iVar4 = *(int *)(param_5 + 0x10);
  local_40 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar5 = FUN_00a72910(param_5,local_40);
      if (*(char *)(lVar5 + 8) == 'K') {
        local_39 = '\x01';
        local_20 = FUN_00a72910(param_5,local_40);
        goto code_r0x00acd82a;
      }
      local_40 = local_40 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  local_39 = '\0';
code_r0x00acd82a:
  if (local_39 != '\0') {
    if (*(int *)(local_20 + 0x18) < 1) {
      local_48 = FUN_004170c0(&DAT_00acdc4c,*(undefined8 *)(local_20 + 0x28),1);
      local_4c = FUN_004170c0(&DAT_00acdc5c,*(undefined8 *)(local_20 + 0x28),1);
      local_50 = local_4c;
      if (local_48 < local_4c) {
        local_50 = local_48;
      }
      local_2c = local_50;
      if (1 < local_50) {
        FUN_009ec440(&local_70,*(undefined8 *)(local_20 + 0x28));
        FUN_00416dc0(&local_68,local_70,1,local_2c + -1);
        uVar3 = FUN_0043fc50(local_68,0x14);
        *(undefined4 *)(local_res8 + 0x16c) = uVar3;
      }
    }
    else {
      *(int *)(local_res8 + 0x16c) = *(int *)(local_20 + 0x18);
    }
  }
  local_28 = *(undefined8 *)(*(longlong *)(local_res8 + 0x18) + 0xc0);
  uVar6 = FUN_00680200(&PTR_FUN_009ea8d8,1,local_28);
  *(undefined8 *)(local_res8 + 0x158) = uVar6;
  local_38 = *(longlong **)(local_res8 + 0x158);
  FUN_0064cb30(local_38,0xfffff060);
  FUN_0064cbf0(local_38,0x78);
  cVar2 = FUN_00a554f0(param_6);
  if (cVar2 != '\0') {
    FUN_006804c0(local_38,0);
  }
  (**(code **)(*local_38 + 0x130))(local_38,local_28);
  uVar6 = FUN_00a5b160(param_6);
  (**(code **)(*(longlong *)local_38[0x17] + 0x10))((longlong *)local_38[0x17],uVar6);
  *(undefined4 *)(local_res8 + 0x108) = *(undefined4 *)((longlong)local_38 + 0x9c);
  lVar5 = FUN_00a5b160(param_6);
  *(undefined4 *)(local_res8 + 0x168) = *(undefined4 *)(lVar5 + 0x48);
  FUN_009ec440(&local_78,*(undefined8 *)(local_res8 + 0xe0));
  FUN_0064de00(local_38,local_78);
  iVar4 = FUN_00416db0(*(undefined8 *)(local_res8 + 0x140),L"password");
  if (iVar4 == 0) {
    FUN_006807a0(local_38,0x2a);
  }
  local_38[0x80] = *(longlong *)(local_res8 + 0xf8);
  local_38[0x7f] = (longlong)FUN_00a98b10;
  local_38[0x78] = local_res8;
  local_38[0x77] = (longlong)FUN_00a99b90;
  local_38[0x7a] = local_res8;
  local_38[0x79] = (longlong)FUN_00a99c40;
  local_38[0x40] = local_res8;
  local_38[0x3f] = (longlong)FUN_00a99e30;
  local_38[0x2e] = local_res8;
  local_38[0x2d] = (longlong)FUN_00a99800;
  (**(code **)(*local_38 + 0x128))(local_38,*(char *)(local_res8 + 0x110) == '\0');
  FUN_006807e0(local_38,*(undefined1 *)(local_res8 + 0x111));
  (**(code **)(*local_38 + 0x148))
            (local_38,*(undefined1 *)(*(longlong *)(local_res8 + 0x18) + 0x90));
  if (*(longlong *)(local_res8 + 0x148) != 0) {
    FUN_00680510(local_38,*(undefined8 *)(local_res8 + 0x148));
  }
  if (*(int *)(local_res8 + 0x154) != 0) {
    FUN_00680590(local_38,*(int *)(local_res8 + 0x154));
  }
  FUN_00414560(&local_78,3);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}


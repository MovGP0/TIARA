/* Ghidra address: 00acf0d0 */
/* Ghidra symbol: FUN_00acf0d0 */


longlong FUN_00acf0d0(longlong param_1,char param_2,undefined8 param_3,undefined4 param_4,
                     longlong param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong local_res8;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 local_60;
  undefined1 *local_50;
  int local_38;
  char local_31;
  longlong *local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_50 = auStack_88;
  local_res8 = param_1;
  puVar1 = auStack_88;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_50;
  }
  local_50 = puVar1;
  local_68 = param_5;
  local_60 = param_6;
  FUN_00a99130(local_res8,0,param_3,param_4);
  if (*(longlong *)(local_res8 + 0xe0) == 0) {
    FUN_00ac1910(local_res8,&LAB_00acf43c);
  }
  *(undefined1 *)(local_res8 + 0xa8) = 3;
  local_20 = 0;
  iVar4 = *(int *)(param_5 + 0x10);
  local_38 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar2 = FUN_00a72910(param_5,local_38);
      if (*(char *)(lVar2 + 8) == '\x10') {
        local_31 = '\x01';
        local_20 = FUN_00a72910(param_5,local_38);
        goto code_r0x00acf202;
      }
      local_38 = local_38 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  local_31 = '\0';
code_r0x00acf202:
  if (local_31 != '\0') {
    *(undefined1 *)(local_res8 + 0x149) = 1;
  }
  local_28 = *(undefined8 *)(*(longlong *)(local_res8 + 0x18) + 0xc0);
  uVar3 = FUN_00689210(&PTR_FUN_00ac8500,1,local_28);
  *(undefined8 *)(local_res8 + 0x140) = uVar3;
  local_30 = *(longlong **)(local_res8 + 0x140);
  FUN_0064cb30(local_30,0xfffff060);
  FUN_0064cbf0(local_30,0xd);
  FUN_0064cc50(local_30,0xd);
  local_30[0x7e] = *(longlong *)(local_res8 + 0xf8);
  local_30[0x7d] = (longlong)FUN_00a98830;
  local_30[0x78] = local_res8;
  local_30[0x77] = (longlong)FUN_00a99b90;
  local_30[0x7a] = local_res8;
  local_30[0x79] = (longlong)FUN_00a99c40;
  local_30[0x2e] = local_res8;
  local_30[0x2d] = (longlong)FUN_00a99800;
  (**(code **)(*local_30 + 0x128))(local_30,*(char *)(local_res8 + 0x110) == '\0');
  (**(code **)(*local_30 + 0x130))(local_30,local_28);
  (**(code **)(*local_30 + 0x268))(local_30,*(undefined1 *)(local_res8 + 0x149));
  local_30[0x40] = local_res8;
  local_30[0x3f] = (longlong)FUN_00a99e30;
  (**(code **)(*local_30 + 0x148))
            (local_30,*(undefined1 *)(*(longlong *)(local_res8 + 0x18) + 0x90));
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}


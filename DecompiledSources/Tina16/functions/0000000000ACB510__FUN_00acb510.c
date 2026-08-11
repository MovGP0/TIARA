/* Ghidra address: 00acb510 */
/* Ghidra symbol: FUN_00acb510 */


longlong FUN_00acb510(longlong param_1,char param_2,undefined8 param_3,undefined4 param_4,
                     longlong param_5,longlong param_6)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong local_res8;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  undefined1 *local_50;
  int local_38;
  char local_31;
  longlong *local_30;
  longlong local_28;
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
  FUN_00acd220(local_res8,0,param_3,param_4);
  local_28 = 0;
  *(undefined4 *)(local_res8 + 0xec) = *(undefined4 *)(param_6 + 0x70);
  local_20 = *(undefined8 *)(*(longlong *)(local_res8 + 0x18) + 0xc0);
  uVar2 = FUN_00685410(&PTR_FUN_009eaca0,1,local_20);
  *(undefined8 *)(local_res8 + 0x158) = uVar2;
  local_30 = *(longlong **)(local_res8 + 0x158);
  FUN_0064cb30(local_30,0xfffff060);
  uVar2 = FUN_00a5b160(param_6);
  (**(code **)(*(longlong *)local_30[0x17] + 0x10))((longlong *)local_30[0x17],uVar2);
  *(longlong *)(local_res8 + 0x148) = local_30[0x17];
  (**(code **)(*local_30 + 0x318))(local_30,2);
  local_30[0x78] = local_res8;
  local_30[0x77] = (longlong)FUN_00a99b90;
  local_30[0x7a] = local_res8;
  local_30[0x79] = (longlong)FUN_00a99c40;
  local_30[0x40] = local_res8;
  local_30[0x3f] = (longlong)FUN_00a99e30;
  local_30[0x9a] = local_res8;
  local_30[0x99] = (longlong)FUN_00a99e30;
  (**(code **)(*local_30 + 0x128))(local_30,*(char *)(local_res8 + 0x110) == '\0');
  (**(code **)(**(longlong **)(local_res8 + 0x158) + 0x148))
            (*(longlong **)(local_res8 + 0x158),
             *(undefined1 *)(*(longlong *)(local_res8 + 0x18) + 0x90));
  (**(code **)(**(longlong **)(local_res8 + 0x158) + 0x130))
            (*(longlong **)(local_res8 + 0x158),local_20);
  iVar4 = *(int *)(param_5 + 0x10);
  local_38 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar3 = FUN_00a72910(param_5,local_38);
      if (*(char *)(lVar3 + 8) == '>') {
        local_31 = '\x01';
        local_28 = FUN_00a72910(param_5,local_38);
        goto code_r0x00acb7bc;
      }
      local_38 = local_38 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  local_31 = '\0';
code_r0x00acb7bc:
  if (local_31 != '\0') {
    FUN_00414ad0(local_res8 + 0x168,*(undefined8 *)(local_28 + 0x28));
    FUN_006842f0(*(undefined8 *)(local_res8 + 0x158),*(undefined8 *)(local_res8 + 0x168));
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}


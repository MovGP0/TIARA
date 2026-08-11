/* Ghidra address: 00aca630 */
/* Ghidra symbol: FUN_00aca630 */


longlong FUN_00aca630(longlong param_1,char param_2,undefined8 param_3,undefined4 param_4,
                     longlong param_5,longlong param_6)

{
  undefined1 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong local_res8;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  undefined1 *local_50;
  int local_40;
  undefined1 local_39;
  longlong *local_38;
  undefined8 local_30;
  undefined1 local_21;
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
  local_20 = 0;
  *(undefined4 *)(local_res8 + 0xec) = *(undefined4 *)(param_6 + 0x70);
  iVar5 = *(int *)(param_5 + 0x10);
  local_40 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar3 = FUN_00a72910(param_5,local_40);
      if (*(char *)(lVar3 + 8) == '2') {
        local_39 = 1;
        local_20 = FUN_00a72910(param_5,local_40);
        goto code_r0x00aca747;
      }
      local_40 = local_40 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  local_39 = 0;
code_r0x00aca747:
  local_21 = local_39;
  local_30 = *(undefined8 *)(*(longlong *)(local_res8 + 0x18) + 0xc0);
  uVar4 = FUN_0068b1b0(&PTR_FUN_006779f0,1,local_30);
  *(undefined8 *)(local_res8 + 0x158) = uVar4;
  local_38 = *(longlong **)(local_res8 + 0x158);
  FUN_0064cb30(local_38,0xfffff060);
  (**(code **)(*local_38 + 0x130))(local_38,local_30);
  cVar2 = FUN_00a554f0(param_6);
  if (cVar2 != '\0') {
    FUN_0068c150(local_38,0);
  }
  uVar4 = FUN_00a5b160(param_6);
  (**(code **)(*(longlong *)local_38[0x17] + 0x10))((longlong *)local_38[0x17],uVar4);
  *(longlong *)(local_res8 + 0x148) = local_38[0x17];
  (**(code **)(*local_38 + 0x2b8))(local_38,local_21);
  FUN_0068bb60(local_38,local_21);
  local_38[0x78] = local_res8;
  local_38[0x77] = (longlong)FUN_00a99b90;
  local_38[0x7a] = local_res8;
  local_38[0x79] = (longlong)FUN_00a99c40;
  local_38[0x40] = local_res8;
  local_38[0x3f] = (longlong)FUN_00a99e30;
  local_38[0x2e] = local_res8;
  local_38[0x2d] = (longlong)FUN_00a99800;
  (**(code **)(*local_38 + 0x128))(local_38,*(char *)(local_res8 + 0x110) == '\0');
  (**(code **)(*local_38 + 0x148))
            (local_38,*(undefined1 *)(*(longlong *)(local_res8 + 0x18) + 0x90));
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}


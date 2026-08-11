/* Ghidra address: 00f70810 */
/* Ghidra symbol: FUN_00f70810 */


longlong * FUN_00f70810(longlong *param_1,char param_2,char param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *local_res8;
  undefined1 auStack_a8 [32];
  int local_88;
  undefined4 local_80;
  undefined *local_78;
  undefined *local_70;
  undefined1 local_68;
  undefined1 *local_50;
  int local_44;
  int local_40;
  int local_3c;
  longlong local_38;
  longlong local_30;
  
  local_50 = auStack_a8;
  local_res8 = param_1;
  puVar1 = auStack_a8;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_50;
  }
  local_50 = puVar1;
  FUN_00f6e720(local_res8,0);
  *(char *)(local_res8 + 6) = param_3;
  *(undefined4 *)((longlong)local_res8 + 0x14) = param_4;
  local_40 = DAT_0202eec0;
  local_44 = DAT_0202eec0 * 3;
  local_30 = FUN_00f6ef60(local_res8,5,0);
  iVar3 = local_44 * -2;
  FUN_00f6e1b0(local_30,iVar3,0);
  FUN_00f6e1b0(local_30,0,local_44);
  iVar4 = local_44 * 2;
  FUN_00f6e1b0(local_30,iVar4,0);
  iVar5 = -local_44;
  FUN_00f6e1b0(local_30,0,iVar5);
  FUN_00f6e1b0(local_30,iVar3,0);
  uVar2 = FUN_015fd610(0,0);
  *(undefined8 *)(local_30 + 0x30) = uVar2;
  *(undefined4 *)((longlong)local_res8 + 0x34) = 0;
  *(undefined4 *)(local_res8 + 7) = 0;
  local_3c = DAT_0202eec4;
  iVar6 = local_44 + DAT_0202eec4;
  local_88 = iVar6;
  FUN_00f6ecf0(local_res8,0,local_44,0);
  iVar3 = iVar4 + local_3c;
  local_88 = 0;
  FUN_00f6ecf0(local_res8,iVar4,0,iVar3);
  iVar4 = iVar5 - local_3c;
  local_88 = iVar4;
  FUN_00f6ecf0(local_res8,0,iVar5,0);
  FUN_00f6e300(local_30,0,iVar4,2);
  FUN_00f6e300(local_30,iVar3,0,0);
  FUN_00f6e300(local_30,0,iVar6,3);
  if (param_3 == '\x01') {
    local_88 = 8;
    local_80 = 0;
    local_78 = (undefined *)0x0;
    local_70 = &DAT_00f70c6c;
    local_68 = 0;
    local_38 = FUN_00f6ee50(local_res8,0,0,DAT_0202eeb8);
  }
  else if (param_3 == '\x02') {
    local_88 = 8;
    local_80 = 0;
    local_78 = (undefined *)0x0;
    local_70 = &DAT_00f70c80;
    local_68 = 0;
    local_38 = FUN_00f6ee50(local_res8,0,0,DAT_0202eeb8);
  }
  *(undefined1 *)(local_38 + 0x71) = 1;
  local_88 = 6;
  local_80 = 0xff0000;
  local_78 = &DAT_00f70c90;
  local_70 = &DAT_00f70c90;
  local_68 = 1;
  FUN_00f6ee50(local_res8,7,local_44 + 8,DAT_0202eeb8);
  local_88 = 6;
  local_80 = 0xff;
  local_78 = &DAT_00f70ca0;
  local_70 = &DAT_00f70ca0;
  local_68 = 1;
  FUN_00f6ee50(local_res8,iVar3 + 3,0xfffffff1,DAT_0202eeb8);
  *(undefined1 *)((longlong)local_res8 + 0x126) = 1;
  if (param_3 == '\x01') {
    FUN_00414ad0(local_res8 + 0x22,&DAT_00f70cb0);
    *(undefined4 *)(local_res8 + 0x24) = 0;
    *(undefined1 *)((longlong)local_res8 + 0x125) = 0;
  }
  else if (param_3 == '\x02') {
    FUN_00414ad0(local_res8 + 0x22,&DAT_00f70cb0);
    *(undefined4 *)(local_res8 + 0x24) = 0;
    *(undefined1 *)((longlong)local_res8 + 0x124) = 0;
  }
  (**(code **)(*local_res8 + 0x10))(local_res8);
  FUN_00f6f120(local_res8,3);
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}


/* Ghidra address: 00f73a20 */
/* Ghidra symbol: FUN_00f73a20 */


longlong * FUN_00f73a20(longlong *param_1,char param_2,char param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong *local_res8;
  undefined1 auStack_b8 [32];
  int local_98;
  undefined4 local_90;
  undefined8 local_88;
  wchar_t *local_80;
  undefined1 local_78;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  int local_40;
  uint local_3c;
  longlong local_38;
  longlong local_30;
  
  local_50 = auStack_b8;
  local_60 = 0;
  local_58 = 0;
  local_res8 = param_1;
  puVar3 = auStack_b8;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar3 = local_50;
  }
  local_50 = puVar3;
  FUN_00f6e720(local_res8,0);
  *(char *)(local_res8 + 6) = param_3;
  *(undefined4 *)((longlong)local_res8 + 0x14) = param_4;
  local_3c = DAT_0202eec0;
  local_30 = FUN_00f6ef60(local_res8,5,0);
  iVar5 = local_3c * -5;
  iVar1 = local_3c * 2;
  FUN_00f6e1b0(local_30,iVar5,iVar1);
  FUN_00f6e1b0(local_30,local_3c * 7,iVar1);
  iVar2 = local_3c * -2;
  FUN_00f6e1b0(local_30,(ulonglong)local_3c * 5,iVar2);
  FUN_00f6e1b0(local_30,local_3c * -7,iVar2);
  FUN_00f6e1b0(local_30,iVar5,iVar1);
  uVar4 = FUN_015fd610(0,0);
  *(undefined8 *)(local_30 + 0x30) = uVar4;
  if (param_3 == '\x06') {
    local_98 = 7;
    local_90 = 0;
    local_88 = 0;
    local_80 = L"x <-";
    local_78 = 0;
    local_38 = FUN_00f6ee50(local_res8,0,0,DAT_0202eeb8);
  }
  else if (param_3 == '\a') {
    local_98 = 7;
    local_90 = 0;
    local_88 = 0;
    local_80 = L"port <-";
    local_78 = 0;
    local_38 = FUN_00f6ee50(local_res8,0,0,DAT_0202eeb8);
  }
  *(undefined1 *)(local_38 + 0x71) = 1;
  local_40 = DAT_0202eec4;
  iVar6 = iVar2 - DAT_0202eec4;
  local_98 = iVar6;
  FUN_00f6ecf0(local_res8,0,iVar2,0);
  iVar5 = iVar1 + local_40;
  local_98 = iVar5;
  FUN_00f6ecf0(local_res8,0,iVar1,0);
  FUN_00f6e300(local_30,0,iVar6,2);
  FUN_00f6e300(local_30,0,iVar5,3);
  *(undefined4 *)((longlong)local_res8 + 0x34) = 0;
  *(undefined4 *)(local_res8 + 7) = 0;
  *(undefined4 *)(local_res8 + 0x24) = 0;
  *(undefined4 *)((longlong)local_res8 + 0x124) = 0xff;
  if (param_3 == '\x06') {
    FUN_00414ad0(local_res8 + 0x22,&DAT_00f73e90);
    *(undefined1 *)(local_res8 + 0x25) = 0;
    FUN_00f61230(&local_58,*(undefined4 *)((longlong)local_res8 + 0x14));
    FUN_00414ad0(local_res8 + 0x23,local_58);
  }
  else if (param_3 == '\a') {
    FUN_00f61230(&local_60,*(undefined4 *)((longlong)local_res8 + 0x14));
    FUN_00414ad0(local_res8 + 0x22,local_60);
    *(undefined1 *)(local_res8 + 0x25) = 1;
    FUN_00414480(local_res8 + 0x23);
  }
  (**(code **)(*local_res8 + 0x10))(local_res8);
  FUN_00f6f120(local_res8,2);
  FUN_00414560(&local_60,2);
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}


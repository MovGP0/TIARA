/* Ghidra address: 00f74230 */
/* Ghidra symbol: FUN_00f74230 */


longlong * FUN_00f74230(longlong *param_1,char param_2,char param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  longlong *local_res8;
  undefined1 auStack_b8 [32];
  int local_98;
  undefined4 local_90;
  wchar_t *local_88;
  wchar_t *local_80;
  undefined1 local_78;
  undefined1 *local_60;
  int local_58;
  undefined4 local_54;
  double local_50;
  double local_48;
  double local_40;
  int local_34;
  int local_30;
  int local_2c;
  longlong local_28;
  longlong local_20;
  
  local_60 = auStack_b8;
  local_res8 = param_1;
  puVar1 = auStack_b8;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_60;
  }
  local_60 = puVar1;
  FUN_00f6e720(local_res8,0);
  *(char *)(local_res8 + 6) = param_3;
  local_34 = 0;
  *(undefined4 *)((longlong)local_res8 + 0x14) = param_4;
  local_30 = DAT_0202eec0;
  local_20 = FUN_00f6ef60(local_res8,500,0);
  iVar3 = local_30 * 2;
  FUN_00f6e1b0(local_20,local_30 * -6,iVar3);
  FUN_00f6e1b0(local_20,(ulonglong)(uint)(local_30 * 2) * 3,iVar3);
  local_34 = local_34 + 2;
  local_48 = 10.0;
  local_50 = (double)iVar3;
  local_40 = 90.0;
  while( true ) {
    if (local_40 <= local_48 + -90.0) break;
    local_40 = local_40 - local_48;
    dVar5 = (double)FUN_0040bcd0((local_40 * 3.141592653589793) / 180.0);
    local_58 = FUN_0040c770(local_50 * dVar5);
    local_58 = local_30 * 6 + local_58;
    dVar5 = (double)FUN_0040bdd0((local_40 * 3.141592653589793) / 180.0);
    local_54 = FUN_0040c770(local_50 * dVar5);
    if (500 < local_34) {
      FUN_00f60670(0);
    }
    FUN_00f6e1b0(local_20,local_58,local_54);
    local_34 = local_34 + 1;
  }
  iVar3 = local_30 * -2;
  FUN_00f6e1b0(local_20,(ulonglong)(uint)(local_30 * 2) * 3,iVar3);
  FUN_00f6e1b0(local_20,local_30 * -6,iVar3);
  local_34 = local_34 + 2;
  local_40 = -90.0;
  while (local_40 < 90.0 - local_48) {
    local_40 = local_40 + local_48;
    dVar5 = (double)FUN_0040bcd0((local_40 * 3.141592653589793) / 180.0);
    local_58 = FUN_0040c770(local_50 * dVar5);
    local_58 = local_30 * -6 - local_58;
    dVar5 = (double)FUN_0040bdd0((local_40 * 3.141592653589793) / 180.0);
    local_54 = FUN_0040c770(local_50 * dVar5);
    if (500 < local_34) {
      FUN_00f60670(0);
    }
    FUN_00f6e1b0(local_20,local_58,local_54);
    local_34 = local_34 + 1;
  }
  if (500 < local_34) {
    FUN_00f60670(0);
  }
  iVar3 = local_30 * 2;
  FUN_00f6e1b0(local_20,local_30 * -6,iVar3);
  local_34 = local_34 + 1;
  uVar2 = FUN_015fd610(0,0);
  *(undefined8 *)(local_20 + 0x30) = uVar2;
  FUN_00f6e170(local_20,local_34);
  if (param_3 == '\b') {
    local_98 = 7;
    local_90 = 0;
    local_88 = L"START";
    local_80 = L"START";
    local_78 = 0;
    local_28 = FUN_00f6ee50(local_res8,0,0,DAT_0202eeb8);
  }
  else {
    local_98 = 7;
    local_90 = 0;
    local_88 = L"STOP";
    local_80 = L"STOP";
    local_78 = 0;
    local_28 = FUN_00f6ee50(local_res8,0,0,DAT_0202eeb8);
  }
  *(undefined1 *)(local_28 + 0x71) = 1;
  local_2c = DAT_0202eec4;
  if (param_3 == '\b') {
    iVar3 = local_30 * -2 - DAT_0202eec4;
    local_98 = iVar3;
    FUN_00f6ecf0(local_res8,0,local_30 * -2,0);
    FUN_00f6e300(local_20,0,iVar3,2);
  }
  else {
    iVar4 = iVar3 + DAT_0202eec4;
    local_98 = iVar4;
    FUN_00f6ecf0(local_res8,0,iVar3,0);
    FUN_00f6e300(local_20,0,iVar4,3);
  }
  (**(code **)(*local_res8 + 0x10))(local_res8);
  *(undefined4 *)((longlong)local_res8 + 0x34) = 0;
  *(undefined4 *)(local_res8 + 7) = 0;
  *(undefined1 *)(local_res8 + 0x22) = 0;
  FUN_00f6f120(local_res8,1);
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}


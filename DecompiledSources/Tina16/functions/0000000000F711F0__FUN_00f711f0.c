/* Ghidra address: 00f711f0 */
/* Ghidra symbol: FUN_00f711f0 */


longlong * FUN_00f711f0(longlong *param_1,char param_2,char param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong *local_res8;
  undefined1 auStack_a8 [32];
  int local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined **local_70;
  undefined1 local_68;
  undefined8 local_58;
  undefined1 *local_50;
  int local_40;
  int local_3c;
  longlong local_38;
  longlong local_30;
  
  local_50 = auStack_a8;
  local_58 = 0;
  local_res8 = param_1;
  puVar2 = auStack_a8;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar2 = local_50;
  }
  local_50 = puVar2;
  FUN_00f6e720(local_res8,0);
  *(char *)(local_res8 + 6) = param_3;
  *(undefined4 *)((longlong)local_res8 + 0x14) = param_4;
  local_3c = DAT_0202eec0;
  lVar3 = FUN_004b6930(&PTR_FUN_00478280,1);
  local_res8[0xb8] = lVar3;
  local_30 = FUN_00f6ef60(local_res8,5,0);
  iVar6 = local_3c * -6;
  iVar1 = local_3c * 2;
  FUN_00f6e1b0(local_30,iVar6,iVar1);
  iVar5 = local_3c * 6;
  FUN_00f6e1b0(local_30,iVar5,iVar1);
  iVar7 = local_3c * -2;
  FUN_00f6e1b0(local_30,iVar5,iVar7);
  FUN_00f6e1b0(local_30,iVar6,iVar7);
  FUN_00f6e1b0(local_30,iVar6,iVar1);
  uVar4 = FUN_015fd610(0,0);
  *(undefined8 *)(local_30 + 0x30) = uVar4;
  if (param_3 == '\x03') {
    local_88 = 7;
    local_80 = 0;
    local_78 = 0;
    local_70 = (undefined **)0xf718bc;
    local_68 = 0;
    local_38 = FUN_00f6ee50(local_res8,0,0,DAT_0202eeb8);
  }
  else if (param_3 == '\x04') {
    local_88 = 7;
    local_80 = 0;
    local_78 = 0;
    local_70 = &PTR_DAT_00f718d4;
    local_68 = 0;
    local_38 = FUN_00f6ee50(local_res8,0,0,DAT_0202eeb8);
  }
  else if (param_3 == '\x05') {
    local_88 = 7;
    local_80 = 0;
    local_78 = 0;
    local_70 = (undefined **)0xf718e8;
    local_68 = 0;
    local_38 = FUN_00f6ee50(local_res8,0,0,DAT_0202eeb8);
  }
  else if (param_3 == '\v') {
    local_88 = 7;
    local_80 = 0;
    local_78 = 0;
    local_70 = (undefined **)0xf71900;
    local_68 = 0;
    local_38 = FUN_00f6ee50(local_res8,0,0,DAT_0202eeb8);
  }
  else if (param_3 == '\f') {
    local_88 = 7;
    local_80 = 0;
    local_78 = 0;
    local_70 = (undefined **)0xf7191c;
    local_68 = 0;
    local_38 = FUN_00f6ee50(local_res8,0,0,DAT_0202eeb8);
  }
  else if (param_3 == '\r') {
    local_88 = 7;
    local_80 = 0;
    local_78 = 0;
    local_70 = (undefined **)0xf71934;
    local_68 = 0;
    local_38 = FUN_00f6ee50(local_res8,0,0,DAT_0202eeb8);
  }
  *(undefined1 *)(local_38 + 0x71) = 1;
  local_40 = DAT_0202eec4;
  iVar5 = iVar7 - DAT_0202eec4;
  local_88 = iVar5;
  FUN_00f6ecf0(local_res8,0,iVar7,0);
  iVar7 = iVar1 + local_40;
  local_88 = iVar7;
  FUN_00f6ecf0(local_res8,0,iVar1,0);
  FUN_00f6e300(local_30,0,iVar5,2);
  FUN_00f6e300(local_30,0,iVar7,3);
  *(undefined4 *)((longlong)local_res8 + 0x34) = 0;
  *(undefined4 *)(local_res8 + 7) = 0;
  *(undefined1 *)((longlong)local_res8 + 0x125) = 1;
  if (param_3 == '\x03') {
    FUN_00414ad0(local_res8 + 0x22,&DAT_00f7194c);
    *(undefined1 *)((longlong)local_res8 + 0x124) = 1;
    FUN_00414480(local_res8 + 0x23);
    *(undefined4 *)(local_res8 + 0x24) = 0;
  }
  else if (param_3 == '\x04') {
    FUN_00414ad0(local_res8 + 0x22,&DAT_00f7194c);
    *(undefined1 *)((longlong)local_res8 + 0x124) = 0;
    FUN_00414ad0(local_res8 + 0x23,&DAT_00f71960);
    *(undefined4 *)(local_res8 + 0x24) = 1;
    *(undefined1 *)((longlong)local_res8 + 0x126) = 0;
  }
  else if (param_3 == '\x05') {
    *(undefined4 *)(local_res8 + 0x24) = 1;
  }
  else if (param_3 == '\v') {
    *(undefined1 *)(local_res8 + 0x25) = 1;
    *(undefined1 *)((longlong)local_res8 + 0x129) = 0;
    *(int *)PTR_DAT_02004378 = *(int *)PTR_DAT_02004378 + 1;
    FUN_01d43440(&local_58,*(undefined4 *)PTR_DAT_02004378);
    FUN_00416ba0(local_res8 + 0x26,L"Interrupt_",local_58);
    if ((*(int *)((longlong)local_res8 + 0x14) == 1) || (*(int *)((longlong)local_res8 + 0x14) == 8)
       ) {
      *(undefined4 *)(local_res8 + 0x2e) = 0;
      *(undefined1 *)((longlong)local_res8 + 0x174) = 1;
      *(undefined4 *)(local_res8 + 0x2f) = 10;
      *(undefined4 *)(local_res8 + 0x6b) = 0;
      *(undefined4 *)((longlong)local_res8 + 0x35c) = 0;
      *(undefined4 *)(local_res8 + 0x6c) = 0;
      *(undefined4 *)((longlong)local_res8 + 0x364) = 0;
      local_res8[0x6d] = 0x412e848000000000;
      local_res8[0x6e] = 0x3ee4f8b588e368f0;
      local_res8[0x6f] = 0x3eb0c6f7a0b5ed8d;
    }
  }
  (**(code **)(*local_res8 + 0x10))(local_res8);
  FUN_00f6f120(local_res8,2);
  FUN_00414480(&local_58);
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}


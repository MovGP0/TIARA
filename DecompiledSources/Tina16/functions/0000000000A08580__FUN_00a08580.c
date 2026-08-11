/* Ghidra address: 00a08580 */
/* Ghidra symbol: FUN_00a08580 */


longlong * FUN_00a08580(longlong *param_1,char param_2,longlong param_3)

{
  undefined1 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *local_res8;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong *local_30;
  longlong local_28;
  int local_1c;
  
  local_40 = auStack_68;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_40;
  }
  local_40 = puVar1;
  FUN_009ec850(local_res8,0,0);
  (**(code **)(*local_res8 + 0x10))(local_res8,param_3);
  *(undefined4 *)((longlong)local_res8 + 0x84) = *(undefined4 *)(param_3 + 0x84);
  *(undefined4 *)(local_res8 + 0x11) = *(undefined4 *)(param_3 + 0x88);
  local_28 = (longlong)local_res8 + 0x9a;
  local_30 = local_res8 + 0x10;
  FUN_00409a70(param_3 + 0x80,local_res8 + 0x10,(longlong)((int)local_28 - (int)local_30));
  *(undefined1 *)((longlong)local_res8 + 0xcd) = 1;
  plVar2 = (longlong *)FUN_009ec850(&PTR_FUN_009eb620,1,0);
  local_res8[0x16] = (longlong)plVar2;
  (**(code **)(*plVar2 + 0x10))(plVar2,*(undefined8 *)(param_3 + 0xb0));
  lVar3 = FUN_00410e60(&PTR_FUN_00a07a58,1);
  local_res8[0x17] = lVar3;
  iVar5 = (int)local_res8[0x12];
  local_1c = 1;
  if (0 < iVar5) {
    do {
      uVar4 = FUN_00a08e00(*(undefined8 *)(param_3 + 0xb8),local_1c);
      uVar4 = FUN_00a08380(&DAT_00a077c0,1,uVar4);
      FUN_004ae7e0(local_res8[0x17],uVar4);
      local_1c = local_1c + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *(undefined4 *)((longlong)local_res8 + 0x8c) = 1;
  *(undefined4 *)(local_res8 + 0x18) = 1;
  if ((char)local_res8[0x10] != '\0') {
    *(undefined1 *)((longlong)local_res8 + 0xac) = 2;
  }
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}


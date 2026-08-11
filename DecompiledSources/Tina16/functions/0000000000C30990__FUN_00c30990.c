/* Ghidra address: 00c30990 */
/* Ghidra symbol: FUN_00c30990 */


longlong FUN_00c30990(longlong param_1,char param_2,longlong param_3)

{
  undefined2 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong local_res8;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined4 *local_38;
  int local_2c;
  
  local_40 = auStack_68;
  local_res8 = param_1;
  puVar2 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar2 = local_40;
  }
  local_40 = puVar2;
  FUN_00410e60(local_res8,0);
  *(undefined4 *)(local_res8 + 0x10) = *(undefined4 *)(param_3 + 0x10);
  *(longlong *)(local_res8 + 0x18) = param_3;
  uVar3 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x28) = uVar3;
  uVar3 = FUN_004095c0((longlong)(*(int *)(local_res8 + 0x10) * 0x18));
  *(undefined8 *)(local_res8 + 8) = uVar3;
  uVar3 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x20) = uVar3;
  FUN_004aef40(uVar3,*(undefined4 *)(local_res8 + 0x10));
  iVar5 = *(int *)(local_res8 + 0x10);
  local_2c = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar4 = (longlong)local_2c;
      local_38 = (undefined4 *)(*(longlong *)(local_res8 + 8) + lVar4 * 0x18);
      FUN_004ae7e0(*(undefined8 *)(local_res8 + 0x20),*(longlong *)(local_res8 + 8) + lVar4 * 0x18);
      local_38[1] = local_2c;
      *local_38 = 0;
      local_38[4] = 0;
      puVar1 = (undefined2 *)(*(longlong *)(param_3 + 8) + lVar4 * 3);
      *(undefined2 *)(local_38 + 4) = *puVar1;
      *(undefined1 *)((longlong)local_38 + 0x12) = *(undefined1 *)(puVar1 + 1);
      local_38[2] = 0x100;
      local_2c = local_2c + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}


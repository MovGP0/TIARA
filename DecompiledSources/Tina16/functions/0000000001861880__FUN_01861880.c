/* Ghidra address: 01861880 */
/* Ghidra symbol: FUN_01861880 */


longlong * FUN_01861880(longlong *param_1,char param_2,longlong param_3)

{
  undefined1 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_1c;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_01860570(local_res8,0,0);
  (**(code **)(*local_res8 + 0x10))(local_res8,param_3);
  *(undefined1 *)((longlong)local_res8 + 0x94) = *(undefined1 *)(param_3 + 0x94);
  *(undefined1 *)((longlong)local_res8 + 0x95) = *(undefined1 *)(param_3 + 0x95);
  *(undefined4 *)(local_res8 + 0x11) = *(undefined4 *)(param_3 + 0x88);
  *(undefined4 *)((longlong)local_res8 + 0x8c) = *(undefined4 *)(param_3 + 0x8c);
  FUN_00410f20(local_res8[0x13]);
  plVar2 = (longlong *)FUN_01860570(&PTR_FUN_0185b3d8,1,0);
  local_res8[0x13] = (longlong)plVar2;
  (**(code **)(*plVar2 + 0x10))(plVar2,*(undefined8 *)(param_3 + 0x98));
  lVar3 = FUN_0185cb40(&DAT_0185b848,1,*(undefined8 *)(param_3 + 0x80));
  local_res8[0x10] = lVar3;
  lVar3 = FUN_00410e60(&PTR_FUN_01861010,1);
  local_res8[0x14] = lVar3;
  iVar5 = *(int *)(param_3 + 0x90);
  *(int *)(local_res8 + 0x12) = iVar5;
  local_1c = 1;
  if (0 < iVar5) {
    do {
      uVar4 = FUN_01861e50(*(undefined8 *)(param_3 + 0xa0),local_1c);
      uVar4 = FUN_018616d0(&DAT_01860e28,1,uVar4);
      FUN_004ae7e0(local_res8[0x14],uVar4);
      local_1c = local_1c + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}


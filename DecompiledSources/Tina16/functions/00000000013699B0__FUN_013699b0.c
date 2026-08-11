/* Ghidra address: 013699b0 */
/* Ghidra symbol: FUN_013699b0 */


longlong * FUN_013699b0(longlong *param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  longlong *local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_01364e80(local_res8,0,param_3);
  *(undefined4 *)(local_res8 + 3) = 0;
  *(undefined4 *)((longlong)local_res8 + 0x1c) = 0;
  *(int *)(local_res8 + 4) = (int)local_res8[3];
  *(undefined4 *)((longlong)local_res8 + 0x24) = *(undefined4 *)((longlong)local_res8 + 0x1c);
  *(undefined1 *)(local_res8 + 5) = 0;
  uVar2 = (**(code **)(*local_res8 + 0x30))(local_res8);
  (**(code **)(*local_res8 + 0x38))(local_res8,uVar2);
  iVar3 = (**(code **)(*local_res8 + 0x78))(local_res8);
  *(int *)((longlong)local_res8 + 0x2c) = iVar3;
  if (iVar3 == -2) {
    (**(code **)(*local_res8 + 0x10))(local_res8);
  }
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}


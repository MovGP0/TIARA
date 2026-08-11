/* Ghidra address: 01891c80 */
/* Ghidra symbol: FUN_01891c80 */


longlong * FUN_01891c80(longlong *param_1,char param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *local_res8;
  undefined1 auStack_58 [40];
  code *local_30;
  longlong *local_28;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_res8 = param_1;
  puVar2 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar2 = local_20;
  }
  local_20 = puVar2;
  FUN_00685410(local_res8,0,param_3);
  local_28 = local_res8;
  local_30 = FUN_01892010;
  lVar4 = FUN_004d6210(&local_30);
  local_res8[0xb2] = lVar4;
  local_res8[0xb3] = 0;
  uVar3 = FUN_018910d0(local_res8[0x17]);
  (**(code **)(*local_res8 + 0x2d8))(local_res8,uVar3);
  FUN_0064cbf0(local_res8,100);
  *(undefined4 *)((longlong)local_res8 + 0x5a4) = 0;
  iVar1 = *(int *)(*(longlong *)PTR_DAT_02005950 + 0x98);
  *(int *)((longlong)local_res8 + 0x5ac) = iVar1;
  uVar3 = FUN_0040c770((double)(iVar1 * 0xb) / (double)*(int *)PTR_DAT_02001400);
  *(undefined4 *)(local_res8 + 0xb1) = uVar3;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}


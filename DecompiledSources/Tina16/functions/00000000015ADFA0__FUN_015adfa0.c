/* Ghidra address: 015adfa0 */
/* Ghidra symbol: FUN_015adfa0 */


longlong * FUN_015adfa0(longlong *param_1,char param_2,longlong *param_3,undefined2 param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  (**(code **)(*local_res8 + 0x48))
            (*local_res8,(longlong)local_res8 + 0x44,local_res8 + 8,local_res8 + 9);
  lVar2 = FUN_004095c0((longlong)*(int *)((longlong)local_res8 + 0x44));
  local_res8[0xb] = lVar2;
  lVar2 = FUN_004095c0((longlong)*(int *)((longlong)local_res8 + 0x44));
  local_res8[0xc] = lVar2;
  lVar2 = FUN_004095c0((longlong)*(int *)((longlong)local_res8 + 0x44));
  local_res8[10] = lVar2;
  lVar2 = FUN_004095c0((longlong)(int)local_res8[9]);
  local_res8[0xd] = lVar2;
  lVar2 = FUN_004095c0((longlong)*(int *)((longlong)local_res8 + 0x44));
  local_res8[0xf] = lVar2;
  lVar2 = FUN_004095c0((longlong)*(int *)((longlong)local_res8 + 0x44));
  local_res8[0x10] = lVar2;
  (**(code **)(*local_res8 + 0x78))(local_res8);
  *(undefined4 *)((longlong)local_res8 + 0x74) = *(undefined4 *)((longlong)local_res8 + 0x44);
  if (*param_3 != 0) {
    FUN_015ae5e0(local_res8,param_3,param_4,0);
  }
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}


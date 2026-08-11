/* Ghidra address: 00d21380 */
/* Ghidra symbol: FUN_00d21380 */


longlong * FUN_00d21380(longlong *param_1,char param_2,longlong param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
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
  FUN_00cd6090(local_res8,0,param_4);
  lVar2 = FUN_00d0cca0();
  local_res8[7] = lVar2;
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
  (**(code **)(*local_res8 + 0x78))(local_res8);
  if (param_3 != 0) {
    FUN_00d217e0(local_res8,param_3,0);
  }
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}


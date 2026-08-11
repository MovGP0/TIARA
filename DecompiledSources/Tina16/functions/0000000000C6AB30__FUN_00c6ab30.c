/* Ghidra address: 00c6ab30 */
/* Ghidra symbol: FUN_00c6ab30 */


longlong * FUN_00c6ab30(longlong *param_1,char param_2,undefined8 param_3)

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
  FUN_006f9550(local_res8,0,param_3);
  lVar2 = FUN_0060cbe0(&PTR_FUN_005fa0c8,1);
  local_res8[0x6a] = lVar2;
  lVar2 = FUN_0060cbe0(&PTR_FUN_005fa0c8,1);
  local_res8[0x6b] = lVar2;
  lVar2 = FUN_00608c80(&PTR_FUN_005f92e8,1);
  local_res8[0x69] = lVar2;
  local_res8[0x2c] = (longlong)local_res8;
  local_res8[0x2b] = (longlong)FUN_00c6ad80;
  local_res8[0x30] = (longlong)local_res8;
  local_res8[0x2f] = (longlong)FUN_00c6ade0;
  local_res8[0x2e] = (longlong)local_res8;
  local_res8[0x2d] = (longlong)FUN_00c6ad90;
  local_res8[0x3e] = (longlong)local_res8;
  local_res8[0x3d] = (longlong)FUN_00c6a860;
  local_res8[0x3c] = (longlong)local_res8;
  local_res8[0x3b] = (longlong)FUN_00c6ab10;
  local_res8[0x34] = (longlong)local_res8;
  local_res8[0x33] = (longlong)FUN_00c6a820;
  *(undefined2 *)((longlong)local_res8 + 0xe2) = 0xfff4;
  (**(code **)(*local_res8 + 0x120))(local_res8,0);
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}


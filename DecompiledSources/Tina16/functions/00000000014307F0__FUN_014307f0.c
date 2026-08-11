/* Ghidra address: 014307f0 */
/* Ghidra symbol: FUN_014307f0 */


undefined8 * FUN_014307f0(undefined8 *param_1,char param_2,longlong *param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *local_res8;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  longlong *local_b8;
  undefined8 local_b0;
  undefined8 local_a1 [8];
  ushort local_5b;
  byte local_57;
  byte local_2f;
  ushort local_2e;
  int local_2c;
  
  local_d0 = auStack_118;
  local_e0 = 0;
  local_d8 = 0;
  local_res8 = param_1;
  puVar1 = auStack_118;
  if (param_2 != '\0') {
    local_res8 = (undefined8 *)FUN_004119e0(param_1,param_2);
    puVar1 = local_d0;
  }
  local_d0 = puVar1;
  (**(code **)(*param_3 + 0x2d0))(param_3,param_4,&local_b0);
  FUN_01430100(local_res8,0,local_b0,param_4);
  *(undefined1 *)(local_res8 + 7) = 0;
  local_res8[1] = param_3;
  *(undefined1 *)((longlong)local_res8 + 0x3a) = 1;
  puVar2 = (undefined8 *)FUN_01cfd090(param_3,param_4);
  puVar5 = local_a1;
  for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = *(undefined2 *)puVar2;
  local_2e = local_5b;
  local_2f = local_57;
  local_b8 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_f8 = 1;
  FUN_00b8fd60(&local_d8,*(undefined8 *)local_res8[2],*PTR_DAT_02005310,0);
  (**(code **)(*local_b8 + 0x78))(local_b8,local_d8);
  iVar4 = local_2f - 1;
  local_2c = 1;
  if (0 < iVar4) {
    do {
      FUN_01d39f60(&local_e0,(uint)local_2e + local_2c,*(undefined8 *)PTR_DAT_02001f18);
      (**(code **)(*local_b8 + 0x78))(local_b8,local_e0);
      local_2c = local_2c + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  (**(code **)*local_res8)(local_res8,local_b8);
  FUN_00410f20(local_b8);
  FUN_00414560(&local_e0,2);
  if (param_2 != '\0') {
    local_res8 = (undefined8 *)FUN_00411a20(local_res8);
  }
  return local_res8;
}


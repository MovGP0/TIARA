/* Ghidra address: 00d7f0a0 */
/* Ghidra symbol: FUN_00d7f0a0 */


longlong * FUN_00d7f0a0(longlong *param_1,char param_2)

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
  FUN_00410e60(local_res8,0);
  FUN_00414ad0(local_res8 + 3,L"Default theme");
  lVar2 = FUN_00d7e2d0(&PTR_FUN_00d5abb8,1,local_res8);
  local_res8[1] = lVar2;
  lVar2 = FUN_00d7e660(&PTR_FUN_00d5af60,1,local_res8);
  local_res8[5] = lVar2;
  lVar2 = FUN_00d7eb00(&PTR_FUN_00d5bbb8,1,local_res8);
  local_res8[2] = lVar2;
  lVar2 = FUN_00d7d610(&PTR_FUN_00d67810,1,local_res8);
  local_res8[7] = lVar2;
  lVar2 = FUN_00d7d3d0(&PTR_FUN_00d67500,1,local_res8);
  local_res8[6] = lVar2;
  lVar2 = FUN_00d7d830(&PTR_FUN_00d67a90,1,local_res8);
  local_res8[8] = lVar2;
  (**(code **)(*local_res8 + 0x70))(local_res8);
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}


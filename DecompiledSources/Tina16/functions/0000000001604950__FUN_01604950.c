/* Ghidra address: 01604950 */
/* Ghidra symbol: FUN_01604950 */


longlong * FUN_01604950(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_2b0 [2];
  undefined8 local_2a0;
  undefined1 local_298 [24];
  undefined8 local_280;
  
  local_2b0[0] = 0;
  local_2a0 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_00414610(param_1);
  FUN_00414610(local_res10);
  FUN_00417580(local_298,&DAT_00432b90);
  plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_00416ba0(local_2b0,local_res8,local_res10);
  iVar1 = FUN_00441230(local_2b0[0],0x20,local_298);
  while (iVar1 == 0) {
    FUN_00416ba0(&local_2a0,local_res8,local_280);
    (**(code **)(*plVar2 + 0x78))(plVar2,local_2a0);
    iVar1 = FUN_00441290(local_298);
  }
  FUN_004412c0(local_298);
  FUN_00414480(local_2b0);
  FUN_00414480(&local_2a0);
  FUN_00417740(local_298,&DAT_00432b90);
  FUN_00414560(&local_res8,2);
  return plVar2;
}


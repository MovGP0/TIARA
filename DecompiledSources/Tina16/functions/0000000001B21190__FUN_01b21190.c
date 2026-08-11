/* Ghidra address: 01b21190 */
/* Ghidra symbol: FUN_01b21190 */


longlong * FUN_01b21190(longlong param_1,undefined2 param_2,undefined1 param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong local_res8 [4];
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_38 = 0;
  local_30[0] = 0;
  local_20 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_004b67b0(plVar2,param_3);
  while( true ) {
    FUN_00416780(&local_38,param_2);
    iVar1 = FUN_004170c0(local_38,local_res8[0],1);
    if (iVar1 < 1) break;
    FUN_00416780(local_30,param_2);
    iVar1 = FUN_004170c0(local_30[0],local_res8[0],1);
    FUN_00416dc0(&local_20,local_res8[0],1,iVar1 + -1);
    FUN_00416e20(local_res8,1,iVar1);
    (**(code **)(*plVar2 + 0x78))(plVar2,local_20);
  }
  if (local_res8[0] != 0) {
    (**(code **)(*plVar2 + 0x78))(plVar2,local_res8[0]);
  }
  FUN_00414560(&local_38,2);
  FUN_00414480(&local_20);
  FUN_00414480(local_res8);
  return plVar2;
}


/* Ghidra address: 01b21300 */
/* Ghidra symbol: FUN_01b21300 */


longlong * FUN_01b21300(longlong param_1,longlong param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong local_res8;
  longlong local_res10;
  undefined8 local_20;
  
  local_20 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_00414610(param_1);
  FUN_00414610(local_res10);
  plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_004b67b0(plVar3,param_3);
  while( true ) {
    iVar2 = FUN_004170c0(local_res10,local_res8,1);
    if (iVar2 < 1) break;
    iVar1 = FUN_004170c0(local_res10,local_res8,1);
    FUN_00416dc0(&local_20,local_res8,1,iVar1 + -1);
    iVar2 = 0;
    if (local_res10 != 0) {
      iVar2 = *(int *)(local_res10 + -4);
    }
    FUN_00416e20(&local_res8,1,iVar1 + -1 + iVar2);
    (**(code **)(*plVar3 + 0x78))(plVar3,local_20);
  }
  if (local_res8 != 0) {
    (**(code **)(*plVar3 + 0x78))(plVar3,local_res8);
  }
  FUN_00414480(&local_20);
  FUN_00414560(&local_res8,2);
  return plVar3;
}


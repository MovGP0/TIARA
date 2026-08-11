/* Ghidra address: 00a59550 */
/* Ghidra symbol: FUN_00a59550 */


longlong * FUN_00a59550(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 local_res10 [3];
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  plVar2 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_004b67b0(plVar2,1);
  iVar1 = FUN_004170c0(&LAB_00a59674,local_res10[0],1);
  while (0 < iVar1) {
    FUN_00416dc0(local_20,local_res10[0],1,iVar1 + -1);
    (**(code **)(*plVar2 + 0x78))(plVar2,local_20[0]);
    FUN_00416e20(local_res10,1,iVar1);
    iVar1 = FUN_004170c0(&LAB_00a59674,local_res10[0],1);
  }
  (**(code **)(*plVar2 + 0x78))(plVar2,local_res10[0]);
  FUN_00414480(local_20);
  FUN_00414480(local_res10);
  return plVar2;
}


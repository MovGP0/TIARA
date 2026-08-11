/* Ghidra address: 015bf4e0 */
/* Ghidra symbol: FUN_015bf4e0 */


undefined1 FUN_015bf4e0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined1 local_19;
  
  local_30[0] = 0;
  local_38 = 0;
  FUN_004167d0(local_30,param_1);
  uVar2 = FUN_00416740(local_30[0]);
  FUN_004167d0(&local_38,param_2);
  uVar3 = FUN_00416740(local_38);
  iVar1 = thunk_FUN_03f98e1c(uVar2,uVar3);
  local_19 = iVar1 != 0;
  FUN_00414560(&local_38,2);
  return local_19;
}


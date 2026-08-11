/* Ghidra address: 01c1e440 */
/* Ghidra symbol: FUN_01c1e440 */


undefined8 FUN_01c1e440(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined8 local_10;
  
  local_10 = 0;
  iVar1 = FUN_004413f0(&DAT_01c1e4f4,param_2);
  iVar2 = 0;
  if (param_2 != 0) {
    iVar2 = *(int *)(param_2 + -4);
  }
  FUN_00416dc0(param_1,param_2,iVar1 + 1,iVar2 - iVar1);
  FUN_01c1e370(&local_10,param_1,0x3f);
  FUN_00414ad0(param_1,local_10);
  FUN_00414480(&local_10);
  return param_1;
}


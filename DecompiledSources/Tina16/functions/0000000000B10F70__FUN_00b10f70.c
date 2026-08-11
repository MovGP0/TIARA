/* Ghidra address: 00b10f70 */
/* Ghidra symbol: FUN_00b10f70 */


bool FUN_00b10f70(longlong param_1)

{
  int iVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x5f8) + 0x38))(*(longlong **)(param_1 + 0x5f8),local_20);
  FUN_0041ddd0(&local_30,PTR_PTR_02004900);
  FUN_0041ddd0(&local_38,PTR_PTR_020019d0);
  FUN_00416cd0(&local_28,4,local_30,&LAB_00b11068,local_38,&LAB_00b11068);
  iVar1 = FUN_00416db0(local_20[0],local_28);
  FUN_00414560(&local_38,4);
  return iVar1 != 0;
}


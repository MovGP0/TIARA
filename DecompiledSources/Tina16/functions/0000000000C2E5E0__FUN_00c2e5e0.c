/* Ghidra address: 00c2e5e0 */
/* Ghidra symbol: FUN_00c2e5e0 */


void FUN_00c2e5e0(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00c2e100(param_1,param_2);
  iVar1 = (**(code **)(*param_2 + 0x18))(param_2,param_1 + 0x18,6);
  if (iVar1 != 6) {
    FUN_0041ddd0(&local_10,PTR_PTR_02005bb8);
    FUN_00c1a780(param_1,1,local_10);
  }
  FUN_00414480(&local_10);
  return;
}


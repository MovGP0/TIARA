/* Ghidra address: 00c1a3e0 */
/* Ghidra symbol: FUN_00c1a3e0 */


void FUN_00c1a3e0(longlong *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 local_10;
  
  local_10 = 0;
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1,param_2,param_3);
  if (iVar1 != param_3) {
    FUN_0041ddd0(&local_10,PTR_PTR_02005bb8);
    FUN_00c1a320(local_10);
  }
  FUN_00414480(&local_10);
  return;
}


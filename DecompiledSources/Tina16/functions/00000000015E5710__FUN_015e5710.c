/* Ghidra address: 015e5710 */
/* Ghidra symbol: FUN_015e5710 */


void FUN_015e5710(longlong param_1,int param_2)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  *(int *)(param_1 + 0x6e8) = param_2;
  if (param_2 == 0) {
    FUN_0041ddd0(&local_10,PTR_PTR_020055e0);
    FUN_015e56b0(param_1,local_10);
  }
  else {
    FUN_0041ddd0(&local_18,PTR_PTR_02005888);
    FUN_015e56b0(param_1,local_18);
  }
  FUN_00414560(&local_18,2);
  return;
}


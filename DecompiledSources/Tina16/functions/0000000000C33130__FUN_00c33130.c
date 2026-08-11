/* Ghidra address: 00c33130 */
/* Ghidra symbol: FUN_00c33130 */


void FUN_00c33130(longlong param_1,int param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  if ((param_2 < 3) || (8 < param_2)) {
    FUN_0041ddd0(&local_10,PTR_PTR_020020e0);
    FUN_00c1a320(local_10);
  }
  *(int *)(param_1 + 0x6c) = param_2;
  FUN_00414480(&local_10);
  return;
}


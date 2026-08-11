/* Ghidra address: 00c289b0 */
/* Ghidra symbol: FUN_00c289b0 */


void FUN_00c289b0(longlong param_1)

{
  undefined8 local_10;
  
  local_10 = 0;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    FUN_00c28a90(param_1);
    FUN_00c28a40(param_1);
  }
  if (*(int *)(param_1 + 0x38) == 0) {
    FUN_0041ddd0(&local_10,PTR_PTR_02002a50);
    FUN_00c1a320(local_10);
  }
  FUN_00414480(&local_10);
  return;
}


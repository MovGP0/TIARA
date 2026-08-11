/* Ghidra address: 00a799b0 */
/* Ghidra symbol: FUN_00a799b0 */


void FUN_00a799b0(longlong param_1,char param_2)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  if (*(char *)(param_1 + 0x98) != param_2) {
    if (param_2 == '\0') {
      FUN_0041ddd0(&local_18,PTR_PTR_02003688);
      FUN_00a794d0(local_18);
    }
    else {
      FUN_0041ddd0(&local_10,PTR_PTR_020051b8);
      FUN_00a794d0(local_10);
    }
  }
  FUN_00414560(&local_18,2);
  return;
}


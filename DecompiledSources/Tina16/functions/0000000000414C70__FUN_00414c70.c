/* Ghidra address: 00414c70 */
/* Ghidra symbol: FUN_00414c70 */


void FUN_00414c70(longlong *param_1,longlong param_2)

{
  longlong local_20;
  
  if (param_2 != 0) {
    local_20 = param_2;
    FUN_00414630(param_2);
  }
  local_20 = *param_1;
  *param_1 = param_2;
  FUN_004144d0(&local_20);
  return;
}


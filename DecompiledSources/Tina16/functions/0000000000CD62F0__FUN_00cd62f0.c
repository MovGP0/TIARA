/* Ghidra address: 00cd62f0 */
/* Ghidra symbol: FUN_00cd62f0 */


undefined8 FUN_00cd62f0(undefined **param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  if (param_1 == &PTR_FUN_00cd4540) {
    FUN_0041ddd0(&local_10,PTR_PTR_02001128);
    FUN_00415dd0(param_2,local_10,0);
  }
  else {
    FUN_00cd7870(param_2,param_1);
  }
  FUN_00414480(&local_10);
  return param_2;
}


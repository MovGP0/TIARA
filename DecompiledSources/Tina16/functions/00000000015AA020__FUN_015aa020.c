/* Ghidra address: 015aa020 */
/* Ghidra symbol: FUN_015aa020 */


undefined8 FUN_015aa020(undefined **param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  if (param_1 == &PTR_FUN_015a8170) {
    FUN_0041ddd0(&local_10,PTR_PTR_02001110);
    FUN_00415dd0(param_2,local_10,0);
  }
  else {
    FUN_015abb90(param_2,param_1);
  }
  FUN_00414480(&local_10);
  return param_2;
}


/* Ghidra address: 00efab80 */
/* Ghidra symbol: FUN_00efab80 */


undefined8 FUN_00efab80(undefined8 param_1,double param_2,undefined2 param_3)

{
  undefined8 local_10;
  
  local_10 = 0;
  if (param_2 == 0.0) {
    FUN_00414480(param_1);
  }
  else if (param_2 <= 0.0) {
    FUN_00efa6e0(param_1,param_2,param_3);
  }
  else {
    FUN_00efa6e0(&local_10,param_2,param_3);
    FUN_00416ba0(param_1,&LAB_00efac54,local_10);
  }
  FUN_00414480(&local_10);
  return param_1;
}


/* Ghidra address: 00efac60 */
/* Ghidra symbol: FUN_00efac60 */


undefined8 FUN_00efac60(undefined8 param_1,double param_2,undefined8 param_3,undefined2 param_4)

{
  double dVar1;
  undefined8 local_res18 [2];
  undefined8 local_10;
  
  local_10 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  dVar1 = (double)FUN_0040c850(param_2 - 1.0);
  if (1e-100 <= dVar1) {
    dVar1 = (double)FUN_0040c850(param_2 + 1.0);
    if (1e-100 <= dVar1) {
      if (param_2 == 0.0) {
        FUN_00414480(param_1);
      }
      else {
        FUN_00efa6e0(&local_10,param_2,param_4);
        FUN_00416cd0(param_1,3,local_10,&LAB_00efadc4,local_res18[0]);
      }
    }
    else {
      FUN_00416ba0(param_1,&DAT_00efadb4,local_res18[0]);
    }
  }
  else {
    FUN_00414ad0(param_1,local_res18[0]);
  }
  FUN_00414480(&local_10);
  FUN_00414480(local_res18);
  return param_1;
}


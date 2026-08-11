/* Ghidra address: 00f05d50 */
/* Ghidra symbol: FUN_00f05d50 */


undefined8 FUN_00f05d50(undefined8 param_1,double param_2,undefined4 param_3,int param_4)

{
  double dVar1;
  double local_120;
  undefined1 local_118 [264];
  undefined8 local_10;
  
  local_10 = 0;
  dVar1 = (double)FUN_00c43d20((double)param_4);
  dVar1 = (double)FUN_0040c850(param_2 / dVar1);
  local_120 = param_2;
  if (dVar1 < 0.01) {
    local_120 = 0.0;
  }
  dVar1 = (double)FUN_00c43d10(local_120);
  if (dVar1 <= 6.0) {
    FUN_0040fb60(local_118,local_120,1,param_3);
    FUN_004169a0(&local_10,local_118);
    FUN_00414ad0(param_1,local_10);
  }
  else {
    FUN_00f05b80(param_1,local_120,param_3,param_4);
  }
  FUN_00414480(&local_10);
  return param_1;
}


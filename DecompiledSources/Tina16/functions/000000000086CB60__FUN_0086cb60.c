/* Ghidra address: 0086cb60 */
/* Ghidra symbol: FUN_0086cb60 */


undefined8 FUN_0086cb60(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  int local_14;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_10 = 0;
  local_14 = FUN_004170c0(&LAB_0086cc44,param_2,1);
  local_14 = local_14 + -1;
  if (local_14 < 0) {
    FUN_00414480(param_1);
  }
  else {
    FUN_00414480(&local_10);
    FUN_00416dc0(&local_10,param_2,1,local_14);
    FUN_00414ad0(param_1,local_10);
    FUN_00414480(&local_10);
  }
  FUN_00414480(&local_10);
  return param_1;
}


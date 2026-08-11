/* Ghidra address: 0147b880 */
/* Ghidra symbol: FUN_0147b880 */


undefined8 FUN_0147b880(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined *local_50;
  undefined1 *local_40;
  double local_38;
  double local_30;
  double local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_40 = auStack_78;
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  local_28 = (double)param_2;
  if (param_2 < 0) {
    local_28 = local_28 + 1.8446744073709552e+19;
  }
  local_28 = local_28 / 1024.0;
  local_30 = local_28 / 1024.0;
  local_38 = local_30 / 1024.0;
  if (local_38 <= 1.0) {
    if (local_30 <= 1.0) {
      FUN_00414480(&local_20);
      local_58 = 2;
      local_50 = PTR_DAT_02004830;
      FUN_00448510(&local_20,local_28,2,0xc);
      FUN_00416ba0(param_1,local_20,&LAB_0147bb10);
      FUN_00414480(&local_20);
    }
    else {
      local_40 = auStack_78;
      FUN_00414480(&local_18);
      local_58 = 2;
      local_50 = PTR_DAT_02004830;
      FUN_00448510(&local_18,local_30,2,0xc);
      FUN_00416ba0(param_1,local_18,&PTR_DAT_0147bafc);
      FUN_00414480(&local_18);
    }
  }
  else {
    local_40 = auStack_78;
    FUN_00414480(&local_10);
    local_58 = 2;
    local_50 = PTR_DAT_02004830;
    FUN_00448510(&local_10,local_38,2,0xc);
    FUN_00416ba0(param_1,local_10,&PTR_DAT_0147bae8);
    FUN_00414480(&local_10);
  }
  FUN_00414560(&local_20,3);
  return param_1;
}


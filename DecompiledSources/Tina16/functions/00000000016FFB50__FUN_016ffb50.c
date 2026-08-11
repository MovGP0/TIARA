/* Ghidra address: 016ffb50 */
/* Ghidra symbol: FUN_016ffb50 */


undefined8 FUN_016ffb50(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined8 local_res8 [4];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  if (param_4 == 0) {
    uVar1 = FUN_017105e0(0);
    local_30 = FUN_016fedd0(uVar1,local_res8[0],param_2,&local_10,&local_18,&local_20,&local_28);
  }
  else {
    local_30 = FUN_016fedd0(param_4,local_res8[0],param_2,&local_10,&local_18,&local_20,&local_28);
  }
  FUN_00414560(&local_28,4);
  FUN_00414480(local_res8);
  return local_30;
}


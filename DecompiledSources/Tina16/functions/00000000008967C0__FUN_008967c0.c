/* Ghidra address: 008967c0 */
/* Ghidra symbol: FUN_008967c0 */


undefined8 FUN_008967c0(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 local_38;
  int local_30 [2];
  undefined1 local_28;
  undefined8 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_38 = 0;
  if (param_3 == 0x2af9) {
    FUN_0041ddd0(&local_10,PTR_PTR_020012b0);
    local_28 = 0;
    local_30[0] = param_3;
    FUN_0041ddd0(&local_38,PTR_PTR_02002140);
    local_20 = local_38;
    local_18 = 0x11;
    FUN_00876cf0(param_2,local_10,local_30,1);
  }
  else {
    FUN_0089cb90(param_1,param_2,param_3);
  }
  FUN_00414480(&local_38);
  FUN_00414480(&local_10);
  return param_2;
}


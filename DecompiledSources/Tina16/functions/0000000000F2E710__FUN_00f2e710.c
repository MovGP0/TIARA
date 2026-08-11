/* Ghidra address: 00f2e710 */
/* Ghidra symbol: FUN_00f2e710 */


undefined8 FUN_00f2e710(undefined8 param_1,undefined4 param_2)

{
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  undefined8 local_28;
  undefined1 *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = auStack_58;
  local_28 = 0;
  local_10 = 0;
  FUN_00414480(&local_10);
  FUN_0043f750(&local_10,param_2);
  local_38 = &LAB_00f2e814;
  FUN_00416cd0(&local_28,3,&DAT_00f2e804,local_10);
  local_18 = FUN_00f2e6b0(param_1,local_28);
  FUN_00414480(&local_10);
  FUN_00414480(&local_28);
  FUN_00414480(&local_10);
  return local_18;
}


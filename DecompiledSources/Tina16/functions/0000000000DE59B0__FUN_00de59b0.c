/* Ghidra address: 00de59b0 */
/* Ghidra symbol: FUN_00de59b0 */


undefined8 FUN_00de59b0(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined *local_30;
  undefined1 *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = auStack_58;
  local_10 = 0;
  FUN_00414480(&local_10);
  local_18 = *(undefined8 *)(param_1 + 0x18);
  local_38 = 0x12;
  local_30 = PTR_DAT_02004830;
  FUN_00448510(&local_10,local_18,2,0x10);
  FUN_00414ad0(param_2,local_10);
  FUN_00414480(&local_10);
  FUN_00414480(&local_10);
  return param_2;
}


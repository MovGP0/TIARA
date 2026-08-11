/* Ghidra address: 007e4040 */
/* Ghidra symbol: FUN_007e4040 */


void FUN_007e4040(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  code *local_30;
  undefined8 local_28;
  undefined1 *local_20;
  undefined8 local_10;
  
  local_20 = auStack_58;
  local_28 = FUN_00410e60(&DAT_007e3ed0,1);
  local_30 = FUN_007e3ff0;
  local_10 = local_28;
  FUN_007dcc20(&local_30,param_2,param_3);
  FUN_00410f20(local_10);
  return;
}


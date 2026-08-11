/* Ghidra address: 004d9df0 */
/* Ghidra symbol: FUN_004d9df0 */


undefined1 FUN_004d9df0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  code *local_30;
  undefined8 local_28;
  undefined1 *local_20;
  undefined1 local_11;
  undefined8 local_10;
  
  local_20 = auStack_58;
  local_28 = FUN_004da300(&DAT_00497d90,1,param_2);
  local_30 = FUN_004da3b0;
  local_10 = local_28;
  local_11 = FUN_004d9d80(param_1,local_28,&local_30);
  FUN_00410f20(local_10);
  return local_11;
}


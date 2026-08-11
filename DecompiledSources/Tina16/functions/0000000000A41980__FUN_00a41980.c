/* Ghidra address: 00a41980 */
/* Ghidra symbol: FUN_00a41980 */


undefined8 FUN_00a41980(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_10 = FUN_00a3e5c0(&PTR_FUN_00a3e160,1,param_1,6);
  local_18 = FUN_00a41790(local_10,param_2,param_3,param_4);
  FUN_00410f20(local_10);
  return local_18;
}


/* Ghidra address: 008a0460 */
/* Ghidra symbol: FUN_008a0460 */


undefined8 FUN_008a0460(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_10 = FUN_008abf80(&PTR_FUN_0089e488,1,1);
  FUN_008ac1d0(local_10,param_1,param_2);
  FUN_00410f20(local_10);
  return param_1;
}


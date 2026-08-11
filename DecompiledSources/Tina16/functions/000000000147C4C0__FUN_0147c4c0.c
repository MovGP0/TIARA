/* Ghidra address: 0147c4c0 */
/* Ghidra symbol: FUN_0147c4c0 */


undefined8 FUN_0147c4c0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_10 = FUN_008b1f70(&PTR_FUN_008b1e38,1);
  FUN_008b1280(local_10,param_1,param_2,0);
  FUN_00410f20(local_10);
  return param_1;
}


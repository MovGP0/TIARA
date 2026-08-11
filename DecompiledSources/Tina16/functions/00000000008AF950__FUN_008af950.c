/* Ghidra address: 008af950 */
/* Ghidra symbol: FUN_008af950 */


undefined8 FUN_008af950(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_10;
  
  local_20 = auStack_48;
  FUN_00414480(param_1);
  local_10 = FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_008af5f0(param_2,local_10,param_4);
  FUN_004b6d10(local_10,0);
  FUN_004b4060(local_10,param_1,param_3);
  FUN_00410f20(local_10);
  return param_1;
}


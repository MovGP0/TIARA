/* Ghidra address: 01876900 */
/* Ghidra symbol: FUN_01876900 */


undefined8 FUN_01876900(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_20;
  
  local_30 = auStack_58;
  local_38 = 0;
  local_20 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
  (**(code **)(*param_2 + 200))(param_2,local_20);
  FUN_01873a10(&local_38,local_20);
  FUN_00416880(param_1,local_38);
  FUN_00410f20(local_20);
  FUN_004144d0(&local_38);
  return param_1;
}


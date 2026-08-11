/* Ghidra address: 005da8d0 */
/* Ghidra symbol: FUN_005da8d0 */


void FUN_005da8d0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_20 [2];
  
  local_30 = auStack_58;
  local_20[0] = 0;
  FUN_00414480(local_20);
  FUN_0044a350(local_20,param_4,PTR_DAT_02004830);
  (**(code **)(*param_1 + 0x18))(param_1,param_2,param_3,local_20[0]);
  FUN_00414480(local_20);
  FUN_00414480(local_20);
  return;
}


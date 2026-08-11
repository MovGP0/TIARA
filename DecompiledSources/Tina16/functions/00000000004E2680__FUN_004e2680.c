/* Ghidra address: 004e2680 */
/* Ghidra symbol: FUN_004e2680 */


void FUN_004e2680(longlong *param_1,int param_2,undefined8 param_3)

{
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_0041b840(local_20,*(undefined8 *)(param_1[1] + 8 + (longlong)param_2 * 0x10));
  FUN_0041b840(param_1[1] + 8 + (longlong)param_2 * 0x10,param_3);
  (**(code **)(*param_1 + 0x18))(param_1,local_20[0],5);
  (**(code **)(*param_1 + 0x18))(param_1,param_3,1);
  FUN_0041b800(local_20);
  return;
}


/* Ghidra address: 00561270 */
/* Ghidra symbol: FUN_00561270 */


void FUN_00561270(longlong *param_1,int param_2,undefined8 param_3)

{
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_00414b50(local_20,*(undefined8 *)(param_1[1] + 0x10 + (longlong)param_2 * 0x18));
  FUN_00414ad0(param_1[1] + 0x10 + (longlong)param_2 * 0x18,param_3);
  (**(code **)(*param_1 + 0x18))(param_1,local_20[0],5);
  (**(code **)(*param_1 + 0x18))(param_1,param_3,1);
  FUN_00414480(local_20);
  return;
}


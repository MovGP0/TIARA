/* Ghidra address: 00bb1dc0 */
/* Ghidra symbol: FUN_00bb1dc0 */


void FUN_00bb1dc0(longlong *param_1,longlong *param_2)

{
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  FUN_00baf6a0(param_1,param_2);
  (**(code **)(*param_1 + 8))(param_1,&local_30);
  FUN_00bad080(&local_28,local_30);
  FUN_00bac850(local_20,local_28);
  (**(code **)(*param_2 + 0x90))(param_2,local_20[0]);
  FUN_00414560(&local_30,3);
  return;
}


/* Ghidra address: 01411ca0 */
/* Ghidra symbol: FUN_01411ca0 */


void FUN_01411ca0(longlong param_1)

{
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  
  FUN_0040d200(&local_30,0x18,0);
  local_30 = 0;
  local_2c = 0;
  local_28 = *(int *)(param_1 + 0x7b0) + -1;
  FUN_00b0b020(*(undefined8 *)(param_1 + 0x6d0),0);
  FUN_0140b070(0,0,&local_30,*(undefined8 *)(param_1 + 0x7b8),*(undefined4 *)(param_1 + 0x7b4),
               *(int *)(param_1 + 0x7b0) + -1,*(undefined4 *)(param_1 + 0x828),1);
  FUN_01410d70(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x2a8))(*(longlong **)(param_1 + 0x6d0),1,1);
  return;
}


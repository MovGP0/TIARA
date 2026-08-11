/* Ghidra address: 00bb2740 */
/* Ghidra symbol: FUN_00bb2740 */


void FUN_00bb2740(longlong *param_1,longlong *param_2)

{
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  (**(code **)(*param_2 + 0x50))(param_2,1);
  (**(code **)(*param_1 + 8))(param_1,&local_30);
  FUN_00bad080(&local_28,local_30);
  FUN_00416cd0(local_20,3,L"<!--",local_28,&LAB_00bb2830);
  (**(code **)(*param_2 + 0x90))(param_2,local_20[0]);
  FUN_00414560(&local_30,3);
  return;
}


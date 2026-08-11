/* Ghidra address: 01677ad0 */
/* Ghidra symbol: FUN_01677ad0 */


void FUN_01677ad0(longlong param_1,longlong *param_2)

{
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  FUN_01b0fb20(param_1,param_2);
  FUN_00b8fd60(&local_28,*(undefined8 *)(param_1 + 0x58),*PTR_DAT_02005310,0,1);
  FUN_00416ba0(local_20,L"  Threshold: ",local_28);
  (**(code **)(*param_2 + 0x58))(param_2,local_20[0]);
  (**(code **)(*param_2 + 0x80))(param_2);
  FUN_00414560(&local_28,2);
  return;
}


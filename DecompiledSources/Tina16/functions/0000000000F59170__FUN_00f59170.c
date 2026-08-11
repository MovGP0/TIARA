/* Ghidra address: 00f59170 */
/* Ghidra symbol: FUN_00f59170 */


void FUN_00f59170(longlong param_1,longlong *param_2)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  FUN_01b0fb20(param_1,param_2);
  FUN_00b8fd60(&local_28,*(undefined8 *)(param_1 + 0x58),*PTR_DAT_02005310,0,1);
  FUN_00b8fd60(&local_30,*(undefined8 *)(param_1 + 0x60),*PTR_DAT_02005310,0,1);
  FUN_00b8fd60(&local_38,*(undefined8 *)(param_1 + 0x68),*PTR_DAT_02005310,0,1);
  FUN_00416cd0(local_20,6,L"  Threshold: ",local_28,L", slope1: ",local_30,L", slope2: ",local_38);
  (**(code **)(*param_2 + 0x58))(param_2,local_20[0]);
  (**(code **)(*param_2 + 0x80))(param_2);
  FUN_00414560(&local_38,4);
  return;
}


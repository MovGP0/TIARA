/* Ghidra address: 016432f0 */
/* Ghidra symbol: FUN_016432f0 */


void FUN_016432f0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res18;
  undefined8 local_res20;
  undefined8 local_10;
  
  local_10 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  FUN_00414ad0(param_2 + 0x580,local_res18);
  FUN_00414ad0(param_2 + 0x590,local_res20);
  FUN_00416cd0(&local_10,4,L"SetDigNode: ProcessName: ",local_res18,L", PinIdx: ",local_res20);
  FUN_01602e30(local_10,1);
  FUN_00414480(&local_10);
  FUN_00414560(&local_res18,2);
  return;
}


/* Ghidra address: 00b8e520 */
/* Ghidra symbol: FUN_00b8e520 */


undefined8 FUN_00b8e520(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = 0;
  local_18 = 0;
  local_20 = 0;
  FUN_0043f750(&local_18,param_3 / 0x10 + 1);
  FUN_0043f750(&local_20,param_3);
  FUN_00416cd0(&local_10,4,L"tina.exe.Strings.",local_18,&LAB_00b8e648,local_20);
  FUN_004401f0(&local_28,(longlong)param_3);
  FUN_00b8a7d0(param_1,param_2,local_10,local_28);
  FUN_00414560(&local_28,4);
  return param_2;
}


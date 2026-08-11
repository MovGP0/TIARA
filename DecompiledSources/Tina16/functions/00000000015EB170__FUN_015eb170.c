/* Ghidra address: 015eb170 */
/* Ghidra symbol: FUN_015eb170 */


void FUN_015eb170(longlong param_1)

{
  longlong *plVar1;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = 0;
  FUN_00416ba0(local_20,*(undefined8 *)(param_1 + 0x6d8),L"\\compile_log.txt");
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b8) + 0x510);
  (**(code **)(*plVar1 + 0x100))(plVar1,local_20[0]);
  FUN_00416ba0(local_30,L"Logfile saved to: ",local_20[0]);
  FUN_0072d440(local_30[0],2,4,0);
  FUN_00414480(local_30);
  FUN_00414480(local_20);
  return;
}


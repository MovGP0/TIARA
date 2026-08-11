/* Ghidra address: 0163cf70 */
/* Ghidra symbol: FUN_0163cf70 */


undefined8 FUN_0163cf70(longlong param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_015fcd70(&local_10,*(undefined8 *)(param_1 + 0x28));
  FUN_00416cd0(param_2,3,local_10,&DAT_0163d004,L"print_va_runtime_log.txt");
  FUN_00414480(&local_10);
  return param_2;
}


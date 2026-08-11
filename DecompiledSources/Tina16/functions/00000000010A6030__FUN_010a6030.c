/* Ghidra address: 010a6030 */
/* Ghidra symbol: FUN_010a6030 */


void FUN_010a6030(longlong param_1)

{
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_00416cd0(local_20,4,*(undefined8 *)(param_1 + 0x9a8),*(undefined8 *)(param_1 + 0xa60),
               &DAT_010a60d4,L"va_debugger_history.txt");
  (**(code **)(**(longlong **)(param_1 + 0xa00) + 0x100))
            (*(longlong **)(param_1 + 0xa00),local_20[0]);
  FUN_00414480(local_20);
  return;
}


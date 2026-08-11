/* Ghidra address: 010a5e60 */
/* Ghidra symbol: FUN_010a5e60 */


void FUN_010a5e60(longlong param_1)

{
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_00416cd0(local_20,4,*(undefined8 *)(param_1 + 0x9a8),*(undefined8 *)(param_1 + 0xa60),
               &DAT_010a5f04,L"va_debugger_watch.txt");
  (**(code **)(**(longlong **)(param_1 + 0x9e8) + 0x100))
            (*(longlong **)(param_1 + 0x9e8),local_20[0]);
  FUN_00414480(local_20);
  return;
}


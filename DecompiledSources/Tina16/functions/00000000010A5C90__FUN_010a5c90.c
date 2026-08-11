/* Ghidra address: 010a5c90 */
/* Ghidra symbol: FUN_010a5c90 */


void FUN_010a5c90(longlong param_1)

{
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_00416cd0(local_20,4,*(undefined8 *)(param_1 + 0x9a8),*(undefined8 *)(param_1 + 0xa60),
               &DAT_010a5d34,L"va_debugger_bp.txt");
  (**(code **)(**(longlong **)(param_1 + 0x9e0) + 0x100))
            (*(longlong **)(param_1 + 0x9e0),local_20[0]);
  FUN_00414480(local_20);
  return;
}


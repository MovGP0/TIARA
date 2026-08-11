/* Ghidra address: 010a5d70 */
/* Ghidra symbol: FUN_010a5d70 */


void FUN_010a5d70(longlong param_1)

{
  char cVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_00416cd0(local_20,4,*(undefined8 *)(param_1 + 0x9a8),*(undefined8 *)(param_1 + 0xa60),
               &DAT_010a5e24,L"va_debugger_bp.txt");
  cVar1 = FUN_00440a20(local_20[0],1);
  if (cVar1 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x9e0) + 0xd8))
              (*(longlong **)(param_1 + 0x9e0),local_20[0]);
  }
  FUN_00414480(local_20);
  return;
}


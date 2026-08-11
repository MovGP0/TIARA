/* Ghidra address: 010a4e70 */
/* Ghidra symbol: FUN_010a4e70 */


void FUN_010a4e70(longlong param_1)

{
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_00416cd0(local_20,4,*(undefined8 *)(param_1 + 0x9a8),*(undefined8 *)(param_1 + 0xa60),
               &DAT_010a4f14,L"va_debugger_vpn.txt");
  (**(code **)(**(longlong **)(param_1 + 0x9f8) + 0x100))
            (*(longlong **)(param_1 + 0x9f8),local_20[0]);
  FUN_00414480(local_20);
  return;
}


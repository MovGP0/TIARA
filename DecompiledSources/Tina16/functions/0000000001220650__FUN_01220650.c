/* Ghidra address: 01220650 */
/* Ghidra symbol: FUN_01220650 */


void FUN_01220650(longlong param_1)

{
  DAT_01f2aaf0 = 0;
  DAT_01f2aaf1 = 1;
  DAT_01f2aaf2 = 0;
  DAT_01f2aaf3 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x710) + 0x128))(*(longlong **)(param_1 + 0x710),0);
  (**(code **)(**(longlong **)(param_1 + 0x718) + 0x128))(*(longlong **)(param_1 + 0x718),0);
  (**(code **)(**(longlong **)(param_1 + 0x720) + 0x128))(*(longlong **)(param_1 + 0x720),0);
  FUN_011d4970(param_1,DAT_02107678);
  return;
}


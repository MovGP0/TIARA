/* Ghidra address: 012206d0 */
/* Ghidra symbol: FUN_012206d0 */


void FUN_012206d0(longlong param_1)

{
  DAT_01f2aaf0 = 0;
  DAT_01f2aaf1 = 0;
  DAT_01f2aaf2 = 1;
  DAT_01f2aaf3 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x710) + 0x128))(*(longlong **)(param_1 + 0x710),1);
  (**(code **)(**(longlong **)(param_1 + 0x718) + 0x128))(*(longlong **)(param_1 + 0x718),1);
  (**(code **)(**(longlong **)(param_1 + 0x720) + 0x128))(*(longlong **)(param_1 + 0x720),1);
  FUN_011d4970(param_1,DAT_02107678);
  return;
}


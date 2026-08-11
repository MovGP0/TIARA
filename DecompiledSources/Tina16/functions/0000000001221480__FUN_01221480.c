/* Ghidra address: 01221480 */
/* Ghidra symbol: FUN_01221480 */


void FUN_01221480(longlong param_1)

{
  *(undefined4 *)PTR_DAT_02004708 = 0x14b4;
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


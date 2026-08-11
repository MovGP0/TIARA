/* Ghidra address: 012213f0 */
/* Ghidra symbol: FUN_012213f0 */


void FUN_012213f0(longlong param_1)

{
  *(undefined4 *)PTR_DAT_02004708 = 0x1518;
  DAT_01f2aaf0 = 0;
  DAT_01f2aaf1 = 0;
  DAT_01f2aaf2 = 0;
  DAT_01f2aaf3 = 1;
  (**(code **)(**(longlong **)(param_1 + 0x710) + 0x128))(*(longlong **)(param_1 + 0x710),1);
  (**(code **)(**(longlong **)(param_1 + 0x718) + 0x128))(*(longlong **)(param_1 + 0x718),1);
  (**(code **)(**(longlong **)(param_1 + 0x720) + 0x128))(*(longlong **)(param_1 + 0x720),1);
  FUN_011d4970(param_1,DAT_02107678);
  return;
}


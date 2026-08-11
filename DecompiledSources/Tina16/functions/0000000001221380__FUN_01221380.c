/* Ghidra address: 01221380 */
/* Ghidra symbol: FUN_01221380 */


void FUN_01221380(longlong param_1)

{
  *(undefined4 *)PTR_DAT_02004708 = 0x157c;
  DAT_01f2aaf4 = (**(code **)(**(longlong **)(param_1 + 0x738) + 0x260))
                           (*(longlong **)(param_1 + 0x738));
  if (DAT_01f2aaf4 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x6f0) + 0x128))(*(longlong **)(param_1 + 0x6f0),1);
  }
  FUN_011d4970(param_1,DAT_02107678);
  return;
}


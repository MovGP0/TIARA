/* Ghidra address: 011d2c70 */
/* Ghidra symbol: FUN_011d2c70 */


void FUN_011d2c70(longlong param_1)

{
  *(undefined4 *)PTR_DAT_02004708 = 0xce4;
  (**(code **)(**(longlong **)(param_1 + 0x720) + 0x268))(*(longlong **)(param_1 + 0x720),1);
  DAT_01f2a8d4 = DAT_01f2a8d4 == '\0';
  FUN_011ae5b0(param_1,DAT_02107658);
  DAT_01f2a8d4 = DAT_01f2a8d4 == '\0';
  FUN_011ae5b0(param_1,DAT_02107658);
  return;
}


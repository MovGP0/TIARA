/* Ghidra address: 01234bb0 */
/* Ghidra symbol: FUN_01234bb0 */


void FUN_01234bb0(longlong *param_1)

{
  *(undefined4 *)PTR_DAT_02004700 = 0x21ac;
  FUN_0064de00(param_1[0x131],L"Filter approximation");
  (**(code **)(*param_1 + 0x188))(param_1);
  return;
}


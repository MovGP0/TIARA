/* Ghidra address: 006ec9f0 */
/* Ghidra symbol: FUN_006ec9f0 */


void FUN_006ec9f0(undefined8 param_1,longlong param_2)

{
  FUN_006d3e20(0x40);
  FUN_00654e40(param_1,param_2);
  FUN_00654d20(param_1,param_2,L"msctls_hotkey32");
  *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffc;
  return;
}


/* Ghidra address: 01179ea0 */
/* Ghidra symbol: FUN_01179ea0 */


void FUN_01179ea0(longlong *param_1)

{
  *(undefined4 *)PTR_DAT_02004700 = 0x2288;
  FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x988),L"Filter Response Draw");
  (**(code **)(*param_1 + 0x188))(param_1);
  return;
}


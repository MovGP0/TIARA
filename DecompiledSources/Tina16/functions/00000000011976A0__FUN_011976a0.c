/* Ghidra address: 011976a0 */
/* Ghidra symbol: FUN_011976a0 */


void FUN_011976a0(longlong param_1)

{
  if (DAT_01f29ce0 == '\0') {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6b0),L"Hide text");
  }
  else {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6b0),L"Show text");
  }
  DAT_01f29ce0 = DAT_01f29ce0 == '\0';
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6c0),DAT_01f29ce0);
  return;
}


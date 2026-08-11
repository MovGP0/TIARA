/* Ghidra address: 0082a890 */
/* Ghidra symbol: FUN_0082a890 */


void FUN_0082a890(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x32a) != param_2) {
    *(char *)(param_1 + 0x32a) = param_2;
    FUN_0082a670();
  }
  return;
}


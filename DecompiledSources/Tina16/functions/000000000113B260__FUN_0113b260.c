/* Ghidra address: 0113b260 */
/* Ghidra symbol: FUN_0113b260 */


void FUN_0113b260(longlong param_1)

{
  FUN_0113a720(param_1);
  FUN_0082a890(*(undefined8 *)(param_1 + 0x9a0),0);
  if (*(char *)(param_1 + 0xa20) == '\0') {
    *(undefined1 *)(param_1 + 0xa78) = *(undefined1 *)(*(longlong *)(param_1 + 0xa10) + 0x149);
  }
  else {
    *(undefined1 *)(param_1 + 0xa78) = 9;
  }
  *(undefined1 *)(param_1 + 0xa0c) = 5;
  FUN_0113a9b0(param_1);
  return;
}


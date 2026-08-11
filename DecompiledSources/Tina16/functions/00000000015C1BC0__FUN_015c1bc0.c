/* Ghidra address: 015c1bc0 */
/* Ghidra symbol: FUN_015c1bc0 */


void FUN_015c1bc0(longlong param_1,char param_2)

{
  if (param_2 != '\0') {
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x10);
    *(undefined1 *)(param_1 + 8) = 1;
  }
  return;
}


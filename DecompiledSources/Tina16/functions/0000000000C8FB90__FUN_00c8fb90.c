/* Ghidra address: 00c8fb90 */
/* Ghidra symbol: FUN_00c8fb90 */


void FUN_00c8fb90(longlong param_1,char param_2)

{
  FUN_00c8fd40(param_1,0xffffffffffffffff);
  if (param_2 != '\0') {
    FUN_00414480(param_1 + 0x30);
    *(undefined2 *)(param_1 + 0x40) = 0;
  }
  FUN_00414480(param_1 + 0x38);
  *(undefined2 *)(param_1 + 0x42) = 0;
  *(undefined1 *)(param_1 + 0x55) = 0;
  return;
}


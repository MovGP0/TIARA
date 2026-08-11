/* Ghidra address: 016f8470 */
/* Ghidra symbol: FUN_016f8470 */


void FUN_016f8470(longlong param_1)

{
  FUN_004095f0(*(undefined8 *)(param_1 + 0x1a0));
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  FUN_004095f0(*(undefined8 *)(param_1 + 0x1b0));
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  if (*(char *)(param_1 + 0x33b) != '\0') {
    FUN_004095f0(*(undefined8 *)(param_1 + 0x1a8));
    *(undefined8 *)(param_1 + 0x1a8) = 0;
    FUN_00419430(&DAT_0210ff00,&DAT_016efe88);
  }
  return;
}


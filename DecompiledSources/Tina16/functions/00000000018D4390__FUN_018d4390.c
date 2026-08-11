/* Ghidra address: 018d4390 */
/* Ghidra symbol: FUN_018d4390 */


void FUN_018d4390(longlong param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  *(undefined4 *)(param_1 + 0x14) = param_2;
  *(undefined4 *)(param_1 + 0x18) = param_3;
  *(undefined1 *)(param_1 + 0x1c) = param_4;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_1 + 0x1c);
  *(undefined1 *)(param_1 + 0x31) = 0;
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(undefined1 *)(param_1 + 0x44) = 0;
  FUN_018d3fe0();
  return;
}


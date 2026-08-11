/* Ghidra address: 00b67120 */
/* Ghidra symbol: FUN_00b67120 */


void FUN_00b67120(longlong param_1)

{
  *(undefined2 *)(*(longlong *)(param_1 + 0x60) + 0x76) = 0x203;
  *(undefined2 *)(*(longlong *)(param_1 + 0x60) + 0x78) = 0xe;
  *(undefined2 *)(*(longlong *)(param_1 + 0x60) + 0x7a) = *(undefined2 *)(param_1 + 0x70);
  *(undefined2 *)(*(longlong *)(param_1 + 0x60) + 0x7c) = *(undefined2 *)(param_1 + 0x78);
  *(undefined2 *)(*(longlong *)(param_1 + 0x60) + 0x7e) = *(undefined2 *)(param_1 + 0x80);
  FUN_00b62d20(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0xb0),
               *(longlong *)(param_1 + 0x60) + 0x76,10);
  FUN_00b62d20(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0xb0),param_1 + 0x38,8);
  return;
}


/* Ghidra address: 01d12000 */
/* Ghidra symbol: FUN_01d12000 */


void FUN_01d12000(longlong param_1,longlong param_2)

{
  FUN_01d11f10(param_1,param_2);
  *(undefined1 *)(param_1 + 0x88) = *(undefined1 *)(param_2 + 0x88);
  *(undefined1 *)(param_1 + 0x89) = *(undefined1 *)(param_2 + 0x89);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined1 *)(param_1 + 0x98) = *(undefined1 *)(param_2 + 0x98);
  (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x10))
            (*(longlong **)(param_1 + 0xa0),*(undefined8 *)(param_2 + 0xa0));
  *(undefined1 *)(param_1 + 0xb8) = *(undefined1 *)(param_2 + 0xb8);
  *(undefined1 *)(param_1 + 0xb9) = *(undefined1 *)(param_2 + 0xb9);
  return;
}


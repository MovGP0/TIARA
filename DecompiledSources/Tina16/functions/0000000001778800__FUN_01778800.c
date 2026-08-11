/* Ghidra address: 01778800 */
/* Ghidra symbol: FUN_01778800 */


void FUN_01778800(longlong param_1,longlong param_2)

{
  *(undefined1 *)(param_2 + 0xc9) = *(undefined1 *)(param_1 + 0xc9);
  *(undefined1 *)(param_2 + 0xca) = *(undefined1 *)(param_1 + 0xca);
  (**(code **)(**(longlong **)(param_2 + 0xd0) + 0x10))
            (*(longlong **)(param_2 + 0xd0),*(undefined8 *)(param_1 + 0xd0));
  *(undefined8 *)(param_2 + 0xd8) = *(undefined8 *)(param_1 + 0xd8);
  *(undefined1 *)(param_2 + 0xe0) = *(undefined1 *)(param_1 + 0xe0);
  return;
}


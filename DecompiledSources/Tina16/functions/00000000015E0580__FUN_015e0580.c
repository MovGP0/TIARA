/* Ghidra address: 015e0580 */
/* Ghidra symbol: FUN_015e0580 */


void FUN_015e0580(undefined8 param_1,longlong param_2)

{
  *(undefined1 *)(*(longlong *)(param_2 + 0x1090) + 0x230) = 0;
  (**(code **)(**(longlong **)(param_2 + 0x1090) + 0x88))
            (*(undefined8 *)(param_2 + 0x1090),*(undefined8 *)(param_2 + 0x1060));
  return;
}


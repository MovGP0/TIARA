/* Ghidra address: 00716320 */
/* Ghidra symbol: FUN_00716320 */


void FUN_00716320(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x58) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x58) + 0x88))
              (*(undefined8 *)(param_2 + 0x58),*(undefined1 *)(param_2 + 0x57));
  }
  return;
}


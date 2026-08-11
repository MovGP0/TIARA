/* Ghidra address: 012b1580 */
/* Ghidra symbol: FUN_012b1580 */


void FUN_012b1580(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0xdb8) + 0x100))
            (*(longlong **)(param_1 + 0xdb8),*(undefined1 *)(param_1 + 0xd93));
  FUN_012ae700(param_1,6,0);
  if (*(char *)(param_1 + 0xdd0) == '\0') {
    FUN_012ae470(param_1,0,0);
  }
  FUN_012b0230(param_1,0);
  return;
}


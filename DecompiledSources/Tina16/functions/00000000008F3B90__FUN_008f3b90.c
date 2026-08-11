/* Ghidra address: 008f3b90 */
/* Ghidra symbol: FUN_008f3b90 */


void FUN_008f3b90(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 8) + 0x20))
            (*(longlong **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
             *(undefined4 *)(param_1 + 0x20));
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}


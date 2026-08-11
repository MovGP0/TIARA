/* Ghidra address: 01c7da60 */
/* Ghidra symbol: FUN_01c7da60 */


void FUN_01c7da60(longlong param_1)

{
  if (*(int *)(param_1 + 0x17f4) != 0) {
    FUN_012bee60(*(undefined8 *)(*(longlong *)(param_1 + 0x27a8) + 0xd8),
                 *(undefined2 *)(param_1 + 0x17f4));
    FUN_01c7d780(param_1,0);
  }
  return;
}


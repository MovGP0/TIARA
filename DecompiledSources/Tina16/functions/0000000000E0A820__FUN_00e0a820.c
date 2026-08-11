/* Ghidra address: 00e0a820 */
/* Ghidra symbol: FUN_00e0a820 */


undefined4 FUN_00e0a820(longlong param_1,short param_2)

{
  while ((*(short *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x10) + -2 +
                    (longlong)*(int *)(param_1 + 0x3c) * 2) != param_2 &&
         (*(int *)(param_1 + 0x3c) <= *(int *)(param_1 + 0x38)))) {
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  }
  return *(undefined4 *)(param_1 + 0x3c);
}


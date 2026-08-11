/* Ghidra address: 019b4420 */
/* Ghidra symbol: FUN_019b4420 */


undefined8 FUN_019b4420(longlong param_1)

{
  return CONCAT44(*(undefined4 *)
                   (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 8 +
                   (longlong)*(int *)(param_1 + 0x10) * 0xc),
                  *(undefined4 *)
                   (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 4 +
                   (longlong)*(int *)(param_1 + 0x10) * 0xc));
}


/* Ghidra address: 009ab190 */
/* Ghidra symbol: FUN_009ab190 */


undefined8 FUN_009ab190(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + (longlong)*(int *)(param_1 + 0x10) * 8);
}


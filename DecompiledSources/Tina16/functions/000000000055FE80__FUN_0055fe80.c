/* Ghidra address: 0055fe80 */
/* Ghidra symbol: FUN_0055fe80 */


void FUN_0055fe80(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)
              (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 8 +
              (longlong)*(int *)(param_1 + 0x10) * 0x18);
  param_2[1] = *(undefined8 *)
                (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x10 +
                (longlong)*(int *)(param_1 + 0x10) * 0x18);
  return;
}


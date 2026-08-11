/* Ghidra address: 0171d8c0 */
/* Ghidra symbol: FUN_0171d8c0 */


void FUN_0171d8c0(longlong param_1,undefined1 *param_2)

{
  *param_2 = *(undefined1 *)
              (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 4 +
              (longlong)*(int *)(param_1 + 0x10) * 0x10);
  *(undefined8 *)(param_2 + 8) =
       *(undefined8 *)
        (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 8 +
        (longlong)*(int *)(param_1 + 0x10) * 0x10);
  return;
}


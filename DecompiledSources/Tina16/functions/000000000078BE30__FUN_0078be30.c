/* Ghidra address: 0078be30 */
/* Ghidra symbol: FUN_0078be30 */


void FUN_0078be30(longlong param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)
              (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 4 +
              (longlong)*(int *)(param_1 + 0x10) * 0x10);
  *(undefined8 *)(param_2 + 2) =
       *(undefined8 *)
        (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 8 +
        (longlong)*(int *)(param_1 + 0x10) * 0x10);
  return;
}


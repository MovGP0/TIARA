/* Ghidra address: 004effa0 */
/* Ghidra symbol: FUN_004effa0 */


void FUN_004effa0(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)
              (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 8 +
              (longlong)*(int *)(param_1 + 0x10) * 0x18);
  param_2[1] = *(undefined8 *)
                (*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x10 +
                (longlong)*(int *)(param_1 + 0x10) * 0x18);
  return;
}


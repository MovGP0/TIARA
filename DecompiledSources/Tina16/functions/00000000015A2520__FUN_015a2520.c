/* Ghidra address: 015a2520 */
/* Ghidra symbol: FUN_015a2520 */


void FUN_015a2520(longlong param_1)

{
  undefined4 local_18;
  
  for (local_18 = 0; local_18 < 0x11e; local_18 = local_18 + 1) {
    *(undefined2 *)(param_1 + 0xad + (longlong)local_18 * 4) = 0;
  }
  for (local_18 = 0; local_18 < 0x1e; local_18 = local_18 + 1) {
    *(undefined2 *)(param_1 + 0x9a1 + (longlong)local_18 * 4) = 0;
  }
  for (local_18 = 0; local_18 < 0x13; local_18 = local_18 + 1) {
    *(undefined2 *)(param_1 + 0xa95 + (longlong)local_18 * 4) = 0;
  }
  *(undefined2 *)(param_1 + 0x4ad) = 1;
  *(undefined4 *)(param_1 + 0x16e2) = 0;
  *(undefined4 *)(param_1 + 0x16de) = 0;
  *(undefined4 *)(param_1 + 0x16e6) = 0;
  *(undefined4 *)(param_1 + 0x16d2) = 0;
  return;
}


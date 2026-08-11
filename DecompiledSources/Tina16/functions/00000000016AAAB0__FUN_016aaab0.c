/* Ghidra address: 016aaab0 */
/* Ghidra symbol: FUN_016aaab0 */


undefined4 FUN_016aaab0(byte *param_1)

{
  return CONCAT31((int3)((uint)*param_1 * (uint)param_1[1] >> 8),
                  (uint)*param_1 * (uint)param_1[1] == 1);
}


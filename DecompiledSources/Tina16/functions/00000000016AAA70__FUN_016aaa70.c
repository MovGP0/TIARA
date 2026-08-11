/* Ghidra address: 016aaa70 */
/* Ghidra symbol: FUN_016aaa70 */


undefined4 FUN_016aaa70(byte *param_1)

{
  return CONCAT31((int3)((uint)*param_1 + (uint)param_1[1] >> 8),
                  (uint)*param_1 + (uint)param_1[1] != 0);
}


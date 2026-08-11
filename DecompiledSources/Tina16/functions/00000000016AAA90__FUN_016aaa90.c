/* Ghidra address: 016aaa90 */
/* Ghidra symbol: FUN_016aaa90 */


undefined4 FUN_016aaa90(byte *param_1)

{
  return CONCAT31((int3)((uint)*param_1 + (uint)param_1[1] >> 8),
                  (uint)*param_1 + (uint)param_1[1] == 1);
}


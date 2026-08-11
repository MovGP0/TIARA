/* Ghidra address: 0040a1d0 */
/* Ghidra symbol: FUN_0040a1d0 */


void FUN_0040a1d0(ulonglong *param_1,ulonglong param_2)

{
  *param_1 = *param_1 & 0xfff0000000000000 | param_2 & 0xfffffffffffff;
  return;
}


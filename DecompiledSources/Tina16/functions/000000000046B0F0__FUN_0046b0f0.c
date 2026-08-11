/* Ghidra address: 0046b0f0 */
/* Ghidra symbol: FUN_0046b0f0 */


void FUN_0046b0f0(uint param_1,undefined2 *param_2)

{
  if ((param_1 & 0x80000000) == 0) {
    *(uint *)(param_2 + 4) = -param_1;
    *param_2 = 3;
  }
  else {
    *(ulonglong *)(param_2 + 4) = -(ulonglong)param_1;
    *param_2 = 0x14;
  }
  return;
}


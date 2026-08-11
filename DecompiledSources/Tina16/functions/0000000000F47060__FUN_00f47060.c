/* Ghidra address: 00f47060 */
/* Ghidra symbol: FUN_00f47060 */


void FUN_00f47060(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_004095f0(*(longlong *)(param_1 + 0x28),
                 (longlong)(*(int *)(param_1 + 0x20) * *(int *)(param_1 + 0x24)));
  }
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}


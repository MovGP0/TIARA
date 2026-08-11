/* Ghidra address: 01be10f0 */
/* Ghidra symbol: FUN_01be10f0 */


void FUN_01be10f0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FUN_00410f20(*(longlong *)(param_1 + 0x140));
  }
  FUN_0061d110(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}


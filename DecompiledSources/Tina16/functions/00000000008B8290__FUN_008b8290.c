/* Ghidra address: 008b8290 */
/* Ghidra symbol: FUN_008b8290 */


void FUN_008b8290(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_008b8510(param_1);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_008b83d0(*(longlong *)(param_1 + 0x10),param_1);
  }
  FUN_004b1010(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}


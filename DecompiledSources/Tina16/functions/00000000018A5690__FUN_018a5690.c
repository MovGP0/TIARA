/* Ghidra address: 018a5690 */
/* Ghidra symbol: FUN_018a5690 */


void FUN_018a5690(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 0x4f8) != 0) {
    FUN_00410f20(*(longlong *)(param_1 + 0x4f8));
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x528));
  if (*(longlong *)(param_1 + 0x568) != 0) {
    FUN_00452320(param_1 + 0x568);
  }
  FUN_00660360(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}


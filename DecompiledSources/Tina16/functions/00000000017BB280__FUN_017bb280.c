/* Ghidra address: 017bb280 */
/* Ghidra symbol: FUN_017bb280 */


void FUN_017bb280(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if (DAT_01fa3630 == param_1) {
    DAT_01fa3630 = 0;
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_019a4e10(*(longlong *)(param_1 + 0x10),param_1);
  }
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}


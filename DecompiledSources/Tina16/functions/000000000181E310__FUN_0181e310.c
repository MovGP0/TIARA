/* Ghidra address: 0181e310 */
/* Ghidra symbol: FUN_0181e310 */


void FUN_0181e310(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_0181e370(param_1);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_004aee30(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x10),param_1);
  }
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}


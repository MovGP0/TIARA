/* Ghidra address: 00786a00 */
/* Ghidra symbol: FUN_00786a00 */


void FUN_00786a00(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_00786b10(param_1);
  }
  FUN_00785bd0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}


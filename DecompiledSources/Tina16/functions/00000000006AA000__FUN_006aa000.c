/* Ghidra address: 006aa000 */
/* Ghidra symbol: FUN_006aa000 */


void FUN_006aa000(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FUN_004d2d90(*(longlong *)(param_1 + 0x138),param_1);
  }
  FUN_0061d110(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}


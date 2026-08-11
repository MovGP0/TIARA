/* Ghidra address: 00c2df20 */
/* Ghidra symbol: FUN_00c2df20 */


void FUN_00c2df20(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_00c1ab80(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x58),param_1);
  }
  FUN_004b1010(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}


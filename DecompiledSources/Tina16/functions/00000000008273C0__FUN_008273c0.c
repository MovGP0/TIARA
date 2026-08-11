/* Ghidra address: 008273c0 */
/* Ghidra symbol: FUN_008273c0 */


void FUN_008273c0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x108));
  FUN_007d5230(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}


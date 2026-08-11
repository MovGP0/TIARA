/* Ghidra address: 0171f200 */
/* Ghidra symbol: FUN_0171f200 */


void FUN_0171f200(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if (0 < *(int *)(param_1 + 0x10)) {
    FUN_0059b430(param_1 + 8,0);
  }
  FUN_0059b400(param_1 + 8,0);
  FUN_0171d000(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}


/* Ghidra address: 006e8580 */
/* Ghidra symbol: FUN_006e8580 */


void FUN_006e8580(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x48));
  FUN_004b29c0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}


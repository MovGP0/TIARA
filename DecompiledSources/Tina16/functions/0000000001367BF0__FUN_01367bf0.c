/* Ghidra address: 01367bf0 */
/* Ghidra symbol: FUN_01367bf0 */


void FUN_01367bf0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x28));
  FUN_0134f800();
  FUN_01364f70(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}


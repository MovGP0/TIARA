/* Ghidra address: 0055a2f0 */
/* Ghidra symbol: FUN_0055a2f0 */


void FUN_0055a2f0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x58));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x50));
  FUN_00545e70(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}


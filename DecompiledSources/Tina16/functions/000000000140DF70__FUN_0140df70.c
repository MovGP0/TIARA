/* Ghidra address: 0140df70 */
/* Ghidra symbol: FUN_0140df70 */


void FUN_0140df70(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 2000));
  FUN_004095f0(*(undefined8 *)(param_1 + 0x790),(uint)*(ushort *)(param_1 + 0x788) * 2);
  FUN_007fc890(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}


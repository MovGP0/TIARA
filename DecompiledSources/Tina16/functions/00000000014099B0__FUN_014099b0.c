/* Ghidra address: 014099b0 */
/* Ghidra symbol: FUN_014099b0 */


void FUN_014099b0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x728));
  FUN_004095f0(*(undefined8 *)(param_1 + 0x720),(uint)*(ushort *)(param_1 + 0x718) * 2);
  FUN_007fc890(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}


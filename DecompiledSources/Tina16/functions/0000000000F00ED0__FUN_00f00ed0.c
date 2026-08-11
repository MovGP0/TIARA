/* Ghidra address: 00f00ed0 */
/* Ghidra symbol: FUN_00f00ed0 */


void FUN_00f00ed0(undefined8 param_1,longlong param_2)

{
  FUN_0068c370(param_1,param_2);
  *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x800000;
  *(undefined4 *)(param_2 + 0xc) = 0x88;
  *(undefined4 *)(param_2 + 0x30) = 0x800;
  return;
}


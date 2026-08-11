/* Ghidra address: 00cccac0 */
/* Ghidra symbol: FUN_00cccac0 */


void FUN_00cccac0(undefined8 param_1,longlong param_2)

{
  (**(code **)PTR_DAT_02002fc0)(*(undefined8 *)(param_2 + 0x60));
  *(undefined8 *)(param_2 + 0x58) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_2 + 0x68) = 0;
  FUN_00410f20(*(undefined8 *)(param_2 + 0x58));
  return;
}


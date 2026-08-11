/* Ghidra address: 00ccc840 */
/* Ghidra symbol: FUN_00ccc840 */


void FUN_00ccc840(undefined8 param_1,longlong param_2)

{
  (**(code **)PTR_DAT_02002fc0)(*(undefined8 *)(param_2 + 0x50));
  *(undefined8 *)(param_2 + 0x48) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_2 + 0x58) = 0;
  FUN_00410f20(*(undefined8 *)(param_2 + 0x48));
  return;
}


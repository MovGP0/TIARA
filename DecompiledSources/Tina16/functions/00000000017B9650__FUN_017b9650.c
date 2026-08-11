/* Ghidra address: 017b9650 */
/* Ghidra symbol: FUN_017b9650 */


void FUN_017b9650(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  *(undefined4 *)(param_1 + 0xc) = *param_3;
  *(undefined4 *)(param_1 + 0x10) = param_3[1];
  FUN_00c3c3f0(*(undefined8 *)(param_1 + 0x40));
  FUN_00c3c480(*(undefined8 *)(param_3 + 2),param_1 + 0x40);
  return;
}


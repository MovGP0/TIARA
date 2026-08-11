/* Ghidra address: 017f41b0 */
/* Ghidra symbol: FUN_017f41b0 */


void FUN_017f41b0(longlong param_1,longlong param_2)

{
  FUN_00419430(param_1 + 0x18,&DAT_017f3558);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  FUN_004192a0(param_1 + 0x18,*(undefined8 *)(param_2 + 0x18),&DAT_017f3558);
  return;
}


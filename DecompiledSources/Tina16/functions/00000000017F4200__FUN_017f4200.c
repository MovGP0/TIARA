/* Ghidra address: 017f4200 */
/* Ghidra symbol: FUN_017f4200 */


void FUN_017f4200(longlong param_1)

{
  FUN_00419430(param_1 + 0x18,&DAT_017f3558);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_00419260(param_1 + 0x18,&DAT_017f3558,1,(longlong)*(int *)(param_1 + 0xc));
  return;
}


/* Ghidra address: 0114d180 */
/* Ghidra symbol: FUN_0114d180 */


void FUN_0114d180(longlong param_1)

{
  double dVar1;
  
  dVar1 = (double)FUN_00c42750((double)(int)-(uint)(byte)*PTR_DAT_02005310);
  *(undefined8 *)(param_1 + 0x7d9) = 0;
  *(double *)(param_1 + 0x7e1) =
       (double)(uint)(1 << (*(char *)(param_1 + 0x7c8) - 1U & 0x1f)) /
       (*(double *)(param_1 + 0x7d1) - *(double *)(param_1 + 0x7c9)) - dVar1;
  FUN_00b90440(*(undefined8 *)(param_1 + 0x708),*(undefined8 *)(param_1 + 0x7d9));
  FUN_00b90440(*(undefined8 *)(param_1 + 0x710),*(undefined8 *)(param_1 + 0x7e1));
  return;
}


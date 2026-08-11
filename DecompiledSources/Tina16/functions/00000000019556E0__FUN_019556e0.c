/* Ghidra address: 019556e0 */
/* Ghidra symbol: FUN_019556e0 */


void FUN_019556e0(longlong param_1)

{
  undefined4 uVar1;
  
  FUN_01950d30(param_1);
  uVar1 = FUN_0040c770((*(double *)(param_1 + 0xb0) * (double)*(int *)(param_1 + 0x208)) /
                       (double)DAT_01fb7de8);
  FUN_0064cc50(*(undefined8 *)(param_1 + 0x1a0),uVar1);
  return;
}


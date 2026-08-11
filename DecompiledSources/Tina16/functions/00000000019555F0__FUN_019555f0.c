/* Ghidra address: 019555f0 */
/* Ghidra symbol: FUN_019555f0 */


void FUN_019555f0(longlong param_1)

{
  undefined4 uVar1;
  
  FUN_01950980(param_1);
  uVar1 = FUN_0040c770((*(double *)(param_1 + 0xa8) * (double)*(int *)(param_1 + 0x208)) /
                       (double)DAT_01fb7de8);
  FUN_0064cbf0(*(undefined8 *)(param_1 + 0x1a0),uVar1);
  return;
}


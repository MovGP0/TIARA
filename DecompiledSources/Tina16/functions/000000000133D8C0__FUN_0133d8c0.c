/* Ghidra address: 0133d8c0 */
/* Ghidra symbol: FUN_0133d8c0 */


void FUN_0133d8c0(longlong param_1)

{
  undefined1 uVar1;
  
  *(undefined1 *)(param_1 + 0x49c) = 1;
  *(undefined1 *)(param_1 + 0x13b6) = 1;
  uVar1 = FUN_0040c770(((*(double *)(param_1 + 0x390) +
                        (*(double *)(param_1 + 0x3a8) - 1.0) * *(double *)(param_1 + 0x388)) * 100.0
                       ) / (*(double *)(param_1 + 0x695) * *(double *)(param_1 + 0x388)));
  *(undefined1 *)(param_1 + 0x13b8) = uVar1;
  return;
}


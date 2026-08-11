/* Ghidra address: 00fabc90 */
/* Ghidra symbol: FUN_00fabc90 */


void FUN_00fabc90(longlong param_1,undefined8 param_2)

{
  *(undefined1 *)(param_1 + 0x8a0) = 1;
  FUN_00faaab0(param_1,param_2);
  FUN_00fab140(param_1,param_2);
  *(undefined1 *)(param_1 + 0x8a0) = 0;
  return;
}


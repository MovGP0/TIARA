/* Ghidra address: 00fc7e10 */
/* Ghidra symbol: FUN_00fc7e10 */


void FUN_00fc7e10(longlong param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x6c8) + 0x260))(*(longlong **)(param_1 + 0x6c8));
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x7b8) = 0;
    *(undefined4 *)(param_1 + 0x7bc) = 0;
    *(undefined4 *)(param_1 + 0x7c0) = 0;
    *(undefined4 *)(param_1 + 0x7c4) = 1;
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x7b8) = 0;
    *(undefined4 *)(param_1 + 0x7bc) = 0;
    *(undefined4 *)(param_1 + 0x7c0) = 1;
    *(undefined4 *)(param_1 + 0x7c4) = 1;
  }
  else if (iVar1 == 2) {
    *(undefined4 *)(param_1 + 0x7b8) = 1;
    *(undefined4 *)(param_1 + 0x7bc) = 1;
    *(undefined4 *)(param_1 + 0x7c0) = 0;
    *(undefined4 *)(param_1 + 0x7c4) = 1;
  }
  return;
}


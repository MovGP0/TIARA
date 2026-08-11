/* Ghidra address: 00e07ed0 */
/* Ghidra symbol: FUN_00e07ed0 */


void FUN_00e07ed0(longlong param_1,undefined4 param_2)

{
  *(int *)(param_1 + 0x1058) = *(int *)(param_1 + 0x1058) + 1;
  if (0x400 < *(int *)(param_1 + 0x1058)) {
    FUN_00e078a0(L"match stack overflow");
  }
  *(undefined4 *)(param_1 + 0x1058 + (longlong)*(int *)(param_1 + 0x1058) * 4) = param_2;
  return;
}


/* Ghidra address: 01026cb0 */
/* Ghidra symbol: FUN_01026cb0 */


void FUN_01026cb0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x8b4) = 1;
  *(undefined4 *)(param_1 + 0x8b8) = 1;
  *(undefined4 *)(param_1 + 0x8bc) = 3;
  *(undefined4 *)(param_1 + 0x8c0) = 1;
  *(undefined4 *)(param_1 + 0x8c4) = 2;
  *(int *)(param_1 + 0x8c8) =
       *(int *)(param_1 + 0x8b4) + *(int *)(param_1 + 0x8b8) + *(int *)(param_1 + 0x8bc);
  *(int *)(param_1 + 0x8cc) = *(int *)(param_1 + 0x8c0) + *(int *)(param_1 + 0x8c4);
  *(undefined4 *)(param_1 + 0x8d0) = 4;
  return;
}


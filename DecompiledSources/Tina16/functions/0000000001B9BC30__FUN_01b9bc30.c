/* Ghidra address: 01b9bc30 */
/* Ghidra symbol: FUN_01b9bc30 */


void FUN_01b9bc30(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0xe8))
            (param_2,0,*(int *)((longlong)param_2 + 0xc) + *(int *)(param_1 + 0x16c),
             (int)param_2[2] + *(int *)(param_1 + 0x168));
  return;
}


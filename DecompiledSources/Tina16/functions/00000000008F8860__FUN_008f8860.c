/* Ghidra address: 008f8860 */
/* Ghidra symbol: FUN_008f8860 */


void FUN_008f8860(longlong *param_1)

{
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    (**(code **)(*param_1 + 0x20))(param_1);
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    (**(code **)(*param_1 + 0x58))(param_1,0);
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return;
}


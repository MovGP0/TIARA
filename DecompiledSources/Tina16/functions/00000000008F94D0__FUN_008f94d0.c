/* Ghidra address: 008f94d0 */
/* Ghidra symbol: FUN_008f94d0 */


void FUN_008f94d0(longlong *param_1)

{
  if (((char)param_1[4] == '\0') && (1 < *(int *)((longlong)param_1 + 0xc))) {
    (**(code **)(*param_1 + 0x20))(param_1);
    FUN_008f9330(param_1,0,*(int *)((longlong)param_1 + 0xc) + -1);
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return;
}


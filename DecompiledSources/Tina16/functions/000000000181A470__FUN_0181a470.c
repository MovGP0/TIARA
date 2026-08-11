/* Ghidra address: 0181a470 */
/* Ghidra symbol: FUN_0181a470 */


void FUN_0181a470(longlong *param_1)

{
  FUN_007fc500(param_1);
  (**(code **)(*param_1 + 0x2e0))(param_1);
  FUN_0181a890(param_1,*(undefined4 *)(*(longlong *)PTR_DAT_02005950 + 0x98));
  (**(code **)(*param_1 + 0x2e8))(param_1);
  if (*(char *)((longlong)param_1 + 0x6cd) == '\0') {
    FUN_0181b150(param_1,0);
  }
  (**(code **)(*param_1 + 0x338))(param_1);
  return;
}


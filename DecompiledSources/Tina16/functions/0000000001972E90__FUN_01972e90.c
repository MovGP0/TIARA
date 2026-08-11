/* Ghidra address: 01972e90 */
/* Ghidra symbol: FUN_01972e90 */


void FUN_01972e90(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_004170c0(L"\\Software\\",*(undefined8 *)(param_1 + 0x1c8),1);
  if (iVar1 == 1) {
    FUN_005ed7a0(&PTR_FUN_005e94e0,1,*(undefined8 *)(param_1 + 0x1c8));
  }
  else {
    FUN_005da0f0(&PTR_FUN_005d5a90,1,*(undefined8 *)(param_1 + 0x1c8));
  }
  return;
}


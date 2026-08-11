/* Ghidra address: 00651120 */
/* Ghidra symbol: FUN_00651120 */


void FUN_00651120(longlong *param_1)

{
  char cVar1;
  
  (**(code **)(*param_1 + -0x38))(param_1);
  cVar1 = FUN_0064e170(param_1);
  if (cVar1 == '\0') {
    *(uint *)((longlong)param_1 + 0xa4) = *(uint *)((longlong)param_1 + 0xa4) & 0xfffffffe;
  }
  else {
    FUN_0064e190(param_1,0);
    if ((*(uint *)((longlong)param_1 + 0xa4) & 1) != 0) {
      FUN_0064fca0(param_1,0x202,0,0xffffffffffffffff);
    }
  }
  return;
}


/* Ghidra address: 00702d80 */
/* Ghidra symbol: FUN_00702d80 */


void FUN_00702d80(longlong *param_1)

{
  char cVar1;
  
  FUN_0064d980(param_1);
  if ((*(byte *)((longlong)param_1 + 0x4cb) & 2) != 0) {
    cVar1 = FUN_0065be20(param_1);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x188))(param_1);
    }
  }
  return;
}


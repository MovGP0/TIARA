/* Ghidra address: 00702d00 */
/* Ghidra symbol: FUN_00702d00 */


void FUN_00702d00(longlong *param_1,char param_2)

{
  char cVar1;
  
  if (*(char *)((longlong)param_1 + 0x4cc) != param_2) {
    *(char *)((longlong)param_1 + 0x4cc) = param_2;
    cVar1 = FUN_0065be20(param_1);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x188))(param_1);
    }
  }
  return;
}


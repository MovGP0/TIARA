/* Ghidra address: 00702d40 */
/* Ghidra symbol: FUN_00702d40 */


void FUN_00702d40(longlong *param_1)

{
  char cVar1;
  
  FUN_0064c480(param_1);
  if ((*(byte *)((longlong)param_1 + 0x4cb) & 2) != 0) {
    cVar1 = FUN_0065be20(param_1);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x188))(param_1);
    }
  }
  return;
}


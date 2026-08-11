/* Ghidra address: 00701710 */
/* Ghidra symbol: FUN_00701710 */


void FUN_00701710(longlong *param_1,char param_2)

{
  char cVar1;
  
  if (param_2 != *(char *)((longlong)param_1 + 0x4cd)) {
    *(char *)((longlong)param_1 + 0x4cd) = param_2;
    cVar1 = FUN_0065be20(param_1);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x188))(param_1);
    }
  }
  return;
}


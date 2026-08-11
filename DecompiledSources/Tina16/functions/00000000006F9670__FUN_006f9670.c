/* Ghidra address: 006f9670 */
/* Ghidra symbol: FUN_006f9670 */


void FUN_006f9670(longlong *param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  char cVar1;
  
  if ((*(char *)((longlong)param_1 + 0x33a) == '\x02') && ((char)param_2 == '\0')) {
    cVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
    if ((cVar1 != '\0') || ((char)param_1[0x67] != '\0')) {
      FUN_006fa3b0(param_1,*(char *)((longlong)param_1 + 0x31a) == '\0');
    }
  }
  FUN_00650920(param_1,param_2,param_3,param_4,param_5);
  return;
}


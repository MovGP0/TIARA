/* Ghidra address: 0064dbe0 */
/* Ghidra symbol: FUN_0064dbe0 */


void FUN_0064dbe0(longlong *param_1,char param_2)

{
  code *pcVar1;
  
  if (*(char *)((longlong)param_1 + 0xa9) != param_2) {
    pcVar1 = (code *)FUN_00411550(param_1,0xffcc);
    (*pcVar1)(param_1);
    *(char *)((longlong)param_1 + 0xa9) = param_2;
    FUN_0064fca0(param_1,0xb00b,(longlong)param_2,0);
    if ((param_2 == '\0') || (*(char *)((longlong)param_1 + 0xae) == '\0')) {
      (**(code **)(*param_1 + 0x108))(param_1);
    }
    else {
      pcVar1 = (code *)FUN_00411550(param_1,0xffee);
      (*pcVar1)(param_1);
    }
  }
  return;
}


/* Ghidra address: 006fcb10 */
/* Ghidra symbol: FUN_006fcb10 */


void FUN_006fcb10(longlong *param_1,char param_2)

{
  char cVar1;
  code *pcVar2;
  
  if (*(char *)((longlong)param_1 + 0x4e6) != param_2) {
    *(char *)((longlong)param_1 + 0x4e6) = param_2;
    if (*(char *)((longlong)param_1 + 0xae) != '\0') {
      pcVar2 = (code *)FUN_00411550(param_1,0xffee);
      (*pcVar2)(param_1);
    }
    if ((*(byte *)((longlong)param_1 + 0x4cb) & 2) != 0) {
      cVar1 = FUN_0065be20(param_1);
      if (cVar1 != '\0') {
        (**(code **)(*param_1 + 0x188))(param_1);
      }
    }
  }
  return;
}


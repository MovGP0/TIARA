/* Ghidra address: 01bd3770 */
/* Ghidra symbol: FUN_01bd3770 */


void FUN_01bd3770(longlong *param_1,undefined2 param_2,int param_3,int param_4)

{
  int iVar1;
  char cVar2;
  
  FUN_00650d70(param_1,param_2,param_3,param_4);
  if (*(char *)((longlong)param_1 + 0x362) == '\0') {
    if (*(char *)((longlong)param_1 + 0x363) == '\0') {
      FUN_01bd3bf0(param_1);
    }
  }
  else {
    if (*(char *)((longlong)param_1 + 0x361) == '\0') {
      cVar2 = '\0';
    }
    else {
      cVar2 = '\x03';
    }
    if (-1 < param_3) {
      iVar1 = FUN_0064d0b0(param_1);
      if ((param_3 < iVar1) && (-1 < param_4)) {
        iVar1 = FUN_0064d120(param_1);
        if (param_4 <= iVar1) {
          if (*(char *)((longlong)param_1 + 0x361) == '\0') {
            cVar2 = '\x02';
          }
          else {
            cVar2 = '\x03';
          }
        }
      }
    }
    if (cVar2 != *(char *)((longlong)param_1 + 0x366)) {
      *(char *)((longlong)param_1 + 0x366) = cVar2;
      (**(code **)(*param_1 + 0x180))(param_1);
    }
  }
  return;
}


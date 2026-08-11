/* Ghidra address: 0082a270 */
/* Ghidra symbol: FUN_0082a270 */


void FUN_0082a270(longlong *param_1,undefined2 param_2,int param_3,int param_4)

{
  int iVar1;
  char cVar2;
  
  FUN_00650d70(param_1,param_2,param_3,param_4);
  if (*(char *)((longlong)param_1 + 0x329) == '\0') {
    if (*(char *)((longlong)param_1 + 0x339) == '\0') {
      FUN_0082a140(param_1);
    }
  }
  else {
    if ((char)param_1[0x65] == '\0') {
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
          if ((char)param_1[0x65] == '\0') {
            cVar2 = '\x02';
          }
          else {
            cVar2 = '\x03';
          }
        }
      }
    }
    if (cVar2 != *(char *)((longlong)param_1 + 0x33a)) {
      *(char *)((longlong)param_1 + 0x33a) = cVar2;
      (**(code **)(*param_1 + 0x180))(param_1);
    }
  }
  return;
}


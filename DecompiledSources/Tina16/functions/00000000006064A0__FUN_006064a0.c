/* Ghidra address: 006064a0 */
/* Ghidra symbol: FUN_006064a0 */


void FUN_006064a0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  int local_1c;
  
  (**(code **)(*param_2 + 0x18))(param_2,&local_1c,4);
  if (local_1c < 5) {
    (**(code **)(*param_1 + 0x10))(param_1,0);
  }
  else {
    cVar1 = FUN_00606d10(*param_1,param_2);
    if (cVar1 == '\0') {
      FUN_00606670(param_1,param_2,local_1c + -4);
    }
    else {
      FUN_00606530(param_1,param_2);
    }
  }
  lVar2 = (**(code **)(*param_1 + 0x50))(param_1);
  *(bool *)((longlong)param_1 + 0x3a) = lVar2 != 0;
  (**(code **)(*param_1 + 0x20))(param_1,param_1);
  return;
}


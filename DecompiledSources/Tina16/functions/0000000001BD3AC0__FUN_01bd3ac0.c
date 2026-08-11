/* Ghidra address: 01bd3ac0 */
/* Ghidra symbol: FUN_01bd3ac0 */


void FUN_01bd3ac0(longlong *param_1,char param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x230))(param_1);
  if (cVar1 == '\0') {
    param_2 = '\0';
  }
  if ((param_2 != *(char *)((longlong)param_1 + 0x361)) &&
     ((*(char *)((longlong)param_1 + 0x361) == '\0' || ((char)param_1[0x6c] != '\0')))) {
    *(char *)((longlong)param_1 + 0x361) = param_2;
    if (param_2 == '\0') {
      *(undefined1 *)((longlong)param_1 + 0x366) = 0;
      (**(code **)(*param_1 + 0x188))(param_1);
    }
    else {
      if (*(char *)((longlong)param_1 + 0x366) == '\0') {
        (**(code **)(*param_1 + 0x180))(param_1);
      }
      *(undefined1 *)((longlong)param_1 + 0x366) = 3;
    }
  }
  return;
}


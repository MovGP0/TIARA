/* Ghidra address: 01bd3590 */
/* Ghidra symbol: FUN_01bd3590 */


void FUN_01bd3590(longlong *param_1)

{
  char cVar1;
  
  FUN_006516f0(param_1);
  if (*(char *)((longlong)param_1 + 0x365) != '\0') {
    cVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
    if (cVar1 != '\0') {
      *(undefined1 *)((longlong)param_1 + 0x363) = 0;
      cVar1 = (**(code **)(*param_1 + 0x228))(param_1);
      if (cVar1 == '\0') {
        *(undefined1 *)((longlong)param_1 + 0x366) = 0;
      }
      *(undefined1 *)((longlong)param_1 + 0x362) = 0;
      (**(code **)(*param_1 + 0x188))(param_1);
    }
  }
  return;
}


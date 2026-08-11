/* Ghidra address: 007016c0 */
/* Ghidra symbol: FUN_007016c0 */


void FUN_007016c0(longlong *param_1,char param_2)

{
  char cVar1;
  
  if (param_2 != *(char *)((longlong)param_1 + 0x4cb)) {
    *(char *)((longlong)param_1 + 0x4cb) = param_2;
    cVar1 = FUN_0065be20(param_1);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x188))(param_1);
    }
  }
  return;
}


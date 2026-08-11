/* Ghidra address: 0082a200 */
/* Ghidra symbol: FUN_0082a200 */


void FUN_0082a200(longlong *param_1,undefined4 param_2,undefined2 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  char cVar1;
  
  FUN_00650920(param_1,param_2,param_3,param_4,param_5);
  if ((char)param_2 == '\0') {
    cVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
    if (cVar1 != '\0') {
      if ((char)param_1[0x65] == '\0') {
        *(undefined1 *)((longlong)param_1 + 0x33a) = 2;
        (**(code **)(*param_1 + 0x180))(param_1);
      }
      *(undefined1 *)((longlong)param_1 + 0x329) = 1;
    }
  }
  return;
}


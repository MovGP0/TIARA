/* Ghidra address: 00afe260 */
/* Ghidra symbol: FUN_00afe260 */


void FUN_00afe260(longlong *param_1)

{
  if (*(char *)((longlong)param_1 + 0xae) != '\0') {
    FUN_0064dbe0(param_1[0xea],0);
    FUN_0064dbe0(param_1[0xeb],0);
    (**(code **)(*param_1 + 400))
              (param_1,(int)param_1[0x12],*(undefined4 *)((longlong)param_1 + 0x94),
               (int)param_1[0x123] + 2,(int)param_1[0x121] + 2);
  }
  return;
}


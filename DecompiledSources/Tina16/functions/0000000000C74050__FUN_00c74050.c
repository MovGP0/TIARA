/* Ghidra address: 00c74050 */
/* Ghidra symbol: FUN_00c74050 */


void FUN_00c74050(longlong *param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(longlong **)(param_1[0xa5] + 8) + 0x60))
                    (*(longlong **)(param_1[0xa5] + 8));
  if (((int)param_1[0x13] - iVar1) + *(int *)((longlong)param_1 + 0x534) * -2 <
      (int)*(short *)(param_2 + 0x10)) {
    if ((char)param_1[0xa3] == '\0') {
      *(undefined1 *)(param_1 + 0xa3) = 1;
      (**(code **)(*param_1 + 0x180))(param_1);
      FUN_00c74490(param_1);
      FUN_00650a80(param_1,param_2);
    }
    else {
      thunk_FUN_039ed528();
      *(undefined1 *)(param_1 + 0xa3) = 0;
      (**(code **)(*param_1 + 0x180))(param_1);
    }
  }
  else {
    FUN_00650a80(param_1,param_2);
    *(undefined1 *)(param_1 + 0xa3) = 0;
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}


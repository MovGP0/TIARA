/* Ghidra address: 017bd700 */
/* Ghidra symbol: FUN_017bd700 */


void FUN_017bd700(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (*(char *)((longlong)param_1 + 0xaa) == '\0') {
    lVar1 = param_1[1];
    if ((char)lVar1 != '\0') {
      (**(code **)(*param_1 + 0xa8))(param_1,param_2);
    }
    *(int *)(param_1 + 0x17) =
         ((int)param_1[0x17] - *(int *)((longlong)param_1 + 0xc)) +
         *(int *)((longlong)param_1 + 0x14);
    *(int *)((longlong)param_1 + 0xbc) =
         (*(int *)((longlong)param_1 + 0xbc) - (int)param_1[2]) + (int)param_1[3];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_1 + 0x14);
    *(int *)(param_1 + 2) = (int)param_1[3];
    *(undefined1 *)((longlong)param_1 + 0xb) = 0;
    if ((char)lVar1 != '\0') {
      (**(code **)(*param_1 + 0xa0))(param_1,param_2);
    }
  }
  else {
    FUN_017bea50(param_1,param_2);
  }
  return;
}


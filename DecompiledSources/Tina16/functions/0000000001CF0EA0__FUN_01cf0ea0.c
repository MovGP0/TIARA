/* Ghidra address: 01cf0ea0 */
/* Ghidra symbol: FUN_01cf0ea0 */


void FUN_01cf0ea0(longlong *param_1,undefined8 param_2,int param_3,int param_4)

{
  if (*(int *)((longlong)param_1 + 0x1c) == -1) {
    (**(code **)(*param_1 + 0xe8))
              (param_1,param_2,*(int *)((longlong)param_1 + 0x14) + param_3,
               (int)param_1[3] + param_4);
  }
  return;
}


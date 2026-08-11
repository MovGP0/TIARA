/* Ghidra address: 0068e690 */
/* Ghidra symbol: FUN_0068e690 */


void FUN_0068e690(longlong *param_1,char param_2)

{
  if ((char)param_1[0x92] != param_2) {
    *(char *)(param_1 + 0x92) = param_2;
    if ((*(ushort *)((longlong)param_1 + 0x34) & 1) == 0) {
      (**(code **)(*param_1 + 400))
                (param_1,(int)param_1[0x12],*(undefined4 *)((longlong)param_1 + 0x94),
                 *(undefined4 *)((longlong)param_1 + 0x9c),(int)param_1[0x13]);
    }
    FUN_00655b90(param_1);
  }
  return;
}


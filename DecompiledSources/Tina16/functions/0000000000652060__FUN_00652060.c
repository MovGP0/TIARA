/* Ghidra address: 00652060 */
/* Ghidra symbol: FUN_00652060 */


void FUN_00652060(longlong *param_1)

{
  if ((*(ushort *)((longlong)param_1 + 0x34) & 1) == 0) {
    (**(code **)(*param_1 + 400))
              (param_1,(int)param_1[0x12],*(undefined4 *)((longlong)param_1 + 0x94),
               (int)param_1[0x13],*(undefined4 *)((longlong)param_1 + 0x9c));
  }
  return;
}


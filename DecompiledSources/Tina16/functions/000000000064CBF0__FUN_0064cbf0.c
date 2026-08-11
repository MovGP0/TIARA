/* Ghidra address: 0064cbf0 */
/* Ghidra symbol: FUN_0064cbf0 */


void FUN_0064cbf0(longlong *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 400))
            (param_1,(int)param_1[0x12],*(undefined4 *)((longlong)param_1 + 0x94),param_2,
             *(undefined4 *)((longlong)param_1 + 0x9c));
  *(byte *)((longlong)param_1 + 0xfc) = *(byte *)((longlong)param_1 + 0xfc) | 4;
  if ((*(ushort *)((longlong)param_1 + 0x34) & 2) != 0) {
    *(int *)(param_1 + 0x5f) = (int)param_1[0x13];
  }
  return;
}


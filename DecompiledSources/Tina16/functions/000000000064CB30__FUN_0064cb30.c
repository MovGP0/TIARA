/* Ghidra address: 0064cb30 */
/* Ghidra symbol: FUN_0064cb30 */


void FUN_0064cb30(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 400))
            (param_1,param_2,*(undefined4 *)((longlong)param_1 + 0x94),(int)param_1[0x13],
             *(undefined4 *)((longlong)param_1 + 0x9c));
  *(byte *)((longlong)param_1 + 0xfc) = *(byte *)((longlong)param_1 + 0xfc) | 1;
  if ((*(ushort *)((longlong)param_1 + 0x34) & 2) != 0) {
    *(int *)(param_1 + 0x5e) = (int)param_1[0x12];
  }
  return;
}


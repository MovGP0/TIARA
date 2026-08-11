/* Ghidra address: 0064cb90 */
/* Ghidra symbol: FUN_0064cb90 */


void FUN_0064cb90(longlong *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 400))
            (param_1,(int)param_1[0x12],param_2,(int)param_1[0x13],
             *(undefined4 *)((longlong)param_1 + 0x9c));
  *(byte *)((longlong)param_1 + 0xfc) = *(byte *)((longlong)param_1 + 0xfc) | 2;
  if ((*(ushort *)((longlong)param_1 + 0x34) & 2) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2f4) = *(undefined4 *)((longlong)param_1 + 0x94);
  }
  return;
}


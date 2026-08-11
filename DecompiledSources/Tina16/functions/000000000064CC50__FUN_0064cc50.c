/* Ghidra address: 0064cc50 */
/* Ghidra symbol: FUN_0064cc50 */


void FUN_0064cc50(longlong *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 400))
            (param_1,(int)param_1[0x12],*(undefined4 *)((longlong)param_1 + 0x94),(int)param_1[0x13]
             ,param_2);
  *(byte *)((longlong)param_1 + 0xfc) = *(byte *)((longlong)param_1 + 0xfc) | 8;
  if ((*(ushort *)((longlong)param_1 + 0x34) & 2) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2fc) = *(undefined4 *)((longlong)param_1 + 0x9c);
  }
  return;
}


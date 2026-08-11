/* Ghidra address: 008037c0 */
/* Ghidra symbol: FUN_008037c0 */


void FUN_008037c0(longlong *param_1,char param_2)

{
  if (((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0) &&
     ((*(uint *)((longlong)param_1 + 0xa4) & 0x2000) == 0)) {
    *(char *)((longlong)param_1 + 0x4d2) = param_2;
  }
  if (param_2 != '\x01') {
    (**(code **)(*param_1 + 0x108))(param_1);
  }
  if (param_1[0xa6] != 0) {
    (**(code **)(*(longlong *)param_1[0xa6] + 0x20))((longlong *)param_1[0xa6]);
  }
  return;
}


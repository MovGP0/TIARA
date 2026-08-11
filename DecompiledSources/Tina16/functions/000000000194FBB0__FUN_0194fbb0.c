/* Ghidra address: 0194fbb0 */
/* Ghidra symbol: FUN_0194fbb0 */


void FUN_0194fbb0(longlong *param_1,undefined4 param_2,longlong param_3)

{
  if ((*(char *)(param_3 + 0xb) != '\x01') ||
     (((*(byte *)((longlong)param_1 + 0xc4) & 1) != 0 && (*(char *)(param_3 + 0x1e) == '\0')))) {
    FUN_01952520(param_1,param_3);
    (**(code **)(*param_1 + 0x150))(param_1,param_2,param_3);
  }
  return;
}


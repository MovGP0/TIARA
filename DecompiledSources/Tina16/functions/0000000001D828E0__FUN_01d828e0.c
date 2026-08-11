/* Ghidra address: 01d828e0 */
/* Ghidra symbol: FUN_01d828e0 */


void FUN_01d828e0(longlong *param_1,undefined8 param_2)

{
  if (*(char *)(param_1[0xf9] + 0x328) != '\0') {
    FUN_0082a6c0(param_1[0xf9],0);
    (**(code **)(*param_1 + 0x410))(param_1,param_2);
  }
  (**(code **)(*(longlong *)param_1[0xf9] + 0x128))((longlong *)param_1[0xf9],0);
  *(undefined1 *)((longlong)param_1 + 0x7ec) = 1;
  (**(code **)(*(longlong *)param_1[0x151] + 0x168))((longlong *)param_1[0x151]);
  FUN_0082a6c0(param_1[0xf8],1);
  return;
}


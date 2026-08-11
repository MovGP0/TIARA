/* Ghidra address: 012b0090 */
/* Ghidra symbol: FUN_012b0090 */


void FUN_012b0090(longlong *param_1,undefined8 param_2)

{
  FUN_0082a6c0(param_1[0xf8],1);
  if (*(char *)(param_1[0xf9] + 0x328) != '\0') {
    FUN_0082a6c0(param_1[0xf9],0);
    (**(code **)(*param_1 + 0x410))(param_1,param_2);
  }
  (**(code **)(*(longlong *)param_1[0xf9] + 0x128))((longlong *)param_1[0xf9],0);
  *(undefined1 *)((longlong)param_1 + 0x7ec) = 1;
  (**(code **)(*(longlong *)param_1[0x1b7] + 0x168))((longlong *)param_1[0x1b7]);
  return;
}


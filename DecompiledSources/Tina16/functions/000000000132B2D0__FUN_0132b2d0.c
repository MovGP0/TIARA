/* Ghidra address: 0132b2d0 */
/* Ghidra symbol: FUN_0132b2d0 */


void FUN_0132b2d0(longlong param_1,undefined8 param_2)

{
  if (*(char *)(*(longlong *)(param_1 + 0x6d8) + 0x328) != *(char *)(param_1 + 0x710)) {
    FUN_0132b660(param_1);
    *(undefined1 *)(param_1 + 0x71c) = 0;
    FUN_0082a6c0(*(undefined8 *)(param_1 + 0x6f0),0);
    FUN_0132b070(param_1,param_2);
    (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0x128))(*(longlong **)(param_1 + 0x6e8),1);
    (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x128))(*(longlong **)(param_1 + 0x6e0),1);
    PTR_DAT_02004010[0x813] = 1;
    FUN_013a4400(*(undefined8 *)PTR_DAT_020032b8,param_2);
  }
  return;
}


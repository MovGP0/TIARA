/* Ghidra address: 0132b500 */
/* Ghidra symbol: FUN_0132b500 */


void FUN_0132b500(longlong param_1,undefined8 param_2)

{
  if (*(char *)(*(longlong *)(param_1 + 0x6e8) + 0x328) != *(char *)(param_1 + 0x712)) {
    FUN_0132b660(param_1);
    *(undefined1 *)(param_1 + 0x71c) = 4;
    FUN_0082a6c0(*(undefined8 *)(param_1 + 0x6f0),0);
    FUN_0132b070(param_1,param_2);
    FUN_013a44e0(*(undefined8 *)PTR_DAT_020032b8);
  }
  return;
}


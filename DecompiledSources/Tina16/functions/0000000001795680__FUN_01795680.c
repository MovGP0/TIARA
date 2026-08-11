/* Ghidra address: 01795680 */
/* Ghidra symbol: FUN_01795680 */


void FUN_01795680(longlong param_1,longlong *param_2,undefined4 param_3)

{
  if (*(char *)((longlong)param_2 + 0x21) != (char)param_3) {
    FUN_01791b60(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x948) + 0x310));
    FUN_017afd00(param_2,param_3);
    *(undefined1 *)(param_1 + 0xc93) = 1;
    (**(code **)(*param_2 + 0x28))(param_2,param_1);
    *(undefined1 *)(param_1 + 0xc93) = 0;
    (**(code **)(**(longlong **)(param_1 + 0x948) + 0x180))(*(longlong **)(param_1 + 0x948));
  }
  return;
}


/* Ghidra address: 010af970 */
/* Ghidra symbol: FUN_010af970 */


void FUN_010af970(longlong param_1,longlong param_2)

{
  FUN_00414ad0(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30));
  FUN_00414ad0(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38));
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))
            (*(longlong **)(param_1 + 0x20),*(undefined8 *)(param_2 + 0x20));
  FUN_0160eaf0(*(undefined8 *)(param_1 + 0x20),8);
  return;
}


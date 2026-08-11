/* Ghidra address: 00b3c370 */
/* Ghidra symbol: FUN_00b3c370 */


void FUN_00b3c370(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x18) = *param_3;
  *(undefined2 *)(param_1 + 0x1c) = *(undefined2 *)(param_3 + 1);
  *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)((longlong)param_3 + 6);
  FUN_00b3d540();
  return;
}


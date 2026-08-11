/* Ghidra address: 0176c5f0 */
/* Ghidra symbol: FUN_0176c5f0 */


void FUN_0176c5f0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_019a1f40(*(longlong *)(param_1 + 8),*(undefined8 *)(param_1 + 0xc0));
    FUN_0199a410(*(undefined8 *)(param_1 + 8),0,param_2,*(undefined8 *)(param_1 + 0x10),
                 *(undefined4 *)(param_1 + 100),(short)param_3,*(undefined8 *)(param_1 + 0x18),
                 param_4);
    FUN_019a1f50(*(undefined8 *)(param_1 + 8));
  }
  FUN_0176a3c0(param_1,*(undefined8 *)(param_1 + 0x10),param_3);
  return;
}


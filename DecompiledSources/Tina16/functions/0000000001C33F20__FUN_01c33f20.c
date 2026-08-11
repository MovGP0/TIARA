/* Ghidra address: 01c33f20 */
/* Ghidra symbol: FUN_01c33f20 */


longlong * FUN_01c33f20(longlong param_1,longlong *param_2,undefined4 param_3)

{
  if (*(longlong *)(param_1 + 0xd8) == 0) {
    FUN_01c28590(*(undefined8 *)(param_1 + 200),param_2,*(undefined4 *)(param_1 + 0xd0),param_3);
    if (*param_2 == 0) {
      FUN_01c28600(*(undefined8 *)(param_1 + 200),param_2,*(undefined4 *)(param_1 + 0xd0),param_3);
    }
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x18))
              (*(longlong **)(param_1 + 0xd8),param_2,param_3);
  }
  return param_2;
}


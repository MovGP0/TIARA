/* Ghidra address: 015dae80 */
/* Ghidra symbol: FUN_015dae80 */


void FUN_015dae80(longlong param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                 undefined1 *param_5)

{
  if (*(longlong *)(param_1 + 0x140) == 0) {
    *param_5 = 0;
  }
  else {
    (**(code **)(param_1 + 0x140))
              (*(undefined8 *)(param_1 + 0x148),param_1,param_2,param_3,param_4,param_5);
  }
  return;
}


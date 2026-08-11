/* Ghidra address: 015dc440 */
/* Ghidra symbol: FUN_015dc440 */


void FUN_015dc440(longlong param_1,undefined1 param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  if (*(longlong *)(param_1 + 0x200) != 0) {
    (**(code **)(param_1 + 0x200))
              (*(undefined8 *)(param_1 + 0x208),param_1,param_2,param_3,param_4,param_5);
  }
  return;
}


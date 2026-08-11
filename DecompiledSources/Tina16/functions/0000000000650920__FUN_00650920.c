/* Ghidra address: 00650920 */
/* Ghidra symbol: FUN_00650920 */


void FUN_00650920(longlong param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  if (*(longlong *)(param_1 + 0x158) != 0) {
    (**(code **)(param_1 + 0x158))
              (*(undefined8 *)(param_1 + 0x160),param_1,param_2,param_3,param_4,param_5);
  }
  return;
}


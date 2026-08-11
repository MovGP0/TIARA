/* Ghidra address: 00a77e70 */
/* Ghidra symbol: FUN_00a77e70 */


void FUN_00a77e70(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,undefined1 param_6,undefined8 param_7)

{
  if (*(longlong *)(param_1 + 0x548) != 0) {
    (**(code **)(param_1 + 0x548))
              (*(undefined8 *)(param_1 + 0x550),param_1,param_3,param_4,param_5,param_6,param_7);
  }
  return;
}


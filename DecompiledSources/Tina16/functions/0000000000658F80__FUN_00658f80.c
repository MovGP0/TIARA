/* Ghidra address: 00658f80 */
/* Ghidra symbol: FUN_00658f80 */


void FUN_00658f80(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5,undefined8 param_6)

{
  if (*(longlong *)(param_1 + 0x3a8) != 0) {
    (**(code **)(param_1 + 0x3a8))
              (*(undefined8 *)(param_1 + 0x3b0),param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return;
}


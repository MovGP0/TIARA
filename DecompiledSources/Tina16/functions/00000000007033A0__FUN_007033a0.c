/* Ghidra address: 007033a0 */
/* Ghidra symbol: FUN_007033a0 */


void FUN_007033a0(longlong param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5,undefined8 param_6)

{
  if (*(longlong *)(param_1 + 0x4b8) != 0) {
    (**(code **)(param_1 + 0x4b8))
              (*(undefined8 *)(param_1 + 0x4c0),param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return;
}


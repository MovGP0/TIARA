/* Ghidra address: 00cce3c0 */
/* Ghidra symbol: FUN_00cce3c0 */


void FUN_00cce3c0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  if (*(longlong *)(param_1 + 0x118) != 0) {
    (**(code **)(param_1 + 0x118))
              (*(undefined8 *)(param_1 + 0x120),param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return;
}


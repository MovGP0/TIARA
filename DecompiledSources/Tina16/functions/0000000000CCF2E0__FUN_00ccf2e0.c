/* Ghidra address: 00ccf2e0 */
/* Ghidra symbol: FUN_00ccf2e0 */


void FUN_00ccf2e0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  if (*(longlong *)(param_1 + 0x1e8) != 0) {
    (**(code **)(param_1 + 0x1e8))
              (*(undefined8 *)(param_1 + 0x1f0),param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return;
}


/* Ghidra address: 0064fae0 */
/* Ghidra symbol: FUN_0064fae0 */


void FUN_0064fae0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  if (*(longlong *)(param_1 + 0x148) != 0) {
    (**(code **)(param_1 + 0x148))
              (*(undefined8 *)(param_1 + 0x150),param_1,param_2,param_3,param_4,param_5);
  }
  return;
}


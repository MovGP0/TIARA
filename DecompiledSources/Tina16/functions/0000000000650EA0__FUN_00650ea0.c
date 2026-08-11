/* Ghidra address: 00650ea0 */
/* Ghidra symbol: FUN_00650ea0 */


void FUN_00650ea0(longlong param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  if (*(longlong *)(param_1 + 0x178) != 0) {
    (**(code **)(param_1 + 0x178))
              (*(undefined8 *)(param_1 + 0x180),param_1,param_2,param_3,param_4,param_5);
  }
  return;
}


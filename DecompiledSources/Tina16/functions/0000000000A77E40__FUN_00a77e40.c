/* Ghidra address: 00a77e40 */
/* Ghidra symbol: FUN_00a77e40 */


void FUN_00a77e40(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  if (*(longlong *)(param_1 + 0x538) != 0) {
    (**(code **)(param_1 + 0x538))(*(undefined8 *)(param_1 + 0x540),param_1,param_3,param_4,param_5)
    ;
  }
  return;
}


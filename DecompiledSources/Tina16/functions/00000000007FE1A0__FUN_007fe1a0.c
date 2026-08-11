/* Ghidra address: 007fe1a0 */
/* Ghidra symbol: FUN_007fe1a0 */


void FUN_007fe1a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_004d30a0(param_1,param_2,param_3,param_4);
  if (*(longlong *)(param_1 + 0x510) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x510) + 0x68))
              (*(longlong **)(param_1 + 0x510),param_2,param_3,param_4);
  }
  return;
}


/* Ghidra address: 006dada0 */
/* Ghidra symbol: FUN_006dada0 */


void FUN_006dada0(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x500) != 0) {
    (**(code **)(param_1 + 0x500))(*(undefined8 *)(param_1 + 0x508),param_1,param_2);
  }
  return;
}


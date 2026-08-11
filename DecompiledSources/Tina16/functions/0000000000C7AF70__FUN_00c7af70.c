/* Ghidra address: 00c7af70 */
/* Ghidra symbol: FUN_00c7af70 */


void FUN_00c7af70(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x318) != 0) {
    (**(code **)(param_1 + 0x318))(*(undefined8 *)(param_1 + 800),param_1,param_2);
  }
  return;
}


/* Ghidra address: 006598b0 */
/* Ghidra symbol: FUN_006598b0 */


void FUN_006598b0(longlong param_1,undefined8 param_2,undefined2 param_3)

{
  if (*(longlong *)(param_1 + 0x408) != 0) {
    (**(code **)(param_1 + 0x408))(*(undefined8 *)(param_1 + 0x410),param_1,param_2,param_3);
  }
  return;
}


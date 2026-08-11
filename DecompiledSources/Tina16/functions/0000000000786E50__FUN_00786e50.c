/* Ghidra address: 00786e50 */
/* Ghidra symbol: FUN_00786e50 */


void FUN_00786e50(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x50) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x50) + -0x20))(*(undefined8 *)(param_2 + 0x50),1);
  }
  return;
}


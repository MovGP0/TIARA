/* Ghidra address: 01a22fd0 */
/* Ghidra symbol: FUN_01a22fd0 */


void FUN_01a22fd0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x880) != 0) {
    (**(code **)(**(longlong **)(param_2 + 0x880) + -0x20))(*(undefined8 *)(param_2 + 0x880),1);
  }
  return;
}


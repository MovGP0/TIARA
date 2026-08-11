/* Ghidra address: 010b67f0 */
/* Ghidra symbol: FUN_010b67f0 */


void FUN_010b67f0(longlong param_1,longlong param_2)

{
  if (param_2 == *(longlong *)(param_1 + 0x720)) {
    *(undefined4 *)(param_1 + 0x798) = 0x3000000;
    (**(code **)(**(longlong **)(param_1 + 0x720) + 0x180))(*(longlong **)(param_1 + 0x720));
  }
  else {
    *(undefined4 *)(param_1 + 0x79c) = 0x3000000;
    (**(code **)(**(longlong **)(param_1 + 0x738) + 0x180))(*(longlong **)(param_1 + 0x738));
  }
  return;
}


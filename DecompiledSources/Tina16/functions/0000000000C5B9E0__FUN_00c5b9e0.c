/* Ghidra address: 00c5b9e0 */
/* Ghidra symbol: FUN_00c5b9e0 */


void FUN_00c5b9e0(longlong param_1,longlong param_2)

{
  if (param_2 == *(longlong *)(param_1 + 0x6e0)) {
    *(undefined4 *)(param_1 + 0x7e0) = 0xfffffffe;
    (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x180))(*(longlong **)(param_1 + 0x6d0));
  }
  else {
    *(undefined4 *)(param_1 + 0x7e4) = 0xfffffffe;
    (**(code **)(**(longlong **)(param_1 + 0x708) + 0x180))(*(longlong **)(param_1 + 0x708));
    (**(code **)(**(longlong **)(param_1 + 0x758) + 0x180))(*(longlong **)(param_1 + 0x758));
  }
  return;
}


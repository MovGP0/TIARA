/* Ghidra address: 00de6c40 */
/* Ghidra symbol: FUN_00de6c40 */


void FUN_00de6c40(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x48) != *(longlong *)(param_2 + 0x40)) {
    FUN_00410f20(*(undefined8 *)(param_2 + 0x48));
  }
  FUN_00410f20(*(undefined8 *)(param_2 + 0x40));
  return;
}


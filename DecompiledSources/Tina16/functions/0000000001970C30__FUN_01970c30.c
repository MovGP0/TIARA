/* Ghidra address: 01970c30 */
/* Ghidra symbol: FUN_01970c30 */


void FUN_01970c30(longlong param_1,longlong param_2)

{
  *(longlong *)(param_1 + 0x160) = param_2;
  if (param_2 == 0) {
    FUN_00414480(param_1 + 0x168);
  }
  else {
    FUN_00414ad0(param_1 + 0x168,*(undefined8 *)(param_2 + 0x1c8));
  }
  return;
}


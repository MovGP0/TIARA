/* Ghidra address: 0105ce70 */
/* Ghidra symbol: FUN_0105ce70 */


undefined8 FUN_0105ce70(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x98) == 0) {
    FUN_00414480(param_2);
  }
  else {
    FUN_00414ad0(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x88));
  }
  return param_2;
}


/* Ghidra address: 005eb220 */
/* Ghidra symbol: FUN_005eb220 */


undefined8 FUN_005eb220(longlong param_1,undefined8 param_2)

{
  if (*(int *)(param_1 + 0x30) == 0) {
    FUN_00414480(param_2);
  }
  else {
    FUN_0044b630(param_2,*(int *)(param_1 + 0x30),0);
  }
  return param_2;
}


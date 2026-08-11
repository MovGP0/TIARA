/* Ghidra address: 0044e030 */
/* Ghidra symbol: FUN_0044e030 */


undefined8 FUN_0044e030(longlong param_1,undefined8 param_2)

{
  if (DAT_0200c430 == (code *)0x0) {
    FUN_00414480(param_2);
  }
  else {
    (*DAT_0200c430)(param_2,*(undefined8 *)(param_1 + 0x20));
  }
  return param_2;
}


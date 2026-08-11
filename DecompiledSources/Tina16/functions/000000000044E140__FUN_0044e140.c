/* Ghidra address: 0044e140 */
/* Ghidra symbol: FUN_0044e140 */


longlong * FUN_0044e140(longlong param_1,longlong *param_2)

{
  FUN_00414480(param_2);
  for (; param_1 != 0; param_1 = *(longlong *)(param_1 + 0x18)) {
    if (*param_2 == 0) {
      FUN_00414ad0(param_2,*(undefined8 *)(param_1 + 8));
    }
    else {
      FUN_00416cd0(param_2,3,*param_2,&LAB_0044e1b0,*(undefined8 *)(param_1 + 8));
    }
  }
  return param_2;
}


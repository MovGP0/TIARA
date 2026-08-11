/* Ghidra address: 0085a860 */
/* Ghidra symbol: FUN_0085a860 */


undefined8 * FUN_0085a860(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  ushort *puVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (*param_3 == 0) {
    FUN_00414480(param_2);
  }
  else {
    for (puVar1 = (ushort *)*param_3; 0x1f < *puVar1; puVar1 = puVar1 + 1) {
    }
    FUN_00414740(param_2,*param_3,((longlong)puVar1 - *param_3) / 2 & 0xffffffff);
    FUN_0085a610(local_20,*param_2);
    FUN_00414ad0(param_2,local_20[0]);
    for (; (*puVar1 != 0 && (*puVar1 < 0x20)); puVar1 = puVar1 + 1) {
    }
    if (*puVar1 == 0) {
      *param_3 = 0;
    }
    else {
      *param_3 = (longlong)puVar1;
    }
  }
  FUN_00414480(local_20);
  return param_2;
}


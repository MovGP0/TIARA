/* Ghidra address: 0085a450 */
/* Ghidra symbol: FUN_0085a450 */


undefined8 * FUN_0085a450(undefined8 *param_1,byte param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  if (param_2 < 4) {
    if (param_2 == 3) {
      FUN_0041ddd0(param_1,PTR_PTR_02005208);
      goto LAB_0085a4f6;
    }
    if (param_2 == 1) {
      FUN_0041ddd0(param_1,PTR_PTR_020032d0);
      goto LAB_0085a4f6;
    }
    if (param_2 == 2) {
      FUN_0041ddd0(param_1,PTR_PTR_02001ac8);
      goto LAB_0085a4f6;
    }
  }
  else if ((param_2 == 4) || (param_2 == 6)) {
    FUN_0041ddd0(param_1,PTR_PTR_02004e58);
    goto LAB_0085a4f6;
  }
  FUN_00414480(param_1);
LAB_0085a4f6:
  FUN_0085a3a0(&local_10,*param_1);
  FUN_00414ad0(param_1,local_10);
  FUN_00414480(&local_10);
  return param_1;
}


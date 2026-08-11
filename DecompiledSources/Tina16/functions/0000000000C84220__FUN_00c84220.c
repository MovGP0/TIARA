/* Ghidra address: 00c84220 */
/* Ghidra symbol: FUN_00c84220 */


longlong * FUN_00c84220(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 local_res20;
  
  local_res20 = param_4;
  FUN_00414610(param_4);
  lVar1 = FUN_00c83030(param_1,param_3);
  if (*(longlong *)(lVar1 + 0x20) == 0) {
    FUN_00c84070(param_1,param_2,*(undefined8 *)(lVar1 + 0x18),*(undefined8 *)(lVar1 + 8),
                 local_res20);
    if (*param_2 != 0) {
      FUN_00414ad0(lVar1 + 0x20,*param_2);
    }
  }
  else {
    FUN_00414ad0(param_2,*(undefined8 *)(lVar1 + 0x20));
  }
  FUN_00414480(&local_res20);
  return param_2;
}


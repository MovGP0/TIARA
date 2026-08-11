/* Ghidra address: 0108d7b0 */
/* Ghidra symbol: FUN_0108d7b0 */


void FUN_0108d7b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined1 param_6)

{
  longlong lVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00414610(param_5);
  FUN_0160ba20(local_res10[0],param_3,param_4,param_5,0,param_6);
  FUN_0107a0c0(param_1);
  *(undefined1 *)(param_1 + 0xb50) = 1;
  lVar1 = FUN_01081ce0();
  FUN_010792a0(param_1,lVar1);
  *(undefined1 *)(param_1 + 0xb50) = 0;
  if (lVar1 != 0) {
    FUN_01085110(param_1,*(undefined8 *)(lVar1 + 0x10),0xffffffff);
  }
  FUN_00414480(local_res10);
  FUN_00414480(&param_5);
  return;
}


/* Ghidra address: 00f52ea0 */
/* Ghidra symbol: FUN_00f52ea0 */


void FUN_00f52ea0(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                 longlong *param_5)

{
  longlong lVar1;
  undefined8 local_res20;
  
  local_res20 = param_4;
  FUN_00414610(param_4);
  lVar1 = FUN_01b06050(&PTR_FUN_00f51578,1,param_1,1,0,param_2,0,0,0,0,0);
  *param_5 = lVar1;
  *(undefined8 *)(*param_5 + 0x1320) = param_3;
  FUN_00f51a00(*param_5,param_2);
  FUN_016f1c10(*param_5,6);
  FUN_00f51ae0(*param_5,param_2,param_3,local_res20);
  FUN_00414480(&local_res20);
  return;
}


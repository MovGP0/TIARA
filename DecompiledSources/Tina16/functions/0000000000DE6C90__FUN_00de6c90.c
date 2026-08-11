/* Ghidra address: 00de6c90 */
/* Ghidra symbol: FUN_00de6c90 */


void FUN_00de6c90(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 param_5,longlong param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  uVar1 = FUN_00de5c10(&DAT_00de44a0,1,param_6,local_res18,local_res20,param_5);
  *param_7 = uVar1;
  if (param_6 == 0) {
    *(undefined8 *)(param_1 + 8) = *param_7;
  }
  else {
    FUN_00de5eb0(*(undefined8 *)(param_6 + 0x30),*param_7);
  }
  FUN_00414560(&local_res18,2);
  return;
}


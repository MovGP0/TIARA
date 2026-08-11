/* Ghidra address: 01816460 */
/* Ghidra symbol: FUN_01816460 */


undefined8 FUN_01816460(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  iVar1 = FUN_018163f0(param_1,local_res18[0]);
  if (iVar1 == -1) {
    FUN_0046f180(param_2);
  }
  else {
    lVar2 = FUN_018163e0(param_1,iVar1);
    FUN_00461840(param_2,lVar2 + 0x28);
  }
  FUN_00414480(local_res18);
  return param_2;
}


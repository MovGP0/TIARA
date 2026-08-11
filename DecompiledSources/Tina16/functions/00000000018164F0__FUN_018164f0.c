/* Ghidra address: 018164f0 */
/* Ghidra symbol: FUN_018164f0 */


void FUN_018164f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar2 = FUN_018163f0(param_1,local_res10[0]);
  if (iVar2 == -1) {
    lVar1 = FUN_018163c0(param_1);
    FUN_00414ad0(lVar1 + 0x20,local_res10[0]);
    FUN_00461840(lVar1 + 0x28,param_3);
  }
  else {
    lVar1 = FUN_018163e0(param_1,iVar2);
    FUN_00461840(lVar1 + 0x28,param_3);
  }
  FUN_00414480(local_res10);
  return;
}


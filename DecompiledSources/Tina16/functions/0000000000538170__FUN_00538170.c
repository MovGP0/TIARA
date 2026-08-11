/* Ghidra address: 00538170 */
/* Ghidra symbol: FUN_00538170 */


void FUN_00538170(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_00417580(param_3,&DAT_00527bf8);
  *param_3 = param_2;
  FUN_0041b840(param_3 + 1,PTR_PTR_01dd79f8);
  iVar1 = FUN_00534f00(param_2);
  if (iVar1 < 1) {
    lVar2 = FUN_00535cd0(&DAT_005358f8,1,local_res8,8,param_2);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar2 + 0x30;
    }
    FUN_0041b840(param_3 + 1,lVar2);
  }
  else {
    param_3[2] = local_res8[0];
  }
  return;
}


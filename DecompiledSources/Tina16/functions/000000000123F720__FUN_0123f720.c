/* Ghidra address: 0123f720 */
/* Ghidra symbol: FUN_0123f720 */


void FUN_0123f720(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  lVar1 = FUN_0123da30(param_1,local_res18);
  lVar2 = FUN_0123dae0(param_1,local_res20);
  if ((lVar1 == 0) || (lVar2 == 0)) {
    uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,&DAT_0123f7e8);
    lVar2 = FUN_004134c0(uVar3);
  }
  FUN_0123f930(param_1,param_2,lVar1,lVar2);
  FUN_00414560(&local_res18,2);
  return;
}


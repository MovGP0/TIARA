/* Ghidra address: 0055b560 */
/* Ghidra symbol: FUN_0055b560 */


void FUN_0055b560(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_30 [2];
  
  FUN_00417580(param_3,&DAT_00527bf8);
  local_30[0] = FUN_0055b5f0(param_1,param_2);
  lVar1 = *param_1;
  if (lVar1 == 0) {
    uVar2 = FUN_00417740(param_3,&DAT_00527bf8);
    FUN_00538080(local_30,&DAT_00401140,uVar2);
  }
  else {
    uVar2 = FUN_00417740(param_3,&DAT_00527bf8);
    FUN_00538080(local_30[0],lVar1,uVar2);
  }
  return;
}


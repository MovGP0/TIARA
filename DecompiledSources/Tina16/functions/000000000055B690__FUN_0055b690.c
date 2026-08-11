/* Ghidra address: 0055b690 */
/* Ghidra symbol: FUN_0055b690 */


void FUN_0055b690(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 local_28 [32];
  
  FUN_00417580(local_28,&DAT_00527bf8);
  if (*param_1 == 0) {
    uVar1 = FUN_0055b5f0(param_1,param_2);
    FUN_005382b0(param_3,uVar1);
  }
  else {
    FUN_005376c0(param_3,local_28,*param_1,1);
    uVar1 = FUN_0055b5f0(param_1,param_2);
    FUN_005382b0(local_28,uVar1);
  }
  FUN_00417740(local_28,&DAT_00527bf8);
  return;
}


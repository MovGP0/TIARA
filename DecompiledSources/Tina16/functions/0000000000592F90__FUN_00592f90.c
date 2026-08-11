/* Ghidra address: 00592f90 */
/* Ghidra symbol: FUN_00592f90 */


void FUN_00592f90(undefined8 param_1,float param_2)

{
  undefined4 uVar1;
  undefined1 local_14 [4];
  double local_10;
  
  FUN_005260d0((double)param_2,&local_10,local_14);
  if (local_10 == 0.0) {
    local_10 = (double)FUN_0040c850(local_10);
  }
  uVar1 = FUN_00525420(&local_10,8,0);
  FUN_00525420(local_14,4,uVar1);
  return;
}


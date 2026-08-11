/* Ghidra address: 00593030 */
/* Ghidra symbol: FUN_00593030 */


void FUN_00593030(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 local_14 [4];
  double local_10;
  
  FUN_005260d0(param_2,&local_10,local_14);
  if (local_10 == 0.0) {
    local_10 = (double)FUN_0040c850(local_10);
  }
  uVar1 = FUN_00525420(&local_10,8,0);
  FUN_00525420(local_14,4,uVar1);
  return;
}


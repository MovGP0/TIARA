/* Ghidra address: 0147d210 */
/* Ghidra symbol: FUN_0147d210 */


void FUN_0147d210(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_28;
  undefined1 *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = auStack_58;
  local_28 = 0;
  local_18 = 0;
  FUN_00f2d260(param_2,&local_18,2);
  uVar1 = FUN_0045ae90();
  local_38 = 1;
  local_10 = FUN_004ba470(&PTR_FUN_0047d288,1,local_18,uVar1);
  FUN_00441710(&local_28,param_1);
  FUN_00440c30(local_28);
  FUN_004b9df0(local_10,param_1);
  FUN_00410f20(local_10);
  FUN_00414480(&local_28);
  FUN_00414480(&local_18);
  return;
}


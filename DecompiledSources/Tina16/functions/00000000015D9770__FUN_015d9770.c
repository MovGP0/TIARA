/* Ghidra address: 015d9770 */
/* Ghidra symbol: FUN_015d9770 */


undefined8 FUN_015d9770(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  FUN_00441820(&local_18,param_2);
  FUN_00416ad0(&local_18,&LAB_015d9814);
  uVar1 = FUN_00416740(local_18);
  (**(code **)PTR_PTR_02002ea8)(uVar1,&local_20,local_28,local_30);
  local_10 = local_20;
  FUN_00414480(&local_18);
  return local_10;
}


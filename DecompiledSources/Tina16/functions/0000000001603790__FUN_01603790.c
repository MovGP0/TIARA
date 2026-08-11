/* Ghidra address: 01603790 */
/* Ghidra symbol: FUN_01603790 */


undefined8 FUN_01603790(undefined8 param_1)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = auStack_58;
  local_38 = 0;
  local_10 = 0;
  local_18 = FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_00441920(&local_10,param_1);
  FUN_00441640(&local_38,param_1);
  FUN_016034e0(auStack_58,local_38);
  local_20 = local_18;
  FUN_00414480(&local_38);
  FUN_00414480(&local_10);
  return local_20;
}


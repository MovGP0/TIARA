/* Ghidra address: 01d462d0 */
/* Ghidra symbol: FUN_01d462d0 */


longlong * FUN_01d462d0(undefined8 param_1,undefined8 param_2)

{
  longlong *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  if (DAT_03567ba8 == (longlong *)0x0) {
    local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    FUN_01d46210(param_1,&local_18);
    FUN_00416cd0(&local_10,3,local_18,&LAB_01d463b8,param_2);
    (**(code **)(*local_20 + 0x78))(local_20,local_10);
  }
  else {
    local_20 = (longlong *)(**(code **)(*DAT_03567ba8 + 0x30))(DAT_03567ba8,param_2);
  }
  FUN_00414560(&local_18,2);
  return local_20;
}


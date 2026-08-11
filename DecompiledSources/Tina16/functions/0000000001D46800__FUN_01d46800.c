/* Ghidra address: 01d46800 */
/* Ghidra symbol: FUN_01d46800 */


undefined1 FUN_01d46800(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined1 local_11;
  undefined8 local_10;
  
  local_10 = 0;
  local_11 = 1;
  if (DAT_03567ba8 != (longlong *)0x0) {
    FUN_01d471a0(param_1,&local_10,param_3);
    local_11 = (**(code **)(*DAT_03567ba8 + 0x28))(DAT_03567ba8,param_2,local_10);
  }
  FUN_00414480(&local_10);
  return local_11;
}


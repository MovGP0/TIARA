/* Ghidra address: 01d465f0 */
/* Ghidra symbol: FUN_01d465f0 */


undefined1 FUN_01d465f0(undefined8 param_1,undefined8 param_2)

{
  undefined1 local_19;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_01d471a0(param_1,&local_10,0);
  if (DAT_03567ba8 == (longlong *)0x0) {
    local_19 = 1;
  }
  else {
    local_19 = (**(code **)(*DAT_03567ba8 + 0x20))(DAT_03567ba8,param_2,local_10);
  }
  FUN_00414480(&local_10);
  return local_19;
}


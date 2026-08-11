/* Ghidra address: 01d46230 */
/* Ghidra symbol: FUN_01d46230 */


undefined4 FUN_01d46230(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 local_1c;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_01d471a0(param_1,&local_10,0);
  local_1c = 1;
  if (DAT_03567ba8 != (longlong *)0x0) {
    cVar1 = (**(code **)(*DAT_03567ba8 + 0x18))(DAT_03567ba8,param_2,local_10);
    if (cVar1 == '\0') {
      local_1c = 0;
    }
  }
  FUN_00414480(&local_10);
  return local_1c;
}


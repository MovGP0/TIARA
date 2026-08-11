/* Ghidra address: 00440f60 */
/* Ghidra symbol: FUN_00440f60 */


uint FUN_00440f60(undefined8 param_1,byte param_2)

{
  char cVar1;
  undefined8 uVar2;
  uint local_2c;
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_28 = 0;
  local_10 = 0;
  uVar2 = FUN_00416740(param_1);
  local_2c = thunk_FUN_0414b2cb(uVar2);
  if ((param_2 & (local_2c & 0x400) != 0) != 0) {
    local_2c = 0xffffffff;
    cVar1 = FUN_0043da30(param_1,&local_10);
    if (cVar1 != '\0') {
      cVar1 = FUN_00442020(local_10);
      if (cVar1 != '\0') {
        FUN_00441640(&local_28,param_1);
        FUN_0044f850(local_20,local_28);
        FUN_00416ba0(&local_10,local_20[0],local_10);
      }
      uVar2 = FUN_00416740(local_10);
      local_2c = thunk_FUN_0414b2cb(uVar2);
    }
  }
  FUN_00414560(&local_28,2);
  FUN_00414480(&local_10);
  return local_2c;
}


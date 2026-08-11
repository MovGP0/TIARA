/* Ghidra address: 0176c700 */
/* Ghidra symbol: FUN_0176c700 */


undefined1 FUN_0176c700(longlong param_1,longlong param_2)

{
  undefined1 local_2078 [32];
  uint local_2058;
  undefined1 *local_2040;
  undefined1 local_1078;
  undefined1 local_78;
  undefined1 local_21;
  longlong *local_20;
  longlong *local_18;
  undefined8 local_10;
  
  local_78 = 0;
  local_1078 = 0;
  local_2078[0] = 0;
  local_2040 = local_2078;
  local_21 = *(int *)(*(longlong *)(param_2 + 8) + 0x10) ==
             *(int *)(*(longlong *)(param_1 + 8) + 0x10);
  if ((bool)local_21) {
    local_18 = (longlong *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
    local_2058 = local_2058 & 0xffffff00;
    local_10 = FUN_01d30b30(&DAT_01d2e8e8,1,local_18,1);
    local_2058 = 0;
    FUN_01769030(param_1,&local_10,0,0);
    FUN_00410f20(local_10);
    local_20 = (longlong *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
    local_2058 = local_2058 & 0xffffff00;
    local_10 = FUN_01d30b30(&DAT_01d2e8e8,1,local_20,1);
    local_2058 = 0;
    FUN_01769030(param_2,&local_10,0,0);
    FUN_00410f20(local_10);
    (**(code **)(*local_18 + 0x48))(local_18,0,0);
    (**(code **)(*local_20 + 0x48))(local_20,0,0);
    local_21 = FUN_0176c6b0(local_18,local_20);
    FUN_00410f20(local_18);
    FUN_00410f20(local_20);
  }
  return local_21;
}


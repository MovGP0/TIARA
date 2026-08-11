/* Ghidra address: 01a31de0 */
/* Ghidra symbol: FUN_01a31de0 */


undefined1 FUN_01a31de0(undefined8 param_1)

{
  undefined8 local_res8 [4];
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 *local_20;
  undefined2 local_c;
  undefined1 local_9;
  
  local_20 = auStack_48;
  local_28 = 0;
  local_res8[0] = param_1;
  FUN_00414630(param_1);
  local_9 = 1;
  local_c = *(undefined2 *)(PTR_DAT_02004830 + 0x17a);
  *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = 0x2e;
  FUN_00416880(&local_28,local_res8[0]);
  FUN_00b8f030(local_28);
  *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = local_c;
  FUN_00414480(&local_28);
  FUN_004144d0(local_res8);
  return local_9;
}


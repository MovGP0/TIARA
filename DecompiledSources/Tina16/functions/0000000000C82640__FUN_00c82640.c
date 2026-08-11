/* Ghidra address: 00c82640 */
/* Ghidra symbol: FUN_00c82640 */


void FUN_00c82640(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res10;
  undefined8 local_res18;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined1 *local_20;
  undefined8 local_18;
  char local_9;
  
  local_20 = auStack_58;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  local_9 = '\0';
  local_38 = local_res10;
  local_30 = local_res18;
  local_18 = FUN_00c81990(&DAT_00c7fe28,1,*(undefined4 *)(param_1 + 0x94),
                          *(undefined8 *)(param_1 + 0x98));
  if (local_9 == '\0') {
    FUN_004ae7e0(*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 8),local_18);
  }
  FUN_00414560(&local_res10,2);
  return;
}


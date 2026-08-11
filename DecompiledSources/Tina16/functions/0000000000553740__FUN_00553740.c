/* Ghidra address: 00553740 */
/* Ghidra symbol: FUN_00553740 */


undefined8 FUN_00553740(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined4 local_2c;
  undefined8 local_28;
  int local_1c;
  longlong local_18;
  longlong local_10;
  
  local_50 = auStack_78;
  local_10 = FUN_0056a100(&PTR_FUN_00555df0,1);
  local_18 = FUN_00547190(param_1);
  local_18 = local_18 + 4;
  for (local_1c = FUN_0053c4a0(&local_18); 0 < local_1c; local_1c = local_1c + -1) {
    uVar1 = FUN_00545f10(*(undefined8 *)(param_1 + 0x18),&PTR_FUN_00529d98,param_1,&local_18);
    local_28 = FUN_004113f0(uVar1,&PTR_FUN_00529d98);
    local_2c = FUN_00597e50(local_10 + 8,&local_28);
  }
  FUN_0056afc0(&DAT_00534c70,param_2,local_10);
  FUN_00410f20(local_10);
  return param_2;
}


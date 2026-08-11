/* Ghidra address: 015ec240 */
/* Ghidra symbol: FUN_015ec240 */


void FUN_015ec240(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_40 = 0;
  local_30[0] = 0;
  local_20[0] = 0;
  *(undefined4 *)(param_1 + 8) = 1;
  uVar1 = FUN_004095c0(0x200);
  FUN_00409da0(local_30,0);
  FUN_00415dd0(local_20,local_30[0],0);
  FUN_00416880(&local_40,local_20[0]);
  FUN_00450070(&local_38,local_40,&DAT_015ec378,&DAT_015ec388,1);
  FUN_00415dd0(local_20,local_38,0);
  FUN_004425e0(uVar1,local_20[0]);
  puVar2 = (undefined8 *)FUN_004095c0((longlong)((*(int *)(param_1 + 8) + 1) * 8));
  *(undefined8 **)(param_1 + 0x10) = puVar2;
  *puVar2 = uVar1;
  puVar2[1] = 0;
  FUN_00414560(&local_40,3);
  FUN_004144d0(local_20);
  return;
}


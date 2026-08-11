/* Ghidra address: 01a55aa0 */
/* Ghidra symbol: FUN_01a55aa0 */


void FUN_01a55aa0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_res10 [3];
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  (**(code **)(**(longlong **)(param_1 + 0x98) + 0x90))(*(longlong **)(param_1 + 0x98));
  FUN_00414b50(param_1 + 0x90,local_res10[0]);
  FUN_00416ba0(local_20,&LAB_01a55bf8,*(undefined8 *)(param_1 + 0x90));
  FUN_01a55000(*(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 0x98),local_20[0],0);
  FUN_004b37d0(*(undefined8 *)(param_1 + 0x98),&local_28);
  FUN_00414b50(param_1 + 0x88,local_28);
  uVar1 = FUN_00f2e9d0(&LAB_00f22a90,1,*(undefined8 *)(param_1 + 0x88));
  FUN_00f30e70(*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x90),uVar1);
  FUN_00414560(&local_28,2);
  FUN_00414480(local_res10);
  return;
}


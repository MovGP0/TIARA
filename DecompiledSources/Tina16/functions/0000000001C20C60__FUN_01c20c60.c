/* Ghidra address: 01c20c60 */
/* Ghidra symbol: FUN_01c20c60 */


void FUN_01c20c60(longlong param_1)

{
  int iVar1;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  local_10 = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f8),local_20);
  FUN_01c1e440(&local_10,local_20[0]);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f8),&local_28);
  FUN_01c1f390(param_1,local_28,local_10);
  FUN_01c1f360(param_1,&local_30);
  FUN_00416ad0(&local_30,local_10);
  iVar1 = FUN_01c1f4d0(param_1,local_30,*(undefined8 *)(param_1 + 0x728));
  if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x508) = 1;
  }
  FUN_00414480(&local_30);
  FUN_00414560(&local_28,2);
  FUN_00414480(&local_10);
  return;
}


/* Ghidra address: 006f5fb0 */
/* Ghidra symbol: FUN_006f5fb0 */


void FUN_006f5fb0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 local_20;
  
  local_20 = 0;
  FUN_004167d0(&local_20,*(undefined8 *)(param_2 + 0x18));
  lVar1 = FUN_006f3cc0(param_1,param_2);
  if (*(longlong *)(param_1 + 0x6e0) != 0) {
    (**(code **)(param_1 + 0x6e0))(*(undefined8 *)(param_1 + 0x6e8),param_1,lVar1,&local_20);
  }
  if (lVar1 != 0) {
    FUN_006ef050(lVar1,local_20);
  }
  FUN_00414480(&local_20);
  return;
}


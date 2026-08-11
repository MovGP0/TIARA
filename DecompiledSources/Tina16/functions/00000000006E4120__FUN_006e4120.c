/* Ghidra address: 006e4120 */
/* Ghidra symbol: FUN_006e4120 */


void FUN_006e4120(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 local_20;
  
  local_20 = 0;
  lVar1 = FUN_006e2700(param_1,param_2);
  if (*(longlong *)(param_2 + 0x18) == 0) {
    if (*(longlong *)(param_1 + 0x5b8) != 0) {
      (**(code **)(param_1 + 0x5b8))(*(undefined8 *)(param_1 + 0x5c0),param_1,lVar1);
    }
  }
  else {
    FUN_004167d0(&local_20,*(longlong *)(param_2 + 0x18));
    if (*(longlong *)(param_1 + 0x668) != 0) {
      (**(code **)(param_1 + 0x668))(*(undefined8 *)(param_1 + 0x670),param_1,lVar1,&local_20);
    }
    if (lVar1 != 0) {
      FUN_006dc8a0(lVar1,local_20);
    }
  }
  FUN_00414480(&local_20);
  return;
}


/* Ghidra address: 017a56b0 */
/* Ghidra symbol: FUN_017a56b0 */


void FUN_017a56b0(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  longlong local_10;
  
  local_28 = 0;
  local_18 = 0;
  local_20 = 0;
  local_10 = 0;
  if (*(longlong *)(param_1 + 0x7c0) != 0) {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f8),&local_10);
    if (local_10 == 0) {
      FUN_0043f750(&local_20,*(undefined4 *)(*(longlong *)(param_1 + 0x7c0) + 0x28));
      FUN_00416ba0(&local_18,L"Picture #",local_20);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x6f8),local_18);
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f8),&local_28);
      FUN_006dc8a0(*(undefined8 *)(param_1 + 0x7c0),local_28);
    }
  }
  FUN_006dcca0(param_3,*(undefined4 *)(param_3 + 0x28));
  FUN_00414480(&local_28);
  FUN_00414560(&local_20,2);
  FUN_00414480(&local_10);
  return;
}


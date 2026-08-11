/* Ghidra address: 0123bc40 */
/* Ghidra symbol: FUN_0123bc40 */


void FUN_0123bc40(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38 [2];
  undefined1 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = auStack_58;
  local_28 = 0;
  local_10 = 0;
  local_18 = 0;
  FUN_00416ba0(&local_10,*(undefined8 *)(param_1 + 0x40),L"filter_log.txt");
  FUN_00416ba0(&local_18,*(undefined8 *)(param_1 + 0x40),L"filterw.cir");
  FUN_0123bf30(param_1);
  FUN_0123d6a0(param_1);
  FUN_01192ee0(local_10,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  if (0x14 < *(int *)(*(longlong *)(param_1 + 0x600) + 0x1fa0)) {
    local_38[0] = 0x14;
    local_30 = 0;
    FUN_00442f70(&local_28,L"Filter order exceeds max value: (%d)",local_38,0);
    uVar1 = FUN_0044d490(&PTR_FUN_004334c0,1,local_28);
    FUN_004134c0(uVar1);
  }
  FUN_012404c0(param_1);
  FUN_00414480(&local_28);
  FUN_00414560(&local_18,2);
  return;
}


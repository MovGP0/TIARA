/* Ghidra address: 00d4a170 */
/* Ghidra symbol: FUN_00d4a170 */


void FUN_00d4a170(longlong *param_1)

{
  char cVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_28;
  longlong local_20;
  
  local_30 = auStack_58;
  local_20 = 0;
  local_28 = FUN_005fe0d0(&PTR_FUN_005f54e0,1);
  local_20 = thunk_FUN_0411fe47(param_1[1]);
  if (local_20 != 0) {
    FUN_005ffb10(local_28,local_20);
    cVar1 = FUN_00787f80(param_1[3]);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x80))(param_1,local_28);
      (**(code **)(*param_1 + 0x78))(param_1,local_28);
    }
  }
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  if ((int)param_1[0xc] % 0x14 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (local_20 != 0) {
    thunk_FUN_041a9b5c(param_1[1],local_20);
  }
  FUN_005ffb10(local_28,0);
  FUN_00410f20(local_28);
  return;
}


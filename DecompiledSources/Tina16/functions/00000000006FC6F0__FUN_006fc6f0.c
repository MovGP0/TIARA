/* Ghidra address: 006fc6f0 */
/* Ghidra symbol: FUN_006fc6f0 */


void FUN_006fc6f0(longlong param_1)

{
  int iVar1;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined8 local_40;
  undefined8 local_38;
  int local_2c;
  int local_28;
  uint local_24;
  undefined8 local_20;
  
  local_50 = auStack_78;
  FUN_006fd900(param_1);
  FUN_0065b830(param_1);
  local_38 = FUN_0065b870(param_1);
  local_24 = thunk_FUN_04118143(local_38,0xfffffff0);
  local_40 = FUN_0065b870(param_1);
  thunk_FUN_03c9d277(local_40,0xfffffff0,(longlong)(int)(local_24 & 0xefffffff));
  local_2c = FUN_006fd980(param_1);
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x4b0) + 0x10);
  local_28 = 0;
  if (-1 < iVar1 + -1) {
    do {
      if (local_28 < local_2c) {
        FUN_006fc050(param_1,0x440,local_28,local_28);
      }
      else {
        FUN_006fbd10(param_1,0x443,local_28,local_28);
      }
      local_28 = local_28 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  local_20 = FUN_0065b870(param_1);
  thunk_FUN_03c9d277(local_20,0xfffffff0,(longlong)(int)local_24);
  FUN_006fd910(param_1);
  FUN_006fb920(param_1,0);
  return;
}


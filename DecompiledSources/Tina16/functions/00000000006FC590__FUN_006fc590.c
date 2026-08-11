/* Ghidra address: 006fc590 */
/* Ghidra symbol: FUN_006fc590 */


void FUN_006fc590(longlong param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  uint local_14;
  undefined8 local_10;
  
  local_30 = auStack_58;
  if (((*(ushort *)(param_1 + 0x34) & 1) == 0) && (*(int *)(param_1 + 0x534) < 1)) {
    FUN_006fd900(param_1);
    FUN_0065b830(param_1);
    local_20 = FUN_0065b870(param_1);
    local_14 = thunk_FUN_04118143(local_20,0xfffffff0);
    local_28 = FUN_0065b870(param_1);
    thunk_FUN_03c9d277(local_28,0xfffffff0,(longlong)(int)(local_14 & 0xefffffff));
    iVar1 = FUN_006fd980(param_1);
    if (param_2 < iVar1) {
      FUN_006fc050(param_1,0x440,param_2,param_2);
    }
    else {
      FUN_006fbd10(param_1,0x443,param_2,param_2);
    }
    local_10 = FUN_0065b870(param_1);
    thunk_FUN_03c9d277(local_10,0xfffffff0,(longlong)(int)local_14);
    FUN_006fd910(param_1);
  }
  return;
}


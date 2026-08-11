/* Ghidra address: 006fc420 */
/* Ghidra symbol: FUN_006fc420 */


undefined1 FUN_006fc420(longlong param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined1 local_15;
  uint local_14;
  undefined8 local_10;
  
  local_30 = auStack_58;
  if (((*(ushort *)(param_1 + 0x34) & 1) == 0) && (*(int *)(param_1 + 0x534) == 0)) {
    FUN_006fd900(param_1);
    local_20 = FUN_0065b870(param_1);
    local_14 = thunk_FUN_04118143(local_20,0xfffffff0);
    local_28 = FUN_0065b870(param_1);
    thunk_FUN_03c9d277(local_28,0xfffffff0,(longlong)(int)(local_14 & 0xefffffff));
    iVar2 = FUN_006fd980(param_1);
    if (((param_2 < iVar2) && (cVar1 = FUN_006fbd10(param_1,0x416,param_2,param_2), cVar1 != '\0'))
       && (cVar1 = FUN_006fbd10(param_1,0x443,param_2,param_2), cVar1 != '\0')) {
      local_15 = 1;
    }
    else {
      local_15 = 0;
    }
    local_10 = FUN_0065b870(param_1);
    thunk_FUN_03c9d277(local_10,0xfffffff0,(longlong)(int)local_14);
    FUN_006fd910(param_1);
    return local_15;
  }
  return 0;
}


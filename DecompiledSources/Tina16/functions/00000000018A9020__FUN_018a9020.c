/* Ghidra address: 018a9020 */
/* Ghidra symbol: FUN_018a9020 */


void FUN_018a9020(longlong param_1,int param_2)

{
  int iVar1;
  int local_res10;
  undefined1 auStack_38 [40];
  undefined1 *local_10;
  
  local_10 = auStack_38;
  local_res10 = param_2;
  if (param_2 < 1) {
    local_res10 = 1;
  }
  iVar1 = FUN_018a9b40(param_1);
  if (iVar1 < local_res10) {
    local_res10 = FUN_018a9b40(param_1);
  }
  FUN_018a73c0(*(undefined8 *)(param_1 + 0x550));
  FUN_018a9880(param_1,local_res10);
  FUN_018a7070(*(undefined8 *)(param_1 + 0x550),*(undefined4 *)(param_1 + 0x528));
  FUN_018a7070(*(undefined8 *)(param_1 + 0x540),*(undefined4 *)(param_1 + 0x528));
  FUN_018a9b10(param_1);
  FUN_018a73d0(*(undefined8 *)(param_1 + 0x550));
  return;
}

